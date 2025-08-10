#include <webbind/WebGLShader.hpp>

namespace webbind {

WebGLShader WebGLShader::take_ownership(Handle h) noexcept {
    return WebGLShader(h);
}

WebGLShader WebGLShader::clone() const noexcept { return *this; }

emlite::Val WebGLShader::instance() noexcept { return emlite::Val::global("WebGLShader"); }

WebGLShader::WebGLShader(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}

WebGLShader::WebGLShader(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind