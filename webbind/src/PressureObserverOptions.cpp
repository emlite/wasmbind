#include <webbind/PressureObserverOptions.hpp>

namespace webbind {

PressureObserverOptions::PressureObserverOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PressureObserverOptions PressureObserverOptions::take_ownership(Handle h) noexcept {
    return PressureObserverOptions(h);
}

PressureObserverOptions::PressureObserverOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

PressureObserverOptions::PressureObserverOptions() noexcept: emlite::Val(emlite::Val::object()) {}

PressureObserverOptions PressureObserverOptions::clone() const noexcept { return *this; }

unsigned long PressureObserverOptions::sampleInterval() const {
    return emlite::Val::get("sampleInterval").as<unsigned long>();
}

void PressureObserverOptions::sampleInterval(unsigned long value) {
    emlite::Val::set("sampleInterval", value);
}


} // namespace webbind