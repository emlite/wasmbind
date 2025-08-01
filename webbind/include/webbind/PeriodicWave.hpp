#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BaseAudioContext;


/// The PeriodicWave class.
/// [`PeriodicWave`](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicWave)
class PeriodicWave : public emlite::Val {
    explicit PeriodicWave(Handle h) noexcept;

public:
    explicit PeriodicWave(const emlite::Val &val) noexcept;
    static PeriodicWave take_ownership(Handle h) noexcept;

    [[nodiscard]] PeriodicWave clone() const noexcept;
    /// The `new PeriodicWave(..)` constructor, creating a new PeriodicWave instance
    PeriodicWave(const BaseAudioContext& context);
    /// The `new PeriodicWave(..)` constructor, creating a new PeriodicWave instance
    PeriodicWave(const BaseAudioContext& context, const jsbind::Any& options);
};

