#include <webbind/WebTransportSendGroup.hpp>
#include <webbind/WebTransportSendStream.hpp>


WebTransportSendGroup WebTransportSendGroup::take_ownership(Handle h) noexcept {
        return WebTransportSendGroup(h);
    }
WebTransportSendGroup WebTransportSendGroup::clone() const noexcept { return *this; }
WebTransportSendGroup::WebTransportSendGroup(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportSendGroup::WebTransportSendGroup(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Promise WebTransportSendGroup::getStats() {
    return emlite::Val::call("getStats").as<jsbind::Promise>();
}

