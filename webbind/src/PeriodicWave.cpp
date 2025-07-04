#include <webbind/PeriodicWave.hpp>
#include <webbind/BaseAudioContext.hpp>


PeriodicWave PeriodicWave::take_ownership(Handle h) noexcept {
        return PeriodicWave(h);
    }
PeriodicWave PeriodicWave::clone() const noexcept { return *this; }
PeriodicWave::PeriodicWave(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PeriodicWave::PeriodicWave(const emlite::Val &val) noexcept: emlite::Val(val) {}


PeriodicWave::PeriodicWave(const BaseAudioContext& context, const jsbind::Any& options): emlite::Val(emlite::Val::global("PeriodicWave").new_(context, options)) {}

