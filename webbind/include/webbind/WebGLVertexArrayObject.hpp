#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


class WebGLVertexArrayObject : public WebGLObject {
    explicit WebGLVertexArrayObject(Handle h) noexcept;

public:
    explicit WebGLVertexArrayObject(const emlite::Val &val) noexcept;
    static WebGLVertexArrayObject take_ownership(Handle h) noexcept;

    WebGLVertexArrayObject clone() const noexcept;
};

