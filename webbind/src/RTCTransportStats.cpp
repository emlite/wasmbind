#include <webbind/RTCTransportStats.hpp>

using emlite::Val;
namespace webbind {

RTCTransportStats::RTCTransportStats(Handle h) noexcept : RTCStats(emlite::Val::take_ownership(h)) {}
RTCTransportStats RTCTransportStats::take_ownership(Handle h) noexcept {
        return RTCTransportStats(h);
    }
RTCTransportStats::RTCTransportStats(const emlite::Val &val) noexcept: RTCStats(val) {}
RTCTransportStats::RTCTransportStats() noexcept: RTCStats(emlite::Val::object()) {}
RTCTransportStats RTCTransportStats::clone() const noexcept { return *this; }

long long RTCTransportStats::packetsSent() const {
    return emlite::Val::get("packetsSent").as<long long>();
}

void RTCTransportStats::packetsSent(long long value) {
    emlite::Val::set("packetsSent", value);
}

long long RTCTransportStats::packetsReceived() const {
    return emlite::Val::get("packetsReceived").as<long long>();
}

void RTCTransportStats::packetsReceived(long long value) {
    emlite::Val::set("packetsReceived", value);
}

long long RTCTransportStats::bytesSent() const {
    return emlite::Val::get("bytesSent").as<long long>();
}

void RTCTransportStats::bytesSent(long long value) {
    emlite::Val::set("bytesSent", value);
}

long long RTCTransportStats::bytesReceived() const {
    return emlite::Val::get("bytesReceived").as<long long>();
}

void RTCTransportStats::bytesReceived(long long value) {
    emlite::Val::set("bytesReceived", value);
}

RTCIceRole RTCTransportStats::iceRole() const {
    return emlite::Val::get("iceRole").as<RTCIceRole>();
}

void RTCTransportStats::iceRole(const RTCIceRole& value) {
    emlite::Val::set("iceRole", value);
}

jsbind::String RTCTransportStats::iceLocalUsernameFragment() const {
    return emlite::Val::get("iceLocalUsernameFragment").as<jsbind::String>();
}

void RTCTransportStats::iceLocalUsernameFragment(const jsbind::String& value) {
    emlite::Val::set("iceLocalUsernameFragment", value);
}

RTCDtlsTransportState RTCTransportStats::dtlsState() const {
    return emlite::Val::get("dtlsState").as<RTCDtlsTransportState>();
}

void RTCTransportStats::dtlsState(const RTCDtlsTransportState& value) {
    emlite::Val::set("dtlsState", value);
}

RTCIceTransportState RTCTransportStats::iceState() const {
    return emlite::Val::get("iceState").as<RTCIceTransportState>();
}

void RTCTransportStats::iceState(const RTCIceTransportState& value) {
    emlite::Val::set("iceState", value);
}

jsbind::String RTCTransportStats::selectedCandidatePairId() const {
    return emlite::Val::get("selectedCandidatePairId").as<jsbind::String>();
}

void RTCTransportStats::selectedCandidatePairId(const jsbind::String& value) {
    emlite::Val::set("selectedCandidatePairId", value);
}

jsbind::String RTCTransportStats::localCertificateId() const {
    return emlite::Val::get("localCertificateId").as<jsbind::String>();
}

void RTCTransportStats::localCertificateId(const jsbind::String& value) {
    emlite::Val::set("localCertificateId", value);
}

jsbind::String RTCTransportStats::remoteCertificateId() const {
    return emlite::Val::get("remoteCertificateId").as<jsbind::String>();
}

void RTCTransportStats::remoteCertificateId(const jsbind::String& value) {
    emlite::Val::set("remoteCertificateId", value);
}

jsbind::String RTCTransportStats::tlsVersion() const {
    return emlite::Val::get("tlsVersion").as<jsbind::String>();
}

void RTCTransportStats::tlsVersion(const jsbind::String& value) {
    emlite::Val::set("tlsVersion", value);
}

jsbind::String RTCTransportStats::dtlsCipher() const {
    return emlite::Val::get("dtlsCipher").as<jsbind::String>();
}

void RTCTransportStats::dtlsCipher(const jsbind::String& value) {
    emlite::Val::set("dtlsCipher", value);
}

RTCDtlsRole RTCTransportStats::dtlsRole() const {
    return emlite::Val::get("dtlsRole").as<RTCDtlsRole>();
}

void RTCTransportStats::dtlsRole(const RTCDtlsRole& value) {
    emlite::Val::set("dtlsRole", value);
}

jsbind::String RTCTransportStats::srtpCipher() const {
    return emlite::Val::get("srtpCipher").as<jsbind::String>();
}

void RTCTransportStats::srtpCipher(const jsbind::String& value) {
    emlite::Val::set("srtpCipher", value);
}

unsigned long RTCTransportStats::selectedCandidatePairChanges() const {
    return emlite::Val::get("selectedCandidatePairChanges").as<unsigned long>();
}

void RTCTransportStats::selectedCandidatePairChanges(unsigned long value) {
    emlite::Val::set("selectedCandidatePairChanges", value);
}

unsigned long RTCTransportStats::ccfbMessagesSent() const {
    return emlite::Val::get("ccfbMessagesSent").as<unsigned long>();
}

void RTCTransportStats::ccfbMessagesSent(unsigned long value) {
    emlite::Val::set("ccfbMessagesSent", value);
}

unsigned long RTCTransportStats::ccfbMessagesReceived() const {
    return emlite::Val::get("ccfbMessagesReceived").as<unsigned long>();
}

void RTCTransportStats::ccfbMessagesReceived(unsigned long value) {
    emlite::Val::set("ccfbMessagesReceived", value);
}


} // namespace webbind