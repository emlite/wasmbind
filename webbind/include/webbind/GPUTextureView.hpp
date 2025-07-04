#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUTextureView : public emlite::Val {
    explicit GPUTextureView(Handle h) noexcept;

public:
    explicit GPUTextureView(const emlite::Val &val) noexcept;
    static GPUTextureView take_ownership(Handle h) noexcept;

    GPUTextureView clone() const noexcept;
    jsbind::USVString label() const;
    void label(const jsbind::USVString& value);
};

