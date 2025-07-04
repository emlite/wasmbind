#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class AudioSinkInfo : public emlite::Val {
    explicit AudioSinkInfo(Handle h) noexcept;

public:
    explicit AudioSinkInfo(const emlite::Val &val) noexcept;
    static AudioSinkInfo take_ownership(Handle h) noexcept;

    AudioSinkInfo clone() const noexcept;
    AudioSinkType type() const;
};

