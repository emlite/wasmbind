#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The AudioParamMap class.
/// [`AudioParamMap`](https://developer.mozilla.org/en-US/docs/Web/API/AudioParamMap)
class AudioParamMap : public emlite::Val {
    explicit AudioParamMap(Handle h) noexcept;

public:
    explicit AudioParamMap(const emlite::Val &val) noexcept;
    static AudioParamMap take_ownership(Handle h) noexcept;

    [[nodiscard]] AudioParamMap clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

