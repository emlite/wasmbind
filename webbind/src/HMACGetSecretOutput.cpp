#include "webbind/HMACGetSecretOutput.hpp"

using emlite::Val;
namespace webbind {

HMACGetSecretOutput::HMACGetSecretOutput(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HMACGetSecretOutput HMACGetSecretOutput::take_ownership(Handle h) noexcept {
        return HMACGetSecretOutput(h);
    }
HMACGetSecretOutput::HMACGetSecretOutput(const emlite::Val &val) noexcept: emlite::Val(val) {}
HMACGetSecretOutput::HMACGetSecretOutput() noexcept: emlite::Val(emlite::Val::object()) {}
HMACGetSecretOutput HMACGetSecretOutput::clone() const noexcept { return *this; }

jsbind::ArrayBuffer HMACGetSecretOutput::output1() const {
    return emlite::Val::get("output1").as<jsbind::ArrayBuffer>();
}

void HMACGetSecretOutput::output1(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("output1", value);
}

jsbind::ArrayBuffer HMACGetSecretOutput::output2() const {
    return emlite::Val::get("output2").as<jsbind::ArrayBuffer>();
}

void HMACGetSecretOutput::output2(const jsbind::ArrayBuffer& value) {
    emlite::Val::set("output2", value);
}


} // namespace webbind