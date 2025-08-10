#include <webbind/WebGLRenderbuffer.hpp>

namespace webbind {

WebGLRenderbuffer WebGLRenderbuffer::take_ownership(Handle h) noexcept {
    return WebGLRenderbuffer(h);
}

WebGLRenderbuffer WebGLRenderbuffer::clone() const noexcept { return *this; }

emlite::Val WebGLRenderbuffer::instance() noexcept { return emlite::Val::global("WebGLRenderbuffer"); }

WebGLRenderbuffer::WebGLRenderbuffer(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}

WebGLRenderbuffer::WebGLRenderbuffer(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind