#include <webbind/WebTransportSendGroup.hpp>
#include <webbind/WebTransportSendStreamStats.hpp>

namespace webbind {

WebTransportSendGroup WebTransportSendGroup::take_ownership(Handle h) noexcept {
    return WebTransportSendGroup(h);
}

WebTransportSendGroup WebTransportSendGroup::clone() const noexcept { return *this; }

emlite::Val WebTransportSendGroup::instance() noexcept { return emlite::Val::global("WebTransportSendGroup"); }

WebTransportSendGroup::WebTransportSendGroup(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WebTransportSendGroup::WebTransportSendGroup(const emlite::Val &val) noexcept: emlite::Val(val) {}

jsbind::Promise<WebTransportSendStreamStats> WebTransportSendGroup::getStats() {
    return emlite::Val::call("getStats").as<jsbind::Promise<WebTransportSendStreamStats>>();
}


} // namespace webbind