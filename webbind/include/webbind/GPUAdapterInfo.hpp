#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUAdapterInfo : public emlite::Val {
    explicit GPUAdapterInfo(Handle h) noexcept;

public:
    explicit GPUAdapterInfo(const emlite::Val &val) noexcept;
    static GPUAdapterInfo take_ownership(Handle h) noexcept;

    GPUAdapterInfo clone() const noexcept;
    jsbind::String vendor() const;
    jsbind::String architecture() const;
    jsbind::String device() const;
    jsbind::String description() const;
    unsigned long subgroupMinSize() const;
    unsigned long subgroupMaxSize() const;
    bool isFallbackAdapter() const;
};

