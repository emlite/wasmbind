#include <webbind/WebGLVertexArrayObject.hpp>

namespace webbind {

WebGLVertexArrayObject WebGLVertexArrayObject::take_ownership(Handle h) noexcept {
    return WebGLVertexArrayObject(h);
}

WebGLVertexArrayObject WebGLVertexArrayObject::clone() const noexcept { return *this; }

emlite::Val WebGLVertexArrayObject::instance() noexcept { return emlite::Val::global("WebGLVertexArrayObject"); }

WebGLVertexArrayObject::WebGLVertexArrayObject(Handle h) noexcept : WebGLObject(emlite::Val::take_ownership(h)) {}

WebGLVertexArrayObject::WebGLVertexArrayObject(const emlite::Val &val) noexcept: WebGLObject(val) {}


} // namespace webbind