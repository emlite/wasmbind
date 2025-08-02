#pragma once

#include "Any.hpp"
#include "String.hpp"
#include "utils.hpp"
#include <emlite/emlite.hpp>

namespace jsbind {

class Symbol : public emlite::Val {
    explicit Symbol(Handle h) noexcept
        : emlite::Val(emlite::Val::take_ownership(h)) {}

  public:
    static Symbol take_ownership(Handle h) noexcept {
        return Symbol(h);
    }

    explicit Symbol(const emlite::Val &val) noexcept
        : emlite::Val(val) {}

    /// Create a new symbol with optional description
    explicit Symbol(const String &description) noexcept
        : emlite::Val(emlite::Val::global("Symbol")(description)) {}

    /// Create a new symbol without description
    Symbol() noexcept
        : emlite::Val(emlite::Val::global("Symbol")()) {}

    [[nodiscard]] Symbol clone() const noexcept {
        return *this;
    }

    // Properties
    [[nodiscard]] Option<String> description() const noexcept {
        auto desc = get("description");
        if (desc.is_undefined()) {
            return none<String>();
        }
        return some(desc.as<String>());
    }

    // Static well-known symbols
    static Symbol iterator() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("iterator").as_handle()
        );
    }

    static Symbol asyncIterator() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("asyncIterator").as_handle()
        );
    }

    static Symbol hasInstance() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("hasInstance").as_handle()
        );
    }

    static Symbol isConcatSpreadable() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("isConcatSpreadable").as_handle()
        );
    }

    static Symbol match() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("match").as_handle()
        );
    }

    static Symbol matchAll() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("matchAll").as_handle()
        );
    }

    static Symbol replace() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("replace").as_handle()
        );
    }

    static Symbol search() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("search").as_handle()
        );
    }

    static Symbol species() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("species").as_handle()
        );
    }

    static Symbol split() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("split").as_handle()
        );
    }

    static Symbol toPrimitive() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("toPrimitive").as_handle()
        );
    }

    static Symbol toStringTag() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("toStringTag").as_handle()
        );
    }

    static Symbol unscopables() noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").get("unscopables").as_handle()
        );
    }

    // Static registry methods
    /// Get symbol from global symbol registry
    static Symbol for_(const String &key) noexcept {
        return Symbol::take_ownership(
            emlite::Val::global("Symbol").call("for", key).as_handle()
        );
    }

    /// Get key for symbol from global registry, returns none if not found
    static Option<String> keyFor(const Symbol &symbol) noexcept {
        auto result = emlite::Val::global("Symbol").call("keyFor", symbol);
        if (result.is_undefined()) {
            return none<String>();
        }
        return some(result.as<String>());
    }

    // Utility methods
    [[nodiscard]] String toString() const noexcept {
        return call("toString").as<String>();
    }

    [[nodiscard]] String valueOf() const noexcept {
        return call("valueOf").as<String>();
    }

    // STL-like interface
    [[nodiscard]] bool empty() const noexcept {
        return !description().has_value();
    }

    [[nodiscard]] size_t hash() const noexcept {
        // Since symbols are unique, use their handle as hash
        return static_cast<size_t>(as_handle());
    }

    // Comparison operators for STL containers
    bool operator<(const Symbol &other) const noexcept {
        return as_handle() < other.as_handle();
    }

    bool operator>(const Symbol &other) const noexcept {
        return as_handle() > other.as_handle();
    }

    bool operator<=(const Symbol &other) const noexcept {
        return as_handle() <= other.as_handle();
    }

    bool operator>=(const Symbol &other) const noexcept {
        return as_handle() >= other.as_handle();
    }
};

} // namespace jsbind

// Note: STL hash specialization removed for no-stdlib compatibility
// If needed, users can implement hash functions manually