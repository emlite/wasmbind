#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_compressed_texture_etc1 : public emlite::Val {
    explicit WEBGL_compressed_texture_etc1(Handle h) noexcept;

public:
    explicit WEBGL_compressed_texture_etc1(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_etc1 take_ownership(Handle h) noexcept;

    WEBGL_compressed_texture_etc1 clone() const noexcept;
};

