#include <webbind/WebGLVertexArrayObjectOES.hpp>


WebGLVertexArrayObjectOES WebGLVertexArrayObjectOES::take_ownership(Handle h) noexcept {
        return WebGLVertexArrayObjectOES(h);
    }
WebGLVertexArrayObjectOES WebGLVertexArrayObjectOES::clone() const noexcept { return *this; }
WebGLVertexArrayObjectOES::WebGLVertexArrayObjectOES(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLVertexArrayObjectOES::WebGLVertexArrayObjectOES(const emlite::Val &val) noexcept: WebGLObject(val) {}


