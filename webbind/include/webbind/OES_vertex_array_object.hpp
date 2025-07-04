#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class WebGLVertexArrayObjectOES;


class OES_vertex_array_object : public emlite::Val {
    explicit OES_vertex_array_object(Handle h) noexcept;

public:
    explicit OES_vertex_array_object(const emlite::Val &val) noexcept;
    static OES_vertex_array_object take_ownership(Handle h) noexcept;

    OES_vertex_array_object clone() const noexcept;
    WebGLVertexArrayObjectOES createVertexArrayOES();
    jsbind::Undefined deleteVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject);
    jsbind::Any isVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject);
    jsbind::Undefined bindVertexArrayOES(const WebGLVertexArrayObjectOES& arrayObject);
};

