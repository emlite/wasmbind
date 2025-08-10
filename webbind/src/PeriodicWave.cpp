#include <webbind/PeriodicWave.hpp>
#include <webbind/BaseAudioContext.hpp>
#include <webbind/PeriodicWaveOptions.hpp>

namespace webbind {

PeriodicWave PeriodicWave::take_ownership(Handle h) noexcept {
        return PeriodicWave(h);
    }
PeriodicWave PeriodicWave::clone() const noexcept { return *this; }
emlite::Val PeriodicWave::instance() noexcept { return emlite::Val::global("PeriodicWave"); }
PeriodicWave::PeriodicWave(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PeriodicWave::PeriodicWave(const emlite::Val &val) noexcept: emlite::Val(val) {}

PeriodicWave::PeriodicWave(const BaseAudioContext& context) : emlite::Val(emlite::Val::global("PeriodicWave").new_(context)) {}

PeriodicWave::PeriodicWave(const BaseAudioContext& context, const PeriodicWaveOptions& options) : emlite::Val(emlite::Val::global("PeriodicWave").new_(context, options)) {}


} // namespace webbind