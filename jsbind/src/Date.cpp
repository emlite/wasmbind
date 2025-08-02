#include <jsbind/Date.hpp>

using namespace jsbind;

Date::Date() noexcept
    : emlite::Val(emlite::Val::global("Date").new_()) {}

emlite::Val Date::instance() noexcept {
    return emlite::Val::global("Date");
}

Date Date::from_epoch_millis(int64_t ms) {
    return emlite::Val::global("Date")
        .new_(emlite::Val(ms))
        .template as<Date>();
}

/// `Date.now()` – epoch milliseconds
int64_t Date::now_epoch_millis() {
    return emlite::Val::global("Date")
        .call("now")
        .template as<int64_t>();
}

/// `valueOf()` – epoch milliseconds
int64_t Date::value_of() const {
    return this->call("valueOf").template as<int64_t>();
}

/// Alias of valueOf()
int64_t Date::get_time() const { return value_of(); }

/// `toISOString()`
String Date::to_iso_string() const {
    return this->call("toISOString").template as<String>();
}

/// `toUTCString()`
String Date::to_utc_string() const {
    return this->call("toUTCString").template as<String>();
}

String Date::to_locale_string(
    const Any &locales, const Any &opts
) const {
    if (!locales && !opts) {
        return this->call("toLocaleString")
            .template as<String>();
    }
    if (locales && !opts) {
        return this->call("toLocaleString", locales)
            .template as<String>();
    }
    /* locales may legally be nullptr if you only supply
     * opts */
    if (!locales && opts) {
        return this->call("toLocaleString", opts)
            .template as<String>();
    }
    return this->call("toLocaleString", locales, opts)
        .template as<String>();
}

/// Return **new** Date advanced by `delta` milliseconds
Date Date::add_millis(int64_t delta) const {
    return from_epoch_millis(value_of() + delta);
}

/// `other - this` (milliseconds)
int64_t Date::diff_millis(const Date &other) const {
    return other.value_of() - value_of();
}