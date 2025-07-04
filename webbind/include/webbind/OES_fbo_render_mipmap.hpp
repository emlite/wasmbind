#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class OES_fbo_render_mipmap : public emlite::Val {
    explicit OES_fbo_render_mipmap(Handle h) noexcept;

public:
    explicit OES_fbo_render_mipmap(const emlite::Val &val) noexcept;
    static OES_fbo_render_mipmap take_ownership(Handle h) noexcept;

    OES_fbo_render_mipmap clone() const noexcept;
};

