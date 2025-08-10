#include "webbind/EffectTiming.hpp"

using emlite::Val;
namespace webbind {

EffectTiming::EffectTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EffectTiming EffectTiming::take_ownership(Handle h) noexcept {
        return EffectTiming(h);
    }
EffectTiming::EffectTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}
EffectTiming::EffectTiming() noexcept: emlite::Val(emlite::Val::object()) {}
EffectTiming EffectTiming::clone() const noexcept { return *this; }

FillMode EffectTiming::fill() const {
    return emlite::Val::get("fill").as<FillMode>();
}

void EffectTiming::fill(const FillMode& value) {
    emlite::Val::set("fill", value);
}

double EffectTiming::iterationStart() const {
    return emlite::Val::get("iterationStart").as<double>();
}

void EffectTiming::iterationStart(double value) {
    emlite::Val::set("iterationStart", value);
}

double EffectTiming::iterations() const {
    return emlite::Val::get("iterations").as<double>();
}

void EffectTiming::iterations(double value) {
    emlite::Val::set("iterations", value);
}

PlaybackDirection EffectTiming::direction() const {
    return emlite::Val::get("direction").as<PlaybackDirection>();
}

void EffectTiming::direction(const PlaybackDirection& value) {
    emlite::Val::set("direction", value);
}

jsbind::String EffectTiming::easing() const {
    return emlite::Val::get("easing").as<jsbind::String>();
}

void EffectTiming::easing(const jsbind::String& value) {
    emlite::Val::set("easing", value);
}


} // namespace webbind