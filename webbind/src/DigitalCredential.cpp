#include <webbind/DigitalCredential.hpp>


DigitalCredential DigitalCredential::take_ownership(Handle h) noexcept {
        return DigitalCredential(h);
    }
DigitalCredential DigitalCredential::clone() const noexcept { return *this; }
DigitalCredential::DigitalCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
DigitalCredential::DigitalCredential(const emlite::Val &val) noexcept: Credential(val) {}


jsbind::Object DigitalCredential::toJSON() {
    return Credential::call("toJSON").as<jsbind::Object>();
}

jsbind::DOMString DigitalCredential::protocol() const {
    return Credential::get("protocol").as<jsbind::DOMString>();
}

jsbind::Object DigitalCredential::data() const {
    return Credential::get("data").as<jsbind::Object>();
}

bool DigitalCredential::userAgentAllowsProtocol(const jsbind::DOMString& protocol) {
    return emlite::Val::global("digitalcredential").call("userAgentAllowsProtocol", protocol).as<bool>();
}

