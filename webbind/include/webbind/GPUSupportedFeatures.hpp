#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class GPUSupportedFeatures : public emlite::Val {
    explicit GPUSupportedFeatures(Handle h) noexcept;

public:
    explicit GPUSupportedFeatures(const emlite::Val &val) noexcept;
    static GPUSupportedFeatures take_ownership(Handle h) noexcept;

    GPUSupportedFeatures clone() const noexcept;
};

