#pragma once

#include "Any.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

/// Wrapper for JavaScript Symbol objects
///
/// Symbol provides unique identifiers that can be used as object property keys.
/// It supports both local symbols and well-known symbols from the JavaScript
/// specification, as well as symbols from the global symbol registry.
class Symbol : public emlite::Val {
    explicit Symbol(Handle h) noexcept;

  public:
    /// Creates Symbol from a raw handle
    /// @param h raw JavaScript handle
    /// @returns Symbol wrapper object
    static Symbol take_ownership(Handle h) noexcept;

    /// Creates Symbol from an emlite::Val
    /// @param val emlite::Val to wrap
    explicit Symbol(const emlite::Val &val) noexcept;

    /// Creates new symbol with description
    /// @param description optional description for the symbol
    explicit Symbol(const String &description) noexcept;

    /// Creates new symbol without description
    Symbol() noexcept;

    /// Gets the Symbol constructor function
    /// @returns emlite::Val representing the Symbol constructor
    static emlite::Val instance() noexcept;

    /// Creates a copy of this Symbol
    /// @returns cloned Symbol
    [[nodiscard]] Symbol clone() const noexcept;

    // Properties
    /// Gets symbol description if available
    /// @returns Option containing description or None if undefined
    [[nodiscard]] Option<String> description() const noexcept;

    // Static well-known symbols
    /// Gets Symbol.iterator
    /// @returns well-known iterator symbol
    static Symbol iterator() noexcept;

    /// Gets Symbol.asyncIterator
    /// @returns well-known async iterator symbol
    static Symbol asyncIterator() noexcept;

    /// Gets Symbol.hasInstance
    /// @returns well-known hasInstance symbol
    static Symbol hasInstance() noexcept;

    /// Gets Symbol.isConcatSpreadable
    /// @returns well-known isConcatSpreadable symbol
    static Symbol isConcatSpreadable() noexcept;

    /// Gets Symbol.match
    /// @returns well-known match symbol
    static Symbol match() noexcept;

    /// Gets Symbol.matchAll
    /// @returns well-known matchAll symbol
    static Symbol matchAll() noexcept;

    /// Gets Symbol.replace
    /// @returns well-known replace symbol
    static Symbol replace() noexcept;

    /// Gets Symbol.search
    /// @returns well-known search symbol
    static Symbol search() noexcept;

    /// Gets Symbol.species
    /// @returns well-known species symbol
    static Symbol species() noexcept;

    /// Gets Symbol.split
    /// @returns well-known split symbol
    static Symbol split() noexcept;

    /// Gets Symbol.toPrimitive
    /// @returns well-known toPrimitive symbol
    static Symbol toPrimitive() noexcept;

    /// Gets Symbol.toStringTag
    /// @returns well-known toStringTag symbol
    static Symbol toStringTag() noexcept;

    /// Gets Symbol.unscopables
    /// @returns well-known unscopables symbol
    static Symbol unscopables() noexcept;

    // Static registry methods
    /// Gets symbol from global symbol registry
    /// @param key registry key to look up
    /// @returns symbol for the given key
    static Symbol for_(const String &key) noexcept;

    /// Gets key for symbol from global registry
    /// @param symbol symbol to look up
    /// @returns Option containing key or None if not in registry
    static Option<String> keyFor(const Symbol &symbol) noexcept;

    // Utility methods
    /// Converts symbol to string representation
    /// @returns string description of symbol
    [[nodiscard]] String toString() const noexcept;

    /// Gets primitive symbol value as string
    /// @returns string representation
    [[nodiscard]] String valueOf() const noexcept;

    /// Checks if symbol has no description
    /// @returns true if description is undefined
    [[nodiscard]] bool empty() const noexcept;

    /// Gets hash code for symbol
    /// @returns hash value based on unique handle
    [[nodiscard]] size_t hash() const noexcept;

    // Comparison operators for STL containers
    /// Less than comparison (for ordering)
    /// @param other symbol to compare with
    /// @returns true if this < other
    bool operator<(const Symbol &other) const noexcept;

    /// Greater than comparison
    /// @param other symbol to compare with
    /// @returns true if this > other
    bool operator>(const Symbol &other) const noexcept;

    /// Less than or equal comparison
    /// @param other symbol to compare with
    /// @returns true if this <= other
    bool operator<=(const Symbol &other) const noexcept;

    /// Greater than or equal comparison
    /// @param other symbol to compare with
    /// @returns true if this >= other
    bool operator>=(const Symbol &other) const noexcept;
};

} // namespace jsbind
