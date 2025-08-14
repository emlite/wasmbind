#include <webbind/QuotaExceededError.hpp>
#include <webbind/QuotaExceededErrorOptions.hpp>

namespace webbind {

QuotaExceededError QuotaExceededError::take_ownership(Handle h) noexcept {
    return QuotaExceededError(h);
}

QuotaExceededError QuotaExceededError::clone() const noexcept { return *this; }

emlite::Val QuotaExceededError::instance() noexcept { return emlite::Val::global("QuotaExceededError"); }

QuotaExceededError::QuotaExceededError(Handle h) noexcept : DOMException(emlite::Val::take_ownership(h)) {}

QuotaExceededError::QuotaExceededError(const emlite::Val &val) noexcept: DOMException(val) {}

QuotaExceededError::QuotaExceededError() : DOMException(emlite::Val::global("QuotaExceededError").new_()) {}

QuotaExceededError::QuotaExceededError(const jsbind::String& message) : DOMException(emlite::Val::global("QuotaExceededError").new_(message)) {}

QuotaExceededError::QuotaExceededError(const jsbind::String& message, const QuotaExceededErrorOptions& options) : DOMException(emlite::Val::global("QuotaExceededError").new_(message, options)) {}

double QuotaExceededError::quota() const {
    return DOMException::get("quota").as<double>();
}

double QuotaExceededError::requested() const {
    return DOMException::get("requested").as<double>();
}


} // namespace webbind