#include "webbind/WebTransportReceiveStream.hpp"
#include "webbind/WebTransportReceiveStreamStats.hpp"

namespace webbind {

WebTransportReceiveStream WebTransportReceiveStream::take_ownership(Handle h) noexcept {
        return WebTransportReceiveStream(h);
    }
WebTransportReceiveStream WebTransportReceiveStream::clone() const noexcept { return *this; }
emlite::Val WebTransportReceiveStream::instance() noexcept { return emlite::Val::global("WebTransportReceiveStream"); }
WebTransportReceiveStream::WebTransportReceiveStream(Handle h) noexcept : ReadableStream(emlite::Val::take_ownership(h)) {}
WebTransportReceiveStream::WebTransportReceiveStream(const emlite::Val &val) noexcept: ReadableStream(val) {}

jsbind::Promise<WebTransportReceiveStreamStats> WebTransportReceiveStream::getStats() {
    return ReadableStream::call("getStats").as<jsbind::Promise<WebTransportReceiveStreamStats>>();
}


} // namespace webbind