#include "webbind/WebTransportErrorOptions.hpp"

using emlite::Val;
namespace webbind {

WebTransportErrorOptions::WebTransportErrorOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportErrorOptions WebTransportErrorOptions::take_ownership(Handle h) noexcept {
        return WebTransportErrorOptions(h);
    }
WebTransportErrorOptions::WebTransportErrorOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WebTransportErrorOptions::WebTransportErrorOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WebTransportErrorOptions WebTransportErrorOptions::clone() const noexcept { return *this; }

WebTransportErrorSource WebTransportErrorOptions::source() const {
    return emlite::Val::get("source").as<WebTransportErrorSource>();
}

void WebTransportErrorOptions::source(const WebTransportErrorSource& value) {
    emlite::Val::set("source", value);
}

unsigned long WebTransportErrorOptions::streamErrorCode() const {
    return emlite::Val::get("streamErrorCode").as<unsigned long>();
}

void WebTransportErrorOptions::streamErrorCode(unsigned long value) {
    emlite::Val::set("streamErrorCode", value);
}


} // namespace webbind