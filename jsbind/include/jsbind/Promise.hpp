#pragma once

#include "Any.hpp"
#include "Function.hpp"
#include <emlite/emlite.hpp>

// C++20 coroutine support
#if __cplusplus >= 202002L && __has_include(<coroutine>)
#include <coroutine>
#define JSBIND_COROUTINE_SUPPORT 1
#elif __has_include(<experimental/coroutine>)
#include <experimental/coroutine>
namespace std {
using experimental::coroutine_handle;
using experimental::suspend_always;
using experimental::suspend_never;
} // namespace std
#define JSBIND_COROUTINE_SUPPORT 1
#else
#define JSBIND_COROUTINE_SUPPORT 0
#endif

namespace jsbind {

/// Wrapper for JavaScript Promise objects
///
/// Promise provides a type-safe C++ interface for JavaScript promises,
/// including support for then/catch/finally chaining, static resolve/reject
/// methods, and await functionality for async operations.
template <typename T>
class Promise : public emlite::Val {
    explicit Promise(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    /// Creates Promise from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Promise wrapper object
    static Promise take_ownership(Handle h) noexcept { return Promise(h); }

    /// Creates Promise from an emlite::Val
    /// @param v emlite::Val to wrap
    explicit Promise(const emlite::Val &v) noexcept : emlite::Val(v) {}

    /// Creates undefined Promise
    Promise() noexcept : emlite::Val(emlite::Val::undefined()) {}

    /// Gets the Promise constructor function
    /// @returns emlite::Val representing the Promise constructor
    static emlite::Val instance() noexcept { return emlite::Val::global("Promise"); }

    /// Attaches fulfillment and rejection handlers
    /// @param onFulfilled function called when promise resolves
    /// @param onRejected function called when promise rejects
    /// @returns new Promise for the result
    Promise then(const Function &onFulfilled, const Function &onRejected) {
        return call("then", onFulfilled, onRejected).template as<Promise>();
    }

    /// Attaches rejection handler
    /// @param onRejected function called when promise rejects
    /// @returns new Promise for the result
    Promise catch_(const Function &onRejected) {
        return call("catch", onRejected).template as<Promise>();
    }

    /// Attaches finally handler
    /// @param onFinally function called when promise settles
    /// @returns new Promise for the result
    Promise finally(const Function &onFinally) {
        return call("finally", onFinally).template as<Promise>();
    }

    /// Creates resolved Promise with value
    /// @param value value to resolve with
    /// @returns Promise resolved with the value
    static Promise resolve(const Any &value = undefined()) {
        return Val::global("Promise").call("resolve", value).as<Promise>();
    }

    /// Creates rejected Promise with reason
    /// @param reason reason for rejection
    /// @returns Promise rejected with the reason
    static Promise reject(const Any &reason = undefined()) {
        return Val::global("Promise").call("reject", reason).as<Promise>();
    }

    /// Awaits promise resolution and returns value
    /// @returns resolved value converted to type T
    T await() const { return emlite::Val::await().template as<T>(); }

    /// Creates a copy of this Promise
    /// @returns cloned Promise
    Promise clone() const noexcept { return *this; }

#if JSBIND_COROUTINE_SUPPORT
    /// C++20 coroutine awaitable interface
    /// This allows using co_await with Promise objects
    struct awaitable {
        Promise<T> promise_;
        bool ready_     = false;
        bool has_error_ = false;
        T result_;
        Error error_;

        explicit awaitable(const Promise<T> &p) : promise_(p) {}

        /// Check if the promise is ready immediately
        bool await_ready() const noexcept {
            // JavaScript promises are always asynchronous
            return false;
        }

        /// Suspend and wait for promise resolution
        void await_suspend(std::coroutine_handle<> handle) {
            // Use JavaScript .then() to resume the coroutine when promise resolves
            promise_.then(
                Function::Fn<void(Any)>([this, handle](Any result) mutable {
                    if constexpr (std::is_same_v<T, Any>) {
                        result_ = result;
                    } else {
                        result_ = result.as<T>();
                    }
                    ready_     = true;
                    has_error_ = false;
                    handle.resume();
                }),
                Function::Fn<void(Any)>([this, handle](Any error) mutable {
                    // Store the error to be thrown in await_resume
                    error_ = error;
                    // Convert the rejection reason to an Error object
                    if (error.instanceof (Error::instance())) {
                        error_ = Error(error);
                    } else {
                        // Wrap non-Error values in a generic Error
                        error_ = Error("Promise rejected");
                        error_.set("reason", error);
                    }
                    has_error_ = true;
                    ready_     = true;
                    handle.resume();
                })
            );
        }

        /// Return the result when the coroutine resumes
        T await_resume() const {
            if (has_error_)
                emlite::Val::throw_(error_);
            return result_;
        }
    };

    /// Enable co_await operator for Promise
    awaitable operator co_await() const { return awaitable(*this); }
#endif
};

} // namespace jsbind