#include <webbind/WEBGL_debug_shaders.hpp>
#include <webbind/WebGLShader.hpp>


WEBGL_debug_shaders WEBGL_debug_shaders::take_ownership(Handle h) noexcept {
        return WEBGL_debug_shaders(h);
    }
WEBGL_debug_shaders WEBGL_debug_shaders::clone() const noexcept { return *this; }
WEBGL_debug_shaders::WEBGL_debug_shaders(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WEBGL_debug_shaders::WEBGL_debug_shaders(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::String WEBGL_debug_shaders::getTranslatedShaderSource(const WebGLShader& shader) {
    return emlite::Val::call("getTranslatedShaderSource", shader).as<jsbind::String>();
}

