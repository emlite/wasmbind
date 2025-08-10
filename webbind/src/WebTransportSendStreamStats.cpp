#include <webbind/WebTransportSendStreamStats.hpp>

using emlite::Val;
namespace webbind {

WebTransportSendStreamStats::WebTransportSendStreamStats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportSendStreamStats WebTransportSendStreamStats::take_ownership(Handle h) noexcept {
        return WebTransportSendStreamStats(h);
    }
WebTransportSendStreamStats::WebTransportSendStreamStats(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportSendStreamStats::WebTransportSendStreamStats() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportSendStreamStats WebTransportSendStreamStats::clone() const noexcept { return *this; }

long long WebTransportSendStreamStats::bytesWritten() const {
    return emlite::Val::get("bytesWritten").as<long long>();
}

void WebTransportSendStreamStats::bytesWritten(long long value) {
    emlite::Val::set("bytesWritten", value);
}

long long WebTransportSendStreamStats::bytesSent() const {
    return emlite::Val::get("bytesSent").as<long long>();
}

void WebTransportSendStreamStats::bytesSent(long long value) {
    emlite::Val::set("bytesSent", value);
}

long long WebTransportSendStreamStats::bytesAcknowledged() const {
    return emlite::Val::get("bytesAcknowledged").as<long long>();
}

void WebTransportSendStreamStats::bytesAcknowledged(long long value) {
    emlite::Val::set("bytesAcknowledged", value);
}


} // namespace webbind