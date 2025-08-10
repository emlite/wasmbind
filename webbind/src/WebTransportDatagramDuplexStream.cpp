#include <webbind/WebTransportDatagramDuplexStream.hpp>
#include <webbind/WebTransportDatagramsWritable.hpp>
#include <webbind/WebTransportSendOptions.hpp>
#include <webbind/ReadableStream.hpp>

namespace webbind {

WebTransportDatagramDuplexStream WebTransportDatagramDuplexStream::take_ownership(Handle h) noexcept {
    return WebTransportDatagramDuplexStream(h);
}

WebTransportDatagramDuplexStream WebTransportDatagramDuplexStream::clone() const noexcept { return *this; }

emlite::Val WebTransportDatagramDuplexStream::instance() noexcept { return emlite::Val::global("WebTransportDatagramDuplexStream"); }

WebTransportDatagramDuplexStream::WebTransportDatagramDuplexStream(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WebTransportDatagramDuplexStream::WebTransportDatagramDuplexStream(const emlite::Val &val) noexcept: emlite::Val(val) {}

WebTransportDatagramsWritable WebTransportDatagramDuplexStream::createWritable() {
    return emlite::Val::call("createWritable").as<WebTransportDatagramsWritable>();
}

WebTransportDatagramsWritable WebTransportDatagramDuplexStream::createWritable(const WebTransportSendOptions& options) {
    return emlite::Val::call("createWritable", options).as<WebTransportDatagramsWritable>();
}

ReadableStream WebTransportDatagramDuplexStream::readable() const {
    return emlite::Val::get("readable").as<ReadableStream>();
}

unsigned long WebTransportDatagramDuplexStream::maxDatagramSize() const {
    return emlite::Val::get("maxDatagramSize").as<unsigned long>();
}

double WebTransportDatagramDuplexStream::incomingMaxAge() const {
    return emlite::Val::get("incomingMaxAge").as<double>();
}

void WebTransportDatagramDuplexStream::incomingMaxAge(double value) {
    emlite::Val::set("incomingMaxAge", value);
}

double WebTransportDatagramDuplexStream::outgoingMaxAge() const {
    return emlite::Val::get("outgoingMaxAge").as<double>();
}

void WebTransportDatagramDuplexStream::outgoingMaxAge(double value) {
    emlite::Val::set("outgoingMaxAge", value);
}

double WebTransportDatagramDuplexStream::incomingHighWaterMark() const {
    return emlite::Val::get("incomingHighWaterMark").as<double>();
}

void WebTransportDatagramDuplexStream::incomingHighWaterMark(double value) {
    emlite::Val::set("incomingHighWaterMark", value);
}

double WebTransportDatagramDuplexStream::outgoingHighWaterMark() const {
    return emlite::Val::get("outgoingHighWaterMark").as<double>();
}

void WebTransportDatagramDuplexStream::outgoingHighWaterMark(double value) {
    emlite::Val::set("outgoingHighWaterMark", value);
}


} // namespace webbind