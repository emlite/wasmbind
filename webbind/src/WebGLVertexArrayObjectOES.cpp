#include "webbind/WebGLVertexArrayObjectOES.hpp"

namespace webbind {

WebGLVertexArrayObjectOES WebGLVertexArrayObjectOES::take_ownership(Handle h) noexcept {
        return WebGLVertexArrayObjectOES(h);
    }
WebGLVertexArrayObjectOES WebGLVertexArrayObjectOES::clone() const noexcept { return *this; }
emlite::Val WebGLVertexArrayObjectOES::instance() noexcept { return emlite::Val::global("WebGLVertexArrayObjectOES"); }
WebGLVertexArrayObjectOES::WebGLVertexArrayObjectOES(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLVertexArrayObjectOES::WebGLVertexArrayObjectOES(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind