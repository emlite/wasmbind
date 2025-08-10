#include <webbind/PeriodicWaveConstraints.hpp>

namespace webbind {

PeriodicWaveConstraints::PeriodicWaveConstraints(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PeriodicWaveConstraints PeriodicWaveConstraints::take_ownership(Handle h) noexcept {
    return PeriodicWaveConstraints(h);
}

PeriodicWaveConstraints::PeriodicWaveConstraints(const emlite::Val &val) noexcept: emlite::Val(val) {}

PeriodicWaveConstraints::PeriodicWaveConstraints() noexcept: emlite::Val(emlite::Val::object()) {}

PeriodicWaveConstraints PeriodicWaveConstraints::clone() const noexcept { return *this; }

bool PeriodicWaveConstraints::disableNormalization() const {
    return emlite::Val::get("disableNormalization").as<bool>();
}

void PeriodicWaveConstraints::disableNormalization(bool value) {
    emlite::Val::set("disableNormalization", value);
}


} // namespace webbind