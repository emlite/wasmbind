#pragma once

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
    static Date from_epoch_millis(int64_t ms);

    /// `Date.now()` – epoch milliseconds
    static int64_t now_epoch_millis();

    /// `valueOf()` – epoch milliseconds
    [[nodiscard]] int64_t value_of() const;

    /// Alias of valueOf()
    [[nodiscard]] int64_t get_time() const;

    /// `toISOString()`
    [[nodiscard]] String to_iso_string() const;

    /// `toUTCString()`
    [[nodiscard]] String to_utc_string() const;

    /// `toLocaleString([locales [, options]])`
    [[nodiscard]] String to_locale_string(
        const Any &locales = Undefined::value,
        const Any &opts    = Undefined::value
    ) const;

    /// Return **new** Date advanced by `delta` milliseconds
    [[nodiscard]] Date add_millis(int64_t delta) const;

    /// `other - this` (milliseconds)
    [[nodiscard]] int64_t diff_millis(const Date &other
    ) const;
};
} // namespace jsbind