#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUDeviceLostInfo : public emlite::Val {
    explicit GPUDeviceLostInfo(Handle h) noexcept;

public:
    explicit GPUDeviceLostInfo(const emlite::Val &val) noexcept;
    static GPUDeviceLostInfo take_ownership(Handle h) noexcept;

    GPUDeviceLostInfo clone() const noexcept;
    GPUDeviceLostReason reason() const;
    jsbind::DOMString message() const;
};

