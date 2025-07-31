#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WebGLObject.hpp"
#include "enums.hpp"


/// The WebGLVertexArrayObject class.
/// [`WebGLVertexArrayObject`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLVertexArrayObject)
class WebGLVertexArrayObject : public WebGLObject {
    explicit WebGLVertexArrayObject(Handle h) noexcept;

public:
    explicit WebGLVertexArrayObject(const emlite::Val &val) noexcept;
    static WebGLVertexArrayObject take_ownership(Handle h) noexcept;

    [[nodiscard]] WebGLVertexArrayObject clone() const noexcept;
};

