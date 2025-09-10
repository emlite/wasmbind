#include <jsbind/Date.hpp>
#include <jsbind/utils.hpp>
#include <jsbind/global.hpp>

using namespace jsbind;

Date::Date() noexcept : emlite::Val(emlite::Val::global("Date").new_()) {}

emlite::Val Date::instance() noexcept { return emlite::Val::global("Date"); }

Date Date::fromEpochMillis(int64_t ms) {
    return emlite::Val::global("Date").new_(emlite::Val(ms)).template as<Date>();
}

/// `Date.now()` – epoch milliseconds
int64_t Date::nowEpochMillis() {
    return emlite::Val::global("Date").call("now").template as<int64_t>();
}

/// `valueOf()` – epoch milliseconds
int64_t Date::valueOf() const { return this->call("valueOf").template as<int64_t>(); }

/// Alias of valueOf()
int64_t Date::getTime() const { return valueOf(); }

/// `toISOString()`
String Date::toIsoString() const { return this->call("toISOString").template as<String>(); }

/// `toUTCString()`
String Date::toUtcString() const { return this->call("toUTCString").template as<String>(); }

String Date::toLocaleString(const Any &locales, const Any &opts) const {
    if (!locales && !opts) {
        return this->call("toLocaleString").template as<String>();
    }
    if (locales && !opts) {
        return this->call("toLocaleString", locales).template as<String>();
    }
    /* locales may legally be nullptr if you only supply
     * opts */
    if (!locales && opts) {
        return this->call("toLocaleString", opts).template as<String>();
    }
    return this->call("toLocaleString", locales, opts).template as<String>();
}

Result<String, Error> Date::toLocaleStringSafe(const Any &locales, const Any &opts) const {
    if (!locales && !opts) {
        return this->call("toLocaleString").template as<Result<String, Error>>();
    }
    if (locales && !opts) {
        return this->call("toLocaleString", locales).template as<Result<String, Error>>();
    }
    if (!locales && opts) {
        return this->call("toLocaleString", opts).template as<Result<String, Error>>();
    }
    return this->call("toLocaleString", locales, opts).template as<Result<String, Error>>();
}

/// Return **new** Date advanced by `delta` milliseconds
Date Date::addMillis(int64_t delta) const { return fromEpochMillis(valueOf() + delta); }

/// `other - this` (milliseconds)
int64_t Date::diffMillis(const Date &other) const { return other.valueOf() - valueOf(); }

Result<Date, Error> Date::parse(const String &dateString) {
    auto timestamp = emlite::Val::global("Date").call("parse", dateString);
    if (isNaN(timestamp)) {
        return err<Date>(Error("Invalid date format"));
    }
    return ok<Date, Error>(fromEpochMillis(timestamp.template as<int64_t>()));
}
