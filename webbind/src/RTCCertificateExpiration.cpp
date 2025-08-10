#include "webbind/RTCCertificateExpiration.hpp"

using emlite::Val;
namespace webbind {

RTCCertificateExpiration::RTCCertificateExpiration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RTCCertificateExpiration RTCCertificateExpiration::take_ownership(Handle h) noexcept {
        return RTCCertificateExpiration(h);
    }
RTCCertificateExpiration::RTCCertificateExpiration(const emlite::Val &val) noexcept: emlite::Val(val) {}
RTCCertificateExpiration::RTCCertificateExpiration() noexcept: emlite::Val(emlite::Val::object()) {}
RTCCertificateExpiration RTCCertificateExpiration::clone() const noexcept { return *this; }

long long RTCCertificateExpiration::expires() const {
    return emlite::Val::get("expires").as<long long>();
}

void RTCCertificateExpiration::expires(long long value) {
    emlite::Val::set("expires", value);
}


} // namespace webbind