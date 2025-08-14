#include <webbind/QuotaExceededErrorOptions.hpp>

namespace webbind {

QuotaExceededErrorOptions::QuotaExceededErrorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
QuotaExceededErrorOptions QuotaExceededErrorOptions::take_ownership(Handle h) noexcept {
    return QuotaExceededErrorOptions(h);
}

QuotaExceededErrorOptions::QuotaExceededErrorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

QuotaExceededErrorOptions::QuotaExceededErrorOptions() noexcept: emlite::Val(emlite::Val::object()) {}

QuotaExceededErrorOptions QuotaExceededErrorOptions::clone() const noexcept { return *this; }

double QuotaExceededErrorOptions::quota() const {
    return emlite::Val::get("quota").as<double>();
}

void QuotaExceededErrorOptions::quota(double value) {
    emlite::Val::set("quota", value);
}

double QuotaExceededErrorOptions::requested() const {
    return emlite::Val::get("requested").as<double>();
}

void QuotaExceededErrorOptions::requested(double value) {
    emlite::Val::set("requested", value);
}


} // namespace webbind