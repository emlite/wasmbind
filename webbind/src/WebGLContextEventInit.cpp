#include <webbind/WebGLContextEventInit.hpp>

using emlite::Val;
namespace webbind {

WebGLContextEventInit::WebGLContextEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
WebGLContextEventInit WebGLContextEventInit::take_ownership(Handle h) noexcept {
        return WebGLContextEventInit(h);
    }
WebGLContextEventInit::WebGLContextEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
WebGLContextEventInit::WebGLContextEventInit() noexcept: EventInit(emlite::Val::object()) {}
WebGLContextEventInit WebGLContextEventInit::clone() const noexcept { return *this; }

jsbind::String WebGLContextEventInit::statusMessage() const {
    return emlite::Val::get("statusMessage").as<jsbind::String>();
}

void WebGLContextEventInit::statusMessage(const jsbind::String& value) {
    emlite::Val::set("statusMessage", value);
}


} // namespace webbind