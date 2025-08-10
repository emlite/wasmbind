#include "webbind/StereoPannerOptions.hpp"

using emlite::Val;
namespace webbind {

StereoPannerOptions::StereoPannerOptions(Handle h) noexcept : AudioNodeOptions(emlite::Val::take_ownership(h)) {}
StereoPannerOptions StereoPannerOptions::take_ownership(Handle h) noexcept {
        return StereoPannerOptions(h);
    }
StereoPannerOptions::StereoPannerOptions(const emlite::Val &val) noexcept: AudioNodeOptions(val) {}
StereoPannerOptions::StereoPannerOptions() noexcept: AudioNodeOptions(emlite::Val::object()) {}
StereoPannerOptions StereoPannerOptions::clone() const noexcept { return *this; }

float StereoPannerOptions::pan() const {
    return emlite::Val::get("pan").as<float>();
}

void StereoPannerOptions::pan(float value) {
    emlite::Val::set("pan", value);
}


} // namespace webbind