#pragma once

#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Wrapper for any JavaScript value
///
/// Any can hold any JavaScript value including primitives (numbers, strings,
/// booleans), objects, arrays, functions, null, and undefined. It provides
/// a type-safe interface for working with arbitrary JavaScript values.
class Any : public emlite::Val {
    explicit Any(Handle h) noexcept;

  public:
    /// Creates Any from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Any wrapper object
    static Any take_ownership(Handle h) noexcept;

    /// Creates Any from an emlite::Val
    /// @param v emlite::Val to wrap
    Any(const emlite::Val &v) noexcept;

    /// Creates Any from any type T
    /// @param v value to wrap in Any
    template <typename T>
    Any(const T &v) noexcept : emlite::Val(v) {}

    /// Creates Any holding JavaScript undefined
    Any() noexcept;

    /// Creates Any holding JavaScript undefined
    /// @returns Any containing undefined
    static Any undefined() noexcept;

    /// Creates Any holding JavaScript null
    /// @returns Any containing null
    static Any null() noexcept;

    /// Checks if this Any holds undefined
    /// @returns true if holding undefined
    [[nodiscard]] bool isUndefined() const;

    /// Checks if this Any holds null
    /// @returns true if holding null
    [[nodiscard]] bool isNull() const;

    /// Converts to boolean for conditional checks
    /// @returns false for null/undefined/falsy values, true otherwise
    explicit operator bool() const;

    DECLARE_CLONE(Any)
};
} // namespace jsbind
