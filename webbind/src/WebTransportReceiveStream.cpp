#include <webbind/WebTransportReceiveStream.hpp>


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

WebTransportReceiveStream WebTransportReceiveStream::take_ownership(Handle h) noexcept {
        return WebTransportReceiveStream(h);
    }
WebTransportReceiveStream WebTransportReceiveStream::clone() const noexcept { return *this; }
WebTransportReceiveStream::WebTransportReceiveStream(Handle h) noexcept : ReadableStream(emlite::Val::take_ownership(h)) {}
WebTransportReceiveStream::WebTransportReceiveStream(const emlite::Val &val) noexcept: ReadableStream(val) {}


jsbind::Promise<WebTransportReceiveStreamStats> WebTransportReceiveStream::getStats() {
    return ReadableStream::call("getStats").as<jsbind::Promise<WebTransportReceiveStreamStats>>();
}

