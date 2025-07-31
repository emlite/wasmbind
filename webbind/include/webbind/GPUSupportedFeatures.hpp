#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The GPUSupportedFeatures class.
/// [`GPUSupportedFeatures`](https://developer.mozilla.org/en-US/docs/Web/API/GPUSupportedFeatures)
class GPUSupportedFeatures : public emlite::Val {
    explicit GPUSupportedFeatures(Handle h) noexcept;

public:
    explicit GPUSupportedFeatures(const emlite::Val &val) noexcept;
    static GPUSupportedFeatures take_ownership(Handle h) noexcept;

    [[nodiscard]] GPUSupportedFeatures clone() const noexcept;
};

