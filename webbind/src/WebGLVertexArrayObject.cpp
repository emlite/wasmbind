#include <webbind/WebGLVertexArrayObject.hpp>


WebGLVertexArrayObject WebGLVertexArrayObject::take_ownership(Handle h) noexcept {
        return WebGLVertexArrayObject(h);
    }
WebGLVertexArrayObject WebGLVertexArrayObject::clone() const noexcept { return *this; }
WebGLVertexArrayObject::WebGLVertexArrayObject(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}
WebGLVertexArrayObject::WebGLVertexArrayObject(const emlite::Val &val) noexcept: WebGLObject(val) {}


