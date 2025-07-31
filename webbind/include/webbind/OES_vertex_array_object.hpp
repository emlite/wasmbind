#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLVertexArrayObjectOES;


/// The OES_vertex_array_object class.
/// [`OES_vertex_array_object`](https://developer.mozilla.org/en-US/docs/Web/API/OES_vertex_array_object)
class OES_vertex_array_object : public emlite::Val {
    explicit OES_vertex_array_object(Handle h) noexcept;

public:
    explicit OES_vertex_array_object(const emlite::Val &val) noexcept;
    static OES_vertex_array_object take_ownership(Handle h) noexcept;

    [[nodiscard]] OES_vertex_array_object clone() const noexcept;
    /// The createVertexArrayOES method.
    /// [`OES_vertex_array_object.createVertexArrayOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_vertex_array_object/createVertexArrayOES)
    WebGLVertexArrayObjectOES createVertexArrayOES();
    /// The deleteVertexArrayOES method.
    /// [`OES_vertex_array_object.deleteVertexArrayOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_vertex_array_object/deleteVertexArrayOES)
    jsbind::Undefined deleteVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject);
    /// The isVertexArrayOES method.
    /// [`OES_vertex_array_object.isVertexArrayOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_vertex_array_object/isVertexArrayOES)
    jsbind::Any isVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject);
    /// The bindVertexArrayOES method.
    /// [`OES_vertex_array_object.bindVertexArrayOES`](https://developer.mozilla.org/en-US/docs/Web/API/OES_vertex_array_object/bindVertexArrayOES)
    jsbind::Undefined bindVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject);
};

