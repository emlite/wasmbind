#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class OES_draw_buffers_indexed : public emlite::Val {
    explicit OES_draw_buffers_indexed(Handle h) noexcept;

public:
    explicit OES_draw_buffers_indexed(const emlite::Val &val) noexcept;
    static OES_draw_buffers_indexed take_ownership(Handle h) noexcept;

    OES_draw_buffers_indexed clone() const noexcept;
    jsbind::Undefined enableiOES(const jsbind::Any& target, const jsbind::Any& index);
    jsbind::Undefined disableiOES(const jsbind::Any& target, const jsbind::Any& index);
    jsbind::Undefined blendEquationiOES(const jsbind::Any& buf, const jsbind::Any& mode);
    jsbind::Undefined blendEquationSeparateiOES(const jsbind::Any& buf, const jsbind::Any& modeRGB, const jsbind::Any& modeAlpha);
    jsbind::Undefined blendFunciOES(const jsbind::Any& buf, const jsbind::Any& src, const jsbind::Any& dst);
    jsbind::Undefined blendFuncSeparateiOES(const jsbind::Any& buf, const jsbind::Any& srcRGB, const jsbind::Any& dstRGB, const jsbind::Any& srcAlpha, const jsbind::Any& dstAlpha);
    jsbind::Undefined colorMaskiOES(const jsbind::Any& buf, const jsbind::Any& r, const jsbind::Any& g, const jsbind::Any& b, const jsbind::Any& a);
};

