#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class EXT_texture_filter_anisotropic : public emlite::Val {
    explicit EXT_texture_filter_anisotropic(Handle h) noexcept;

public:
    explicit EXT_texture_filter_anisotropic(const emlite::Val &val) noexcept;
    static EXT_texture_filter_anisotropic take_ownership(Handle h) noexcept;

    EXT_texture_filter_anisotropic clone() const noexcept;
};

