#include <webbind/WebGLFramebuffer.hpp>


WebGLFramebuffer WebGLFramebuffer::take_ownership(Handle h) noexcept {
        return WebGLFramebuffer(h);
    }
WebGLFramebuffer WebGLFramebuffer::clone() const noexcept { return *this; }
WebGLFramebuffer::WebGLFramebuffer(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLFramebuffer::WebGLFramebuffer(const emlite::Val &val) noexcept: WebGLObject(val) {}


