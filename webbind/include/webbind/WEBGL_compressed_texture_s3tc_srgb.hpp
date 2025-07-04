#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_compressed_texture_s3tc_srgb : public emlite::Val {
    explicit WEBGL_compressed_texture_s3tc_srgb(Handle h) noexcept;

public:
    explicit WEBGL_compressed_texture_s3tc_srgb(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_s3tc_srgb take_ownership(Handle h) noexcept;

    WEBGL_compressed_texture_s3tc_srgb clone() const noexcept;
};

