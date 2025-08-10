#include <webbind/WebTransportHash.hpp>

namespace webbind {

WebTransportHash::WebTransportHash(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebTransportHash WebTransportHash::take_ownership(Handle h) noexcept {
    return WebTransportHash(h);
}

WebTransportHash::WebTransportHash(const emlite::Val &val) noexcept: emlite::Val(val) {}

WebTransportHash::WebTransportHash() noexcept: emlite::Val(emlite::Val::object()) {}

WebTransportHash WebTransportHash::clone() const noexcept { return *this; }

jsbind::String WebTransportHash::algorithm() const {
    return emlite::Val::get("algorithm").as<jsbind::String>();
}

void WebTransportHash::algorithm(const jsbind::String& value) {
    emlite::Val::set("algorithm", value);
}

jsbind::Any WebTransportHash::value() const {
    return emlite::Val::get("value").as<jsbind::Any>();
}

void WebTransportHash::value(const jsbind::Any& value) {
    emlite::Val::set("value", value);
}


} // namespace webbind