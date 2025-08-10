#include "webbind/WebTransport.hpp"
#include "webbind/WebTransportOptions.hpp"
#include "webbind/WebTransportConnectionStats.hpp"
#include "webbind/WebTransportCloseInfo.hpp"
#include "webbind/WebTransportDatagramDuplexStream.hpp"
#include "webbind/WebTransportBidirectionalStream.hpp"
#include "webbind/WebTransportSendStreamOptions.hpp"
#include "webbind/ReadableStream.hpp"
#include "webbind/WebTransportSendStream.hpp"
#include "webbind/WebTransportSendGroup.hpp"

namespace webbind {

WebTransport WebTransport::take_ownership(Handle h) noexcept {
        return WebTransport(h);
    }
WebTransport WebTransport::clone() const noexcept { return *this; }
emlite::Val WebTransport::instance() noexcept { return emlite::Val::global("WebTransport"); }
WebTransport::WebTransport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransport::WebTransport(const emlite::Val &val) noexcept: emlite::Val(val) {}

WebTransport::WebTransport(const jsbind::String& url) : emlite::Val(emlite::Val::global("WebTransport").new_(url)) {}

WebTransport::WebTransport(const jsbind::String& url, const WebTransportOptions& options) : emlite::Val(emlite::Val::global("WebTransport").new_(url, options)) {}

jsbind::Promise<WebTransportConnectionStats> WebTransport::getStats() {
    return emlite::Val::call("getStats").as<jsbind::Promise<WebTransportConnectionStats>>();
}

jsbind::Promise<jsbind::ArrayBuffer> WebTransport::exportKeyingMaterial(const jsbind::Any& label) {
    return emlite::Val::call("exportKeyingMaterial", label).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<jsbind::ArrayBuffer> WebTransport::exportKeyingMaterial(const jsbind::Any& label, const jsbind::Any& context) {
    return emlite::Val::call("exportKeyingMaterial", label, context).as<jsbind::Promise<jsbind::ArrayBuffer>>();
}

jsbind::Promise<jsbind::Undefined> WebTransport::ready() const {
    return emlite::Val::get("ready").as<jsbind::Promise<jsbind::Undefined>>();
}

WebTransportReliabilityMode WebTransport::reliability() const {
    return emlite::Val::get("reliability").as<WebTransportReliabilityMode>();
}

WebTransportCongestionControl WebTransport::congestionControl() const {
    return emlite::Val::get("congestionControl").as<WebTransportCongestionControl>();
}

unsigned short WebTransport::anticipatedConcurrentIncomingUnidirectionalStreams() const {
    return emlite::Val::get("anticipatedConcurrentIncomingUnidirectionalStreams").as<unsigned short>();
}

void WebTransport::anticipatedConcurrentIncomingUnidirectionalStreams(unsigned short value) {
    emlite::Val::set("anticipatedConcurrentIncomingUnidirectionalStreams", value);
}

unsigned short WebTransport::anticipatedConcurrentIncomingBidirectionalStreams() const {
    return emlite::Val::get("anticipatedConcurrentIncomingBidirectionalStreams").as<unsigned short>();
}

void WebTransport::anticipatedConcurrentIncomingBidirectionalStreams(unsigned short value) {
    emlite::Val::set("anticipatedConcurrentIncomingBidirectionalStreams", value);
}

jsbind::String WebTransport::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::String>();
}

jsbind::Promise<WebTransportCloseInfo> WebTransport::closed() const {
    return emlite::Val::get("closed").as<jsbind::Promise<WebTransportCloseInfo>>();
}

jsbind::Promise<jsbind::Undefined> WebTransport::draining() const {
    return emlite::Val::get("draining").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined WebTransport::close() {
    return emlite::Val::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined WebTransport::close(const WebTransportCloseInfo& closeInfo) {
    return emlite::Val::call("close", closeInfo).as<jsbind::Undefined>();
}

WebTransportDatagramDuplexStream WebTransport::datagrams() const {
    return emlite::Val::get("datagrams").as<WebTransportDatagramDuplexStream>();
}

jsbind::Promise<WebTransportBidirectionalStream> WebTransport::createBidirectionalStream() {
    return emlite::Val::call("createBidirectionalStream").as<jsbind::Promise<WebTransportBidirectionalStream>>();
}

jsbind::Promise<WebTransportBidirectionalStream> WebTransport::createBidirectionalStream(const WebTransportSendStreamOptions& options) {
    return emlite::Val::call("createBidirectionalStream", options).as<jsbind::Promise<WebTransportBidirectionalStream>>();
}

ReadableStream WebTransport::incomingBidirectionalStreams() const {
    return emlite::Val::get("incomingBidirectionalStreams").as<ReadableStream>();
}

jsbind::Promise<WebTransportSendStream> WebTransport::createUnidirectionalStream() {
    return emlite::Val::call("createUnidirectionalStream").as<jsbind::Promise<WebTransportSendStream>>();
}

jsbind::Promise<WebTransportSendStream> WebTransport::createUnidirectionalStream(const WebTransportSendStreamOptions& options) {
    return emlite::Val::call("createUnidirectionalStream", options).as<jsbind::Promise<WebTransportSendStream>>();
}

ReadableStream WebTransport::incomingUnidirectionalStreams() const {
    return emlite::Val::get("incomingUnidirectionalStreams").as<ReadableStream>();
}

WebTransportSendGroup WebTransport::createSendGroup() {
    return emlite::Val::call("createSendGroup").as<WebTransportSendGroup>();
}

bool WebTransport::supportsReliableOnly() {
    return emlite::Val::global("webtransport").get("supportsReliableOnly").as<bool>();
}


} // namespace webbind