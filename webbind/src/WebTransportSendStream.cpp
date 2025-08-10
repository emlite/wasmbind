#include <webbind/WebTransportSendStream.hpp>
#include <webbind/WebTransportSendGroup.hpp>
#include <webbind/WebTransportSendStreamStats.hpp>
#include <webbind/WebTransportWriter.hpp>

namespace webbind {

WebTransportSendStream WebTransportSendStream::take_ownership(Handle h) noexcept {
    return WebTransportSendStream(h);
}

WebTransportSendStream WebTransportSendStream::clone() const noexcept { return *this; }

emlite::Val WebTransportSendStream::instance() noexcept { return emlite::Val::global("WebTransportSendStream"); }

WebTransportSendStream::WebTransportSendStream(Handle h) noexcept : WritableStream(emlite::Val::take_ownership(h)) {}

WebTransportSendStream::WebTransportSendStream(const emlite::Val &val) noexcept: WritableStream(val) {}

WebTransportSendGroup WebTransportSendStream::sendGroup() const {
    return WritableStream::get("sendGroup").as<WebTransportSendGroup>();
}

void WebTransportSendStream::sendGroup(const WebTransportSendGroup& value) {
    WritableStream::set("sendGroup", value);
}

long long WebTransportSendStream::sendOrder() const {
    return WritableStream::get("sendOrder").as<long long>();
}

void WebTransportSendStream::sendOrder(long long value) {
    WritableStream::set("sendOrder", value);
}

jsbind::Promise<WebTransportSendStreamStats> WebTransportSendStream::getStats() {
    return WritableStream::call("getStats").as<jsbind::Promise<WebTransportSendStreamStats>>();
}

WebTransportWriter WebTransportSendStream::getWriter() {
    return WritableStream::call("getWriter").as<WebTransportWriter>();
}


} // namespace webbind