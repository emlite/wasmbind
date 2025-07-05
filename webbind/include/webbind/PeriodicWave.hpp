#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BaseAudioContext;


class PeriodicWave : public emlite::Val {
    explicit PeriodicWave(Handle h) noexcept;

public:
    explicit PeriodicWave(const emlite::Val &val) noexcept;
    static PeriodicWave take_ownership(Handle h) noexcept;

    PeriodicWave clone() const noexcept;
    PeriodicWave(const BaseAudioContext& context);
    PeriodicWave(const BaseAudioContext& context, const jsbind::Any& options);
};

