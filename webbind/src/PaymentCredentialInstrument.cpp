#include "webbind/PaymentCredentialInstrument.hpp"

using emlite::Val;
namespace webbind {

PaymentCredentialInstrument::PaymentCredentialInstrument(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PaymentCredentialInstrument PaymentCredentialInstrument::take_ownership(Handle h) noexcept {
        return PaymentCredentialInstrument(h);
    }
PaymentCredentialInstrument::PaymentCredentialInstrument(const emlite::Val &val) noexcept: emlite::Val(val) {}
PaymentCredentialInstrument::PaymentCredentialInstrument() noexcept: emlite::Val(emlite::Val::object()) {}
PaymentCredentialInstrument PaymentCredentialInstrument::clone() const noexcept { return *this; }

jsbind::String PaymentCredentialInstrument::displayName() const {
    return emlite::Val::get("displayName").as<jsbind::String>();
}

void PaymentCredentialInstrument::displayName(const jsbind::String& value) {
    emlite::Val::set("displayName", value);
}

jsbind::String PaymentCredentialInstrument::icon() const {
    return emlite::Val::get("icon").as<jsbind::String>();
}

void PaymentCredentialInstrument::icon(const jsbind::String& value) {
    emlite::Val::set("icon", value);
}

bool PaymentCredentialInstrument::iconMustBeShown() const {
    return emlite::Val::get("iconMustBeShown").as<bool>();
}

void PaymentCredentialInstrument::iconMustBeShown(bool value) {
    emlite::Val::set("iconMustBeShown", value);
}

jsbind::String PaymentCredentialInstrument::details() const {
    return emlite::Val::get("details").as<jsbind::String>();
}

void PaymentCredentialInstrument::details(const jsbind::String& value) {
    emlite::Val::set("details", value);
}


} // namespace webbind