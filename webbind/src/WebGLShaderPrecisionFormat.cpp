#include <webbind/WebGLShaderPrecisionFormat.hpp>


WebGLShaderPrecisionFormat WebGLShaderPrecisionFormat::take_ownership(Handle h) noexcept {
        return WebGLShaderPrecisionFormat(h);
    }
WebGLShaderPrecisionFormat WebGLShaderPrecisionFormat::clone() const noexcept { return *this; }
WebGLShaderPrecisionFormat::WebGLShaderPrecisionFormat(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebGLShaderPrecisionFormat::WebGLShaderPrecisionFormat(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any WebGLShaderPrecisionFormat::rangeMin() const {
    return emlite::Val::get("rangeMin").as<jsbind::Any>();
}

jsbind::Any WebGLShaderPrecisionFormat::rangeMax() const {
    return emlite::Val::get("rangeMax").as<jsbind::Any>();
}

jsbind::Any WebGLShaderPrecisionFormat::precision() const {
    return emlite::Val::get("precision").as<jsbind::Any>();
}

