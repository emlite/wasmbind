#include "webbind/WebTransportReceiveStreamStats.hpp"

using emlite::Val;
namespace webbind {

WebTransportReceiveStreamStats::WebTransportReceiveStreamStats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportReceiveStreamStats WebTransportReceiveStreamStats::take_ownership(Handle h) noexcept {
        return WebTransportReceiveStreamStats(h);
    }
WebTransportReceiveStreamStats::WebTransportReceiveStreamStats(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportReceiveStreamStats::WebTransportReceiveStreamStats() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportReceiveStreamStats WebTransportReceiveStreamStats::clone() const noexcept { return *this; }

long long WebTransportReceiveStreamStats::bytesReceived() const {
    return emlite::Val::get("bytesReceived").as<long long>();
}

void WebTransportReceiveStreamStats::bytesReceived(long long value) {
    emlite::Val::set("bytesReceived", value);
}

long long WebTransportReceiveStreamStats::bytesRead() const {
    return emlite::Val::get("bytesRead").as<long long>();
}

void WebTransportReceiveStreamStats::bytesRead(long long value) {
    emlite::Val::set("bytesRead", value);
}


} // namespace webbind