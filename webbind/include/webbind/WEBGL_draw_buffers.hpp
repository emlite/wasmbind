#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_draw_buffers : public emlite::Val {
    explicit WEBGL_draw_buffers(Handle h) noexcept;

public:
    explicit WEBGL_draw_buffers(const emlite::Val &val) noexcept;
    static WEBGL_draw_buffers take_ownership(Handle h) noexcept;

    WEBGL_draw_buffers clone() const noexcept;
    jsbind::Undefined drawBuffersWEBGL(const jsbind::Sequence<jsbind::Any>& buffers);
};

