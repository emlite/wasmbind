#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_draw_buffers class.
/// [`WEBGL_draw_buffers`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_buffers)
class WEBGL_draw_buffers : public emlite::Val {
    explicit WEBGL_draw_buffers(Handle h) noexcept;

public:
    explicit WEBGL_draw_buffers(const emlite::Val &val) noexcept;
    static WEBGL_draw_buffers take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_draw_buffers clone() const noexcept;
    /// The drawBuffersWEBGL method.
    /// [`WEBGL_draw_buffers.drawBuffersWEBGL`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_buffers/drawBuffersWEBGL)
    jsbind::Undefined drawBuffersWEBGL(const jsbind::TypedArray<jsbind::Any>& buffers);
};

