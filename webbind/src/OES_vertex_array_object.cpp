#include <webbind/OES_vertex_array_object.hpp>
#include <webbind/WebGLVertexArrayObjectOES.hpp>


OES_vertex_array_object OES_vertex_array_object::take_ownership(Handle h) noexcept {
        return OES_vertex_array_object(h);
    }
OES_vertex_array_object OES_vertex_array_object::clone() const noexcept { return *this; }
OES_vertex_array_object::OES_vertex_array_object(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OES_vertex_array_object::OES_vertex_array_object(const emlite::Val &val) noexcept: emlite::Val(val) {}


WebGLVertexArrayObjectOES OES_vertex_array_object::createVertexArrayOES() {
    return emlite::Val::call("createVertexArrayOES").as<WebGLVertexArrayObjectOES>();
}

jsbind::Undefined OES_vertex_array_object::deleteVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject) {
    return emlite::Val::call("deleteVertexArrayOES", arrayObject).as<jsbind::Undefined>();
}

jsbind::Any OES_vertex_array_object::isVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject) {
    return emlite::Val::call("isVertexArrayOES", arrayObject).as<jsbind::Any>();
}

jsbind::Undefined OES_vertex_array_object::bindVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject) {
    return emlite::Val::call("bindVertexArrayOES", arrayObject).as<jsbind::Undefined>();
}

