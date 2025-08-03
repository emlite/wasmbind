#pragma once

#include "Any.hpp"
#include "Function.hpp"
#include <emlite/emlite.hpp>

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
};

} // namespace jsbind