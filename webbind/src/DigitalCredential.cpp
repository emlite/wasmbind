#include <webbind/DigitalCredential.hpp>

namespace webbind {

DigitalCredential DigitalCredential::take_ownership(Handle h) noexcept {
        return DigitalCredential(h);
    }
DigitalCredential DigitalCredential::clone() const noexcept { return *this; }
emlite::Val DigitalCredential::instance() noexcept { return emlite::Val::global("DigitalCredential"); }
DigitalCredential::DigitalCredential(Handle h) noexcept : Credential(emlite::Val::take_ownership(h)) {}
DigitalCredential::DigitalCredential(const emlite::Val &val) noexcept: Credential(val) {}

jsbind::Object DigitalCredential::toJSON() {
    return Credential::call("toJSON").as<jsbind::Object>();
}

jsbind::String DigitalCredential::protocol() const {
    return Credential::get("protocol").as<jsbind::String>();
}

jsbind::Object DigitalCredential::data() const {
    return Credential::get("data").as<jsbind::Object>();
}

bool DigitalCredential::userAgentAllowsProtocol(const jsbind::String& protocol) {
    return emlite::Val::global("digitalcredential").call("userAgentAllowsProtocol", protocol).as<bool>();
}


} // namespace webbind