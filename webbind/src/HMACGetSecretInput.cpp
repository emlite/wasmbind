#include "webbind/HMACGetSecretInput.hpp"

using emlite::Val;
namespace webbind {

HMACGetSecretInput::HMACGetSecretInput(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HMACGetSecretInput HMACGetSecretInput::take_ownership(Handle h) noexcept {
        return HMACGetSecretInput(h);
    }
HMACGetSecretInput::HMACGetSecretInput(const emlite::Val &val) noexcept: emlite::Val(val) {}
HMACGetSecretInput::HMACGetSecretInput() noexcept: emlite::Val(emlite::Val::object()) {}
HMACGetSecretInput HMACGetSecretInput::clone() const noexcept { return *this; }

jsbind::ArrayBuffer HMACGetSecretInput::salt1() const {
    return emlite::Val::get("salt1").as<jsbind::ArrayBuffer>();
}

void HMACGetSecretInput::salt1(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("salt1", value);
}

jsbind::ArrayBuffer HMACGetSecretInput::salt2() const {
    return emlite::Val::get("salt2").as<jsbind::ArrayBuffer>();
}

void HMACGetSecretInput::salt2(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("salt2", value);
}


} // namespace webbind