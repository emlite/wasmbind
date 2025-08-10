#include "webbind/WebTransportError.hpp"
#include "webbind/WebTransportErrorOptions.hpp"

namespace webbind {

WebTransportError WebTransportError::take_ownership(Handle h) noexcept {
        return WebTransportError(h);
    }
WebTransportError WebTransportError::clone() const noexcept { return *this; }
emlite::Val WebTransportError::instance() noexcept { return emlite::Val::global("WebTransportError"); }
WebTransportError::WebTransportError(Handle h) noexcept : DOMException(emlite::Val::take_ownership(h)) {}
WebTransportError::WebTransportError(const emlite::Val &val) noexcept: DOMException(val) {}

WebTransportError::WebTransportError() : DOMException(emlite::Val::global("WebTransportError").new_()) {}

WebTransportError::WebTransportError(const jsbind::String& message) : DOMException(emlite::Val::global("WebTransportError").new_(message)) {}

WebTransportError::WebTransportError(const jsbind::String& message, const WebTransportErrorOptions& options) : DOMException(emlite::Val::global("WebTransportError").new_(message, options)) {}

WebTransportErrorSource WebTransportError::source() const {
    return DOMException::get("source").as<WebTransportErrorSource>();
}

unsigned long WebTransportError::streamErrorCode() const {
    return DOMException::get("streamErrorCode").as<unsigned long>();
}


} // namespace webbind