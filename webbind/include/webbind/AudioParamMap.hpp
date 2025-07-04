#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class AudioParamMap : public emlite::Val {
    explicit AudioParamMap(Handle h) noexcept;

public:
    explicit AudioParamMap(const emlite::Val &val) noexcept;
    static AudioParamMap take_ownership(Handle h) noexcept;

    AudioParamMap clone() const noexcept;
};

