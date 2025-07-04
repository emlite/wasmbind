#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLVertexArrayObjectOES : public WebGLObject {
    explicit WebGLVertexArrayObjectOES(Handle h) noexcept;

public:
    explicit WebGLVertexArrayObjectOES(const emlite::Val &val) noexcept;
    static WebGLVertexArrayObjectOES take_ownership(Handle h) noexcept;

    WebGLVertexArrayObjectOES clone() const noexcept;
};

