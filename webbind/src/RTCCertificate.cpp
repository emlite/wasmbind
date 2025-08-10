#include "webbind/RTCCertificate.hpp"
#include "webbind/RTCDtlsFingerprint.hpp"

namespace webbind {

RTCCertificate RTCCertificate::take_ownership(Handle h) noexcept {
        return RTCCertificate(h);
    }
RTCCertificate RTCCertificate::clone() const noexcept { return *this; }
emlite::Val RTCCertificate::instance() noexcept { return emlite::Val::global("RTCCertificate"); }
RTCCertificate::RTCCertificate(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCCertificate::RTCCertificate(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Any RTCCertificate::expires() const {
    return emlite::Val::get("expires").as<jsbind::Any>();
}

jsbind::TypedArray<RTCDtlsFingerprint> RTCCertificate::getFingerprints() {
    return emlite::Val::call("getFingerprints").as<jsbind::TypedArray<RTCDtlsFingerprint>>();
}


} // namespace webbind