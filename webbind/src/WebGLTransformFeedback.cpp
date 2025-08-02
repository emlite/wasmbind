#include <webbind/WebGLTransformFeedback.hpp>


WebGLTransformFeedback WebGLTransformFeedback::take_ownership(Handle h) noexcept {
        return WebGLTransformFeedback(h);
    }
WebGLTransformFeedback WebGLTransformFeedback::clone() const noexcept { return *this; }
emlite::Val WebGLTransformFeedback::instance() noexcept { return emlite::Val::global("WebGLTransformFeedback"); }
WebGLTransformFeedback::WebGLTransformFeedback(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLTransformFeedback::WebGLTransformFeedback(const emlite::Val &val) noexcept: WebGLObject(val) {}


