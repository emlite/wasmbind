#include <webbind/WebGLObject.hpp>


WebGLObject WebGLObject::take_ownership(Handle h) noexcept {
        return WebGLObject(h);
    }
WebGLObject WebGLObject::clone() const noexcept { return *this; }
WebGLObject::WebGLObject(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebGLObject::WebGLObject(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::USVString WebGLObject::label() const {
    return emlite::Val::get("label").as<jsbind::USVString>();
}

void WebGLObject::label(const jsbind::USVString& value) {
    emlite::Val::set("label", value);
}

