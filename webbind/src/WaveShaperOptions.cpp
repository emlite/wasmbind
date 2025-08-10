#include <webbind/WaveShaperOptions.hpp>

namespace webbind {

WaveShaperOptions::WaveShaperOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
WaveShaperOptions WaveShaperOptions::take_ownership(Handle h) noexcept {
    return WaveShaperOptions(h);
}

WaveShaperOptions::WaveShaperOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}

WaveShaperOptions::WaveShaperOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}

WaveShaperOptions WaveShaperOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<float> WaveShaperOptions::curve() const {
    return emlite::Val::get("curve").as<jsbind::TypedArray<float>>();
}

void WaveShaperOptions::curve(jsbind::TypedArray<float> value) {
    emlite::Val::set("curve", value);
}

OverSampleType WaveShaperOptions::oversample() const {
    return emlite::Val::get("oversample").as<OverSampleType>();
}

void WaveShaperOptions::oversample(const OverSampleType& value) {
    emlite::Val::set("oversample", value);
}


} // namespace webbind