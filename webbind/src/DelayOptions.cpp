#include <webbind/DelayOptions.hpp>

namespace webbind {

DelayOptions::DelayOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
DelayOptions DelayOptions::take_ownership(Handle h) noexcept {
    return DelayOptions(h);
}

DelayOptions::DelayOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}

DelayOptions::DelayOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}

DelayOptions DelayOptions::clone() const noexcept { return *this; }

double DelayOptions::maxDelayTime() const {
    return emlite::Val::get("maxDelayTime").as<double>();
}

void DelayOptions::maxDelayTime(double value) {
    emlite::Val::set("maxDelayTime", value);
}

double DelayOptions::delayTime() const {
    return emlite::Val::get("delayTime").as<double>();
}

void DelayOptions::delayTime(double value) {
    emlite::Val::set("delayTime", value);
}


} // namespace webbind