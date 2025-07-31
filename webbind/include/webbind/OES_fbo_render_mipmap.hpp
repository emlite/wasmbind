#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The OES_fbo_render_mipmap class.
/// [`OES_fbo_render_mipmap`](https://developer.mozilla.org/en-US/docs/Web/API/OES_fbo_render_mipmap)
class OES_fbo_render_mipmap : public emlite::Val {
    explicit OES_fbo_render_mipmap(Handle h) noexcept;

public:
    explicit OES_fbo_render_mipmap(const emlite::Val &val) noexcept;
    static OES_fbo_render_mipmap take_ownership(Handle h) noexcept;

    [[nodiscard]] OES_fbo_render_mipmap clone() const noexcept;
};

