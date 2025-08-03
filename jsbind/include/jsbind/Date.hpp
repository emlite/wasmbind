#pragma once

#include "Error.hpp"
#include "String.hpp"
#include "Undefined.hpp"
#include <emlite/emlite.hpp>
#include <stdint.h>

namespace jsbind {
class Date : public emlite::Val {
    explicit Date(Handle h) noexcept;

  public:
    static Date take_ownership(Handle h) noexcept;
    Date(const emlite::Val &val) noexcept;
    Date() noexcept;

    static emlite::Val instance() noexcept;
    static Date fromEpochMillis(int64_t ms);

    /// `Date.now()` – epoch milliseconds
    static int64_t nowEpochMillis();

    /// `valueOf()` – epoch milliseconds
    [[nodiscard]] int64_t valueOf() const;

    /// Alias of valueOf()
    [[nodiscard]] int64_t getTime() const;

    /// `toISOString()`
    [[nodiscard]] String toIsoString() const;

    /// `toUTCString()`
    [[nodiscard]] String toUtcString() const;

    /// `toLocaleString([locales [, options]])`
    [[nodiscard]] String toLocaleString(
        const Any &locales = Undefined::value, const Any &opts = Undefined::value
    ) const;

    /// Return **new** Date advanced by `delta` milliseconds
    [[nodiscard]] Date addMillis(int64_t delta) const;

    /// `other - this` (milliseconds)
    [[nodiscard]] int64_t diffMillis(const Date &other) const;

    /// Safely parses date string with error handling
    /// @param dateString ISO date string or other recognized format
    /// @returns Result containing Date or error message
    static Result<Date, Error> parse(const String &dateString);
};
} // namespace jsbind