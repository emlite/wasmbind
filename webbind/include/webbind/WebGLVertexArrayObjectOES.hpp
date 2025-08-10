#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WebGLObject.hpp"

namespace webbind {

/// Interface WebGLVertexArrayObjectOES
/// [`WebGLVertexArrayObjectOES`](https://developer.mozilla.org/en-US/docs/Web/API/WebGLVertexArrayObjectOES)
class WebGLVertexArrayObjectOES : public WebGLObject {
    explicit WebGLVertexArrayObjectOES(Handle h) noexcept;
public:
    explicit WebGLVertexArrayObjectOES(const emlite::Val &val) noexcept;
    static WebGLVertexArrayObjectOES take_ownership(Handle h) noexcept;
    [[nodiscard]] WebGLVertexArrayObjectOES clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind