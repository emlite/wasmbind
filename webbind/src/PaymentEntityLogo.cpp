#include <webbind/PaymentEntityLogo.hpp>

namespace webbind {

PaymentEntityLogo::PaymentEntityLogo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentEntityLogo PaymentEntityLogo::take_ownership(Handle h) noexcept {
    return PaymentEntityLogo(h);
}

PaymentEntityLogo::PaymentEntityLogo(const emlite::Val &val) noexcept: emlite::Val(val) {}

PaymentEntityLogo::PaymentEntityLogo() noexcept: emlite::Val(emlite::Val::object()) {}

PaymentEntityLogo PaymentEntityLogo::clone() const noexcept { return *this; }

jsbind::String PaymentEntityLogo::url() const {
    return emlite::Val::get("url").as<jsbind::String>();
}

void PaymentEntityLogo::url(const jsbind::String& value) {
    emlite::Val::set("url", value);
}

jsbind::String PaymentEntityLogo::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void PaymentEntityLogo::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}


} // namespace webbind