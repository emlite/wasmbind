#include <webbind/WebTransportCloseInfo.hpp>

namespace webbind {

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

jsbind::String WebTransportCloseInfo::reason() const {
    return emlite::Val::get("reason").as<jsbind::String>();
}

void WebTransportCloseInfo::reason(const jsbind::String& value) {
    emlite::Val::set("reason", value);
}


} // namespace webbind