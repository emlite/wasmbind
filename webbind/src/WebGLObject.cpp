#include <webbind/WebGLObject.hpp>


WebGLObject WebGLObject::take_ownership(Handle h) noexcept {
        return WebGLObject(h);
    }
WebGLObject WebGLObject::clone() const noexcept { return *this; }
emlite::Val WebGLObject::instance() noexcept { return emlite::Val::global("WebGLObject"); }
WebGLObject::WebGLObject(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebGLObject::WebGLObject(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String WebGLObject::label() const {
    return emlite::Val::get("label").as<jsbind::String>();
}

void WebGLObject::label(const jsbind::String& value) {
    emlite::Val::set("label", value);
}

