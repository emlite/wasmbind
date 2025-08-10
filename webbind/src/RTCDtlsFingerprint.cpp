#include <webbind/RTCDtlsFingerprint.hpp>

using emlite::Val;
namespace webbind {

RTCDtlsFingerprint::RTCDtlsFingerprint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCDtlsFingerprint RTCDtlsFingerprint::take_ownership(Handle h) noexcept {
        return RTCDtlsFingerprint(h);
    }
RTCDtlsFingerprint::RTCDtlsFingerprint(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCDtlsFingerprint::RTCDtlsFingerprint() noexcept: emlite::Val(emlite::Val::object()) {}
RTCDtlsFingerprint RTCDtlsFingerprint::clone() const noexcept { return *this; }

jsbind::String RTCDtlsFingerprint::algorithm() const {
    return emlite::Val::get("algorithm").as<jsbind::String>();
}

void RTCDtlsFingerprint::algorithm(const jsbind::String& value) {
    emlite::Val::set("algorithm", value);
}

jsbind::String RTCDtlsFingerprint::value() const {
    return emlite::Val::get("value").as<jsbind::String>();
}

void RTCDtlsFingerprint::value(const jsbind::String& value) {
    emlite::Val::set("value", value);
}


} // namespace webbind