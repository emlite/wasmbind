#include <webbind/WebGLShaderPrecisionFormat.hpp>

namespace webbind {

WebGLShaderPrecisionFormat WebGLShaderPrecisionFormat::take_ownership(Handle h) noexcept {
    return WebGLShaderPrecisionFormat(h);
}

WebGLShaderPrecisionFormat WebGLShaderPrecisionFormat::clone() const noexcept { return *this; }

emlite::Val WebGLShaderPrecisionFormat::instance() noexcept { return emlite::Val::global("WebGLShaderPrecisionFormat"); }

WebGLShaderPrecisionFormat::WebGLShaderPrecisionFormat(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

WebGLShaderPrecisionFormat::WebGLShaderPrecisionFormat(const emlite::Val &val) noexcept: emlite::Val(val) {}

int WebGLShaderPrecisionFormat::rangeMin() const {
    return emlite::Val::get("rangeMin").as<int>();
}

int WebGLShaderPrecisionFormat::rangeMax() const {
    return emlite::Val::get("rangeMax").as<int>();
}

int WebGLShaderPrecisionFormat::precision() const {
    return emlite::Val::get("precision").as<int>();
}


} // namespace webbind