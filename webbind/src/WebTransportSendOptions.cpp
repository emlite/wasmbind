#include "webbind/WebTransportSendOptions.hpp"
#include "webbind/WebTransportSendGroup.hpp"

using emlite::Val;
namespace webbind {

WebTransportSendOptions::WebTransportSendOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportSendOptions WebTransportSendOptions::take_ownership(Handle h) noexcept {
        return WebTransportSendOptions(h);
    }
WebTransportSendOptions::WebTransportSendOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportSendOptions::WebTransportSendOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportSendOptions WebTransportSendOptions::clone() const noexcept { return *this; }

WebTransportSendGroup WebTransportSendOptions::sendGroup() const {
    return emlite::Val::get("sendGroup").as<WebTransportSendGroup>();
}

void WebTransportSendOptions::sendGroup(const WebTransportSendGroup& value) {
    emlite::Val::set("sendGroup", value);
}

long long WebTransportSendOptions::sendOrder() const {
    return emlite::Val::get("sendOrder").as<long long>();
}

void WebTransportSendOptions::sendOrder(long long value) {
    emlite::Val::set("sendOrder", value);
}


} // namespace webbind