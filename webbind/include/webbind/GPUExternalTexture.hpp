#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUExternalTexture : public emlite::Val {
    explicit GPUExternalTexture(Handle h) noexcept;

public:
    explicit GPUExternalTexture(const emlite::Val &val) noexcept;
    static GPUExternalTexture take_ownership(Handle h) noexcept;

    GPUExternalTexture clone() const noexcept;
    jsbind::String label() const;
    void label(const jsbind::String& value);
};

