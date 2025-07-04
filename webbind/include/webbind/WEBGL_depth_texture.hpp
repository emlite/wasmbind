#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_depth_texture : public emlite::Val {
    explicit WEBGL_depth_texture(Handle h) noexcept;

public:
    explicit WEBGL_depth_texture(const emlite::Val &val) noexcept;
    static WEBGL_depth_texture take_ownership(Handle h) noexcept;

    WEBGL_depth_texture clone() const noexcept;
};

