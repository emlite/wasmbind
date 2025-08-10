#include "webbind/RTCCertificateStats.hpp"

using emlite::Val;
namespace webbind {

RTCCertificateStats::RTCCertificateStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCCertificateStats RTCCertificateStats::take_ownership(Handle h) noexcept {
        return RTCCertificateStats(h);
    }
RTCCertificateStats::RTCCertificateStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCCertificateStats::RTCCertificateStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCCertificateStats RTCCertificateStats::clone() const noexcept { return *this; }

jsbind::String RTCCertificateStats::fingerprint() const {
    return emlite::Val::get("fingerprint").as<jsbind::String>();
}

void RTCCertificateStats::fingerprint(const jsbind::String& value) {
    emlite::Val::set("fingerprint", value);
}

jsbind::String RTCCertificateStats::fingerprintAlgorithm() const {
    return emlite::Val::get("fingerprintAlgorithm").as<jsbind::String>();
}

void RTCCertificateStats::fingerprintAlgorithm(const jsbind::String& value) {
    emlite::Val::set("fingerprintAlgorithm", value);
}

jsbind::String RTCCertificateStats::base64Certificate() const {
    return emlite::Val::get("base64Certificate").as<jsbind::String>();
}

void RTCCertificateStats::base64Certificate(const jsbind::String& value) {
    emlite::Val::set("base64Certificate", value);
}

jsbind::String RTCCertificateStats::issuerCertificateId() const {
    return emlite::Val::get("issuerCertificateId").as<jsbind::String>();
}

void RTCCertificateStats::issuerCertificateId(const jsbind::String& value) {
    emlite::Val::set("issuerCertificateId", value);
}


} // namespace webbind