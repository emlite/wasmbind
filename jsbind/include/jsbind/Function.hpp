#pragma once

#include "Any.hpp"
#include "Array.hpp"
#include "Error.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>
#include <stddef.h>

namespace jsbind {

/// Wrapper for JavaScript Function objects
///
/// Function provides a C++ interface for JavaScript functions including
/// creation, invocation, and binding. It supports both native callback
/// functions and dynamically created JavaScript functions from source code.
class Function : public emlite::Val {
    explicit Function(Handle h) noexcept;

    /// Helper function to create dynamic JavaScript functions
    /// @param args array of parameter names
    /// @param body function body source code
    /// @returns emlite::Val representing the created function
    template <size_t N, size_t... I>
    static emlite::Val
    make_dyn_function(const char *const (&args)[N], const char *body, emlite::detail::index_sequence<I...>) {
        return emlite::Val::global("Function")
            .new_(emlite::Val(args[I])..., emlite::Val(body))
            .template as<Function>();
    }

    template <size_t N>
    Function(const char *const (&args)[N], const char *body)
        : emlite::Val(make_dyn_function(args, body, emlite::detail::make_index_sequence<N>{})) {}

    Function(const char *name);

  public:
    /// Creates Function from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Function wrapper object
    static Function take_ownership(Handle h) noexcept;

    /// Creates Function from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit Function(const emlite::Val &val) noexcept;

    /// Gets the Function constructor function
    /// @returns emlite::Val representing the Function constructor
    static emlite::Val instance() noexcept;

    /// Creates Function from parameter names and body
    /// @param args array of parameter names
    /// @param body function body source code
    template <size_t N>
    static Result<Function, Error> create(const char *const (&args)[N], const char *body) {
        return Function(args, body).as<Result<Function, Error>>();
    }

    /// Creates Function by name from global scope
    /// @param name function name to look up
    static Result<Function, Error> get(const char *name);

    /// Gets global function by name
    /// @param name function name to look up
    /// @returns Function if found and callable, nullopt otherwise
    static Option<Function> global(const char *name);

    /// Converts function to string representation
    /// @returns string representation of the function
    [[nodiscard]] String toString() const noexcept;

    /// Helper template for creating Functions from C++ callbacks
    ///
    /// This template provides type-safe creation of JavaScript functions
    /// from C++ function objects and lambdas. The default specialization
    /// handles generic callbacks, while the typed specialization provides
    /// automatic parameter and return type handling.
    template <class = void>
    struct Fn {
        emlite::Val _f; ///< Underlying function value

        /// Creates Function from raw callback
        /// @param f callback function pointer
        /// @param data optional user data
        Fn(Callback f, const emlite::Val &data = emlite::Val::null()) noexcept
            : _f(emlite::Val::make_fn(f, data)) {}

        /// Creates Function from closure
        /// @param f closure object
        Fn(emlite::Closure<Val(emlite::Params)> &&f) noexcept
            : _f(emlite::Val::make_fn(emlite::detail::move(f))) {}

        /// Converts to Function object
        /// @returns Function wrapper
        operator Function() const { return Function(_f); }
    };

    /// Specialized template for typed function signatures
    /// @tparam Ret return type
    /// @tparam Args parameter types
    template <typename Ret, typename... Args>
    struct Fn<Ret(Args...)> {
        emlite::Val f; ///< Underlying function value

        /// Creates Function from typed callable
        /// @param f callable object (function, lambda, etc.)
        template <typename F>
        Fn(F &&f) noexcept : f(emlite::Val::make_fn<Ret, Args...>(emlite::detail::forward<F>(f))) {}

        /// Converts to Function object
        /// @returns Function wrapper
        operator Function() const { return Function(f); }
    };

    /// Calls function with specified this value and arguments array
    /// @param this_arg value to use as 'this' when calling function
    /// @param args_array array of arguments to pass to function
    /// @returns Any containing the function result
    Result<Any, Error> apply(const Any &this_arg, const Array &args_array);

    /// Creates bound function with specified this value and arguments
    /// @param this_arg value to use as 'this' in bound function
    /// @param args arguments to bind to the function
    /// @returns new Function with bound context and arguments
    template <typename... Args>
    Function bind(const Any &this_arg, Args... args) {
        return call("bind", this_arg, emlite::detail::forward<Args>(args)...)
            .template as<Function>();
    }

    /// Calls function with specified this value and arguments
    /// @param this_arg value to use as 'this' when calling function
    /// @param args arguments to pass to function
    /// @returns function result converted to type T
    template <typename T, typename... Args>
    Result<T, Error> call(const Any &this_arg, Args... args) {
        return emlite::Val::call("call", this_arg, emlite::detail::forward<Args>(args)...)
            .template as<Result<T, Error>>();
    }

    DECLARE_CLONE(Function)
};
} // namespace jsbind
