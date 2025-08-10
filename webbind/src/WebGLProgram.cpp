#include <webbind/WebGLProgram.hpp>

namespace webbind {

WebGLProgram WebGLProgram::take_ownership(Handle h) noexcept {
    return WebGLProgram(h);
}

WebGLProgram WebGLProgram::clone() const noexcept { return *this; }

emlite::Val WebGLProgram::instance() noexcept { return emlite::Val::global("WebGLProgram"); }

WebGLProgram::WebGLProgram(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}

WebGLProgram::WebGLProgram(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind