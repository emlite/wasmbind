#include <webbind/WebTransport.hpp>
#include <webbind/WebTransportDatagramDuplexStream.hpp>
#include <webbind/WebTransportBidirectionalStream.hpp>
#include <webbind/ReadableStream.hpp>
#include <webbind/WebTransportSendStream.hpp>
#include <webbind/WebTransportSendGroup.hpp>


WebTransportConnectionStats::WebTransportConnectionStats(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportConnectionStats WebTransportConnectionStats::take_ownership(Handle h) noexcept {
        return WebTransportConnectionStats(h);
    }
WebTransportConnectionStats::WebTransportConnectionStats(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportConnectionStats::WebTransportConnectionStats() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportConnectionStats WebTransportConnectionStats::clone() const noexcept { return *this; }

long long WebTransportConnectionStats::bytesSent() const {
    return emlite::Val::get("bytesSent").as<long long>();
}

void WebTransportConnectionStats::bytesSent(long long value) {
    emlite::Val::set("bytesSent", value);
}

long long WebTransportConnectionStats::packetsSent() const {
    return emlite::Val::get("packetsSent").as<long long>();
}

void WebTransportConnectionStats::packetsSent(long long value) {
    emlite::Val::set("packetsSent", value);
}

long long WebTransportConnectionStats::bytesLost() const {
    return emlite::Val::get("bytesLost").as<long long>();
}

void WebTransportConnectionStats::bytesLost(long long value) {
    emlite::Val::set("bytesLost", value);
}

long long WebTransportConnectionStats::packetsLost() const {
    return emlite::Val::get("packetsLost").as<long long>();
}

void WebTransportConnectionStats::packetsLost(long long value) {
    emlite::Val::set("packetsLost", value);
}

long long WebTransportConnectionStats::bytesReceived() const {
    return emlite::Val::get("bytesReceived").as<long long>();
}

void WebTransportConnectionStats::bytesReceived(long long value) {
    emlite::Val::set("bytesReceived", value);
}

long long WebTransportConnectionStats::packetsReceived() const {
    return emlite::Val::get("packetsReceived").as<long long>();
}

void WebTransportConnectionStats::packetsReceived(long long value) {
    emlite::Val::set("packetsReceived", value);
}

jsbind::Any WebTransportConnectionStats::smoothedRtt() const {
    return emlite::Val::get("smoothedRtt").as<jsbind::Any>();
}

void WebTransportConnectionStats::smoothedRtt(const jsbind::Any& value) {
    emlite::Val::set("smoothedRtt", value);
}

jsbind::Any WebTransportConnectionStats::rttVariation() const {
    return emlite::Val::get("rttVariation").as<jsbind::Any>();
}

void WebTransportConnectionStats::rttVariation(const jsbind::Any& value) {
    emlite::Val::set("rttVariation", value);
}

jsbind::Any WebTransportConnectionStats::minRtt() const {
    return emlite::Val::get("minRtt").as<jsbind::Any>();
}

void WebTransportConnectionStats::minRtt(const jsbind::Any& value) {
    emlite::Val::set("minRtt", value);
}

jsbind::Any WebTransportConnectionStats::datagrams() const {
    return emlite::Val::get("datagrams").as<jsbind::Any>();
}

void WebTransportConnectionStats::datagrams(const jsbind::Any& value) {
    emlite::Val::set("datagrams", value);
}

long long WebTransportConnectionStats::estimatedSendRate() const {
    return emlite::Val::get("estimatedSendRate").as<long long>();
}

void WebTransportConnectionStats::estimatedSendRate(long long value) {
    emlite::Val::set("estimatedSendRate", value);
}

bool WebTransportConnectionStats::atSendCapacity() const {
    return emlite::Val::get("atSendCapacity").as<bool>();
}

void WebTransportConnectionStats::atSendCapacity(bool value) {
    emlite::Val::set("atSendCapacity", value);
}

WebTransportCloseInfo::WebTransportCloseInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportCloseInfo WebTransportCloseInfo::take_ownership(Handle h) noexcept {
        return WebTransportCloseInfo(h);
    }
WebTransportCloseInfo::WebTransportCloseInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportCloseInfo::WebTransportCloseInfo() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportCloseInfo WebTransportCloseInfo::clone() const noexcept { return *this; }

unsigned long WebTransportCloseInfo::closeCode() const {
    return emlite::Val::get("closeCode").as<unsigned long>();
}

void WebTransportCloseInfo::closeCode(unsigned long value) {
    emlite::Val::set("closeCode", value);
}

jsbind::USVString WebTransportCloseInfo::reason() const {
    return emlite::Val::get("reason").as<jsbind::USVString>();
}

void WebTransportCloseInfo::reason(const jsbind::USVString& value) {
    emlite::Val::set("reason", value);
}

WebTransportSendStreamOptions::WebTransportSendStreamOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportSendStreamOptions WebTransportSendStreamOptions::take_ownership(Handle h) noexcept {
        return WebTransportSendStreamOptions(h);
    }
WebTransportSendStreamOptions::WebTransportSendStreamOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportSendStreamOptions::WebTransportSendStreamOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportSendStreamOptions WebTransportSendStreamOptions::clone() const noexcept { return *this; }

bool WebTransportSendStreamOptions::waitUntilAvailable() const {
    return emlite::Val::get("waitUntilAvailable").as<bool>();
}

void WebTransportSendStreamOptions::waitUntilAvailable(bool value) {
    emlite::Val::set("waitUntilAvailable", value);
}

WebTransport WebTransport::take_ownership(Handle h) noexcept {
        return WebTransport(h);
    }
WebTransport WebTransport::clone() const noexcept { return *this; }
WebTransport::WebTransport(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransport::WebTransport(const emlite::Val &val) noexcept: emlite::Val(val) {}


WebTransport::WebTransport(const jsbind::USVString& url, const jsbind::Any& options): emlite::Val(emlite::Val::global("WebTransport").new_(url, options)) {}

jsbind::Promise WebTransport::getStats() {
    return emlite::Val::call("getStats").as<jsbind::Promise>();
}

jsbind::Promise WebTransport::exportKeyingMaterial(const jsbind::Any& label, const jsbind::Any& context) {
    return emlite::Val::call("exportKeyingMaterial", label, context).as<jsbind::Promise>();
}

jsbind::Promise WebTransport::ready() const {
    return emlite::Val::get("ready").as<jsbind::Promise>();
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

jsbind::DOMString WebTransport::protocol() const {
    return emlite::Val::get("protocol").as<jsbind::DOMString>();
}

jsbind::Promise WebTransport::closed() const {
    return emlite::Val::get("closed").as<jsbind::Promise>();
}

jsbind::Promise WebTransport::draining() const {
    return emlite::Val::get("draining").as<jsbind::Promise>();
}

jsbind::Undefined WebTransport::close(const WebTransportCloseInfo& closeInfo) {
    return emlite::Val::call("close", closeInfo).as<jsbind::Undefined>();
}

WebTransportDatagramDuplexStream WebTransport::datagrams() const {
    return emlite::Val::get("datagrams").as<WebTransportDatagramDuplexStream>();
}

jsbind::Promise WebTransport::createBidirectionalStream(const WebTransportSendStreamOptions& options) {
    return emlite::Val::call("createBidirectionalStream", options).as<jsbind::Promise>();
}

ReadableStream WebTransport::incomingBidirectionalStreams() const {
    return emlite::Val::get("incomingBidirectionalStreams").as<ReadableStream>();
}

jsbind::Promise WebTransport::createUnidirectionalStream(const WebTransportSendStreamOptions& options) {
    return emlite::Val::call("createUnidirectionalStream", options).as<jsbind::Promise>();
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

