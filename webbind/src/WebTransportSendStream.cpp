#include <webbind/WebTransportSendStream.hpp>
#include <webbind/WebTransportSendGroup.hpp>
#include <webbind/WebTransportWriter.hpp>


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

