#include <webbind/WebGLRenderbuffer.hpp>


WebGLRenderbuffer WebGLRenderbuffer::take_ownership(Handle h) noexcept {
        return WebGLRenderbuffer(h);
    }
WebGLRenderbuffer WebGLRenderbuffer::clone() const noexcept { return *this; }
WebGLRenderbuffer::WebGLRenderbuffer(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLRenderbuffer::WebGLRenderbuffer(const emlite::Val &val) noexcept: WebGLObject(val) {}


