#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The WEBGL_compressed_texture_s3tc_srgb class.
/// [`WEBGL_compressed_texture_s3tc_srgb`](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_compressed_texture_s3tc_srgb)
class WEBGL_compressed_texture_s3tc_srgb : public emlite::Val {
    explicit WEBGL_compressed_texture_s3tc_srgb(Handle h) noexcept;

public:
    explicit WEBGL_compressed_texture_s3tc_srgb(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_s3tc_srgb take_ownership(Handle h) noexcept;

    [[nodiscard]] WEBGL_compressed_texture_s3tc_srgb clone() const noexcept;
};

