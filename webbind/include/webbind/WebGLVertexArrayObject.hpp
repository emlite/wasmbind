#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebGLObject.hpp"

namespace webbind {

/// Interface WebGLVertexArrayObject
/// [`WebGLVertexArrayObject`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLVertexArrayObject)
class WebGLVertexArrayObject : public WebGLObject {
    explicit WebGLVertexArrayObject(Handle h) noexcept;
public:
    explicit WebGLVertexArrayObject(const emlite::Val &val) noexcept;
    static WebGLVertexArrayObject take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLVertexArrayObject clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind