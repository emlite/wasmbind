#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class WEBGL_compressed_texture_astc : public emlite::Val {
    explicit WEBGL_compressed_texture_astc(Handle h) noexcept;

public:
    explicit WEBGL_compressed_texture_astc(const emlite::Val &val) noexcept;
    static WEBGL_compressed_texture_astc take_ownership(Handle h) noexcept;

    WEBGL_compressed_texture_astc clone() const noexcept;
    jsbind::TypedArray<jsbind::String> getSupportedProfiles();
};

