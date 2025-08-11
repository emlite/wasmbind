#pragma once

#include "String.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Wrapper for JavaScript Error objects
///
/// Error provides access to JavaScript error objects and their properties.
/// It represents the base class for all JavaScript error types and provides
/// methods to access error message, name, and stack trace information.
class Error : public emlite::Val {
    explicit Error(Handle h) noexcept;

  public:
    /// Creates Error from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Error wrapper object
    static Error take_ownership(Handle h) noexcept;

    /// Creates Error from an emlite::Val
    /// @param val emlite::Val to wrap
    Error(const emlite::Val &val) noexcept;

    /// Creates new Error with message
    /// @param msg error message string
    Error(const char *msg) noexcept;

    /// Creates an "anonymous" error
    Error() noexcept;

    /// Gets the Error constructor function
    /// @returns emlite::Val representing the Error constructor
    static emlite::Val instance() noexcept;

    /// Gets the error message
    /// @returns String containing the error message
    [[nodiscard]] String message() const;

    /// Gets the error name/type
    /// @returns String containing the error name
    [[nodiscard]] String name() const;

    /// Gets the error stack trace if available
    /// @param out String to store stack trace
    /// @returns true if stack trace was available, false if undefined
    bool stack(String &out) const;
};

/// Macro to declare JavaScript error type wrappers
///
/// This macro generates a wrapper class for specific JavaScript error types
/// that inherit from the base Error class. Each generated class provides
/// the same interface as Error but represents a specific error type.
#define DECLARE_JS_ERROR(NAME)                                                                     \
    class NAME : public Error {                                                                    \
        explicit NAME(Handle h) noexcept;                                                          \
                                                                                                   \
      public:                                                                                      \
        static NAME take_ownership(Handle h) noexcept;                                             \
        NAME(const emlite::Val &val) noexcept;                                                     \
        NAME(const char *msg) noexcept;                                                            \
        static emlite::Val instance() noexcept;                                                    \
    };

/// JavaScript EvalError - thrown by eval() function
DECLARE_JS_ERROR(EvalError)

/// JavaScript RangeError - thrown when numeric value is outside valid range
DECLARE_JS_ERROR(RangeError)

/// JavaScript ReferenceError - thrown when referencing undefined variable
DECLARE_JS_ERROR(ReferenceError)

/// JavaScript SyntaxError - thrown when parsing invalid syntax
DECLARE_JS_ERROR(SyntaxError)

/// JavaScript TypeError - thrown when value is not of expected type
DECLARE_JS_ERROR(TypeError)

/// JavaScript URIError - thrown by URI handling functions
DECLARE_JS_ERROR(URIError)

/// JavaScript AggregateError - represents multiple errors wrapped in one
DECLARE_JS_ERROR(AggregateError)

/// Safe JavaScript operation wrapper
template <typename F>
auto try_js(F &&func) -> Result<decltype(func()), Error> {
    // Note: We can't catch arbitrary exceptions without std library
    // This is a simplified version that works with emlite's error handling
    return Result<decltype(func()), Error>(emlite::detail::forward<F>(func)());
}

#undef DECLARE_JS_ERROR
} // namespace jsbind