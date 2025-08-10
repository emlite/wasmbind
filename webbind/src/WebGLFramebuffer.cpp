#include <webbind/WebGLFramebuffer.hpp>

namespace webbind {

WebGLFramebuffer WebGLFramebuffer::take_ownership(Handle h) noexcept {
        return WebGLFramebuffer(h);
    }
WebGLFramebuffer WebGLFramebuffer::clone() const noexcept { return *this; }
emlite::Val WebGLFramebuffer::instance() noexcept { return emlite::Val::global("WebGLFramebuffer"); }
WebGLFramebuffer::WebGLFramebuffer(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLFramebuffer::WebGLFramebuffer(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind