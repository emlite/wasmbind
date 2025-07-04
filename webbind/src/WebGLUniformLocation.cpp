#include <webbind/WebGLUniformLocation.hpp>


WebGLUniformLocation WebGLUniformLocation::take_ownership(Handle h) noexcept {
        return WebGLUniformLocation(h);
    }
WebGLUniformLocation WebGLUniformLocation::clone() const noexcept { return *this; }
WebGLUniformLocation::WebGLUniformLocation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebGLUniformLocation::WebGLUniformLocation(const emlite::Val &val) noexcept: emlite::Val(val) {}


