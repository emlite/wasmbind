#include <webbind/RTCCertificate.hpp>


RTCDtlsFingerprint::RTCDtlsFingerprint(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCDtlsFingerprint RTCDtlsFingerprint::take_ownership(Handle h) noexcept {
        return RTCDtlsFingerprint(h);
    }
RTCDtlsFingerprint::RTCDtlsFingerprint(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCDtlsFingerprint::RTCDtlsFingerprint() noexcept: emlite::Val(emlite::Val::object()) {}
RTCDtlsFingerprint RTCDtlsFingerprint::clone() const noexcept { return *this; }

jsbind::DOMString RTCDtlsFingerprint::algorithm() const {
    return emlite::Val::get("algorithm").as<jsbind::DOMString>();
}

void RTCDtlsFingerprint::algorithm(const jsbind::DOMString& value) {
    emlite::Val::set("algorithm", value);
}

jsbind::DOMString RTCDtlsFingerprint::value() const {
    return emlite::Val::get("value").as<jsbind::DOMString>();
}

void RTCDtlsFingerprint::value(const jsbind::DOMString& value) {
    emlite::Val::set("value", value);
}

RTCCertificate RTCCertificate::take_ownership(Handle h) noexcept {
        return RTCCertificate(h);
    }
RTCCertificate RTCCertificate::clone() const noexcept { return *this; }
RTCCertificate::RTCCertificate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCCertificate::RTCCertificate(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any RTCCertificate::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

jsbind::Sequence<RTCDtlsFingerprint> RTCCertificate::getFingerprints() {
    return emlite::Val::call("getFingerprints").as<jsbind::Sequence<RTCDtlsFingerprint>>();
}

