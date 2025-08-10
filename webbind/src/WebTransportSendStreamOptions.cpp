#include <webbind/WebTransportSendStreamOptions.hpp>

namespace webbind {

WebTransportSendStreamOptions::WebTransportSendStreamOptions(Handle h) noexcept : WebTransportSendOptions(emlite::Val::take_ownership(h)) {}
WebTransportSendStreamOptions WebTransportSendStreamOptions::take_ownership(Handle h) noexcept {
    return WebTransportSendStreamOptions(h);
}

WebTransportSendStreamOptions::WebTransportSendStreamOptions(const emlite::Val &val) noexcept: WebTransportSendOptions(val) {}

WebTransportSendStreamOptions::WebTransportSendStreamOptions() noexcept: WebTransportSendOptions(emlite::Val::object()) {}

WebTransportSendStreamOptions WebTransportSendStreamOptions::clone() const noexcept { return *this; }

bool WebTransportSendStreamOptions::waitUntilAvailable() const {
    return emlite::Val::get("waitUntilAvailable").as<bool>();
}

void WebTransportSendStreamOptions::waitUntilAvailable(bool value) {
    emlite::Val::set("waitUntilAvailable", value);
}


} // namespace webbind