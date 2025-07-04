#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_compressed_texture_etc : public emlite::Val {
    explicit WEBGL_compressed_texture_etc(Handle h) noexcept;

public:
    explicit WEBGL_compressed_texture_etc(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_etc take_ownership(Handle h) noexcept;

    WEBGL_compressed_texture_etc clone() const noexcept;
};

