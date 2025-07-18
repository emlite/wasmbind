#include <webbind/WebTransportBidirectionalStream.hpp>
#include <webbind/WebTransportReceiveStream.hpp>
#include <webbind/WebTransportSendStream.hpp>


WebTransportBidirectionalStream WebTransportBidirectionalStream::take_ownership(Handle h) noexcept {
        return WebTransportBidirectionalStream(h);
    }
WebTransportBidirectionalStream WebTransportBidirectionalStream::clone() const noexcept { return *this; }
WebTransportBidirectionalStream::WebTransportBidirectionalStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportBidirectionalStream::WebTransportBidirectionalStream(const emlite::Val &val) noexcept: emlite::Val(val) {}


WebTransportReceiveStream WebTransportBidirectionalStream::readable() const {
    return emlite::Val::get("readable").as<WebTransportReceiveStream>();
}

WebTransportSendStream WebTransportBidirectionalStream::writable() const {
    return emlite::Val::get("writable").as<WebTransportSendStream>();
}

