#include "webbind/WebTransportOptions.hpp"
#include "webbind/WebTransportHash.hpp"

using emlite::Val;
namespace webbind {

WebTransportOptions::WebTransportOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportOptions WebTransportOptions::take_ownership(Handle h) noexcept {
        return WebTransportOptions(h);
    }
WebTransportOptions::WebTransportOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportOptions::WebTransportOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportOptions WebTransportOptions::clone() const noexcept { return *this; }

bool WebTransportOptions::allowPooling() const {
    return emlite::Val::get("allowPooling").as<bool>();
}

void WebTransportOptions::allowPooling(bool value) {
    emlite::Val::set("allowPooling", value);
}

bool WebTransportOptions::requireUnreliable() const {
    return emlite::Val::get("requireUnreliable").as<bool>();
}

void WebTransportOptions::requireUnreliable(bool value) {
    emlite::Val::set("requireUnreliable", value);
}

jsbind::TypedArray<WebTransportHash> WebTransportOptions::serverCertificateHashes() const {
    return emlite::Val::get("serverCertificateHashes").as<jsbind::TypedArray<WebTransportHash>>();
}

void WebTransportOptions::serverCertificateHashes(const jsbind::TypedArray<WebTransportHash>& value) {
    emlite::Val::set("serverCertificateHashes", value);
}

WebTransportCongestionControl WebTransportOptions::congestionControl() const {
    return emlite::Val::get("congestionControl").as<WebTransportCongestionControl>();
}

void WebTransportOptions::congestionControl(const WebTransportCongestionControl& value) {
    emlite::Val::set("congestionControl", value);
}

unsigned short WebTransportOptions::anticipatedConcurrentIncomingUnidirectionalStreams() const {
    return emlite::Val::get("anticipatedConcurrentIncomingUnidirectionalStreams").as<unsigned short>();
}

void WebTransportOptions::anticipatedConcurrentIncomingUnidirectionalStreams(unsigned short value) {
    emlite::Val::set("anticipatedConcurrentIncomingUnidirectionalStreams", value);
}

unsigned short WebTransportOptions::anticipatedConcurrentIncomingBidirectionalStreams() const {
    return emlite::Val::get("anticipatedConcurrentIncomingBidirectionalStreams").as<unsigned short>();
}

void WebTransportOptions::anticipatedConcurrentIncomingBidirectionalStreams(unsigned short value) {
    emlite::Val::set("anticipatedConcurrentIncomingBidirectionalStreams", value);
}

jsbind::TypedArray<jsbind::String> WebTransportOptions::protocols() const {
    return emlite::Val::get("protocols").as<jsbind::TypedArray<jsbind::String>>();
}

void WebTransportOptions::protocols(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("protocols", value);
}


} // namespace webbind