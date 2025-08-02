#include <webbind/WebGLUniformLocation.hpp>


WebGLUniformLocation WebGLUniformLocation::take_ownership(Handle h) noexcept {
        return WebGLUniformLocation(h);
    }
WebGLUniformLocation WebGLUniformLocation::clone() const noexcept { return *this; }
emlite::Val WebGLUniformLocation::instance() noexcept { return emlite::Val::global("WebGLUniformLocation"); }
WebGLUniformLocation::WebGLUniformLocation(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WebGLUniformLocation::WebGLUniformLocation(const emlite::Val &val) noexcept: emlite::Val(val) {}


