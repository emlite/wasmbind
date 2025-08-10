#include "webbind/OptionalEffectTiming.hpp"

using emlite::Val;
namespace webbind {

OptionalEffectTiming::OptionalEffectTiming(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
OptionalEffectTiming OptionalEffectTiming::take_ownership(Handle h) noexcept {
        return OptionalEffectTiming(h);
    }
OptionalEffectTiming::OptionalEffectTiming(const emlite::Val &val) noexcept: emlite::Val(val) {}
OptionalEffectTiming::OptionalEffectTiming() noexcept: emlite::Val(emlite::Val::object()) {}
OptionalEffectTiming OptionalEffectTiming::clone() const noexcept { return *this; }

double OptionalEffectTiming::delay() const {
    return emlite::Val::get("delay").as<double>();
}

void OptionalEffectTiming::delay(double value) {
    emlite::Val::set("delay", value);
}

double OptionalEffectTiming::endDelay() const {
    return emlite::Val::get("endDelay").as<double>();
}

void OptionalEffectTiming::endDelay(double value) {
    emlite::Val::set("endDelay", value);
}

FillMode OptionalEffectTiming::fill() const {
    return emlite::Val::get("fill").as<FillMode>();
}

void OptionalEffectTiming::fill(const FillMode& value) {
    emlite::Val::set("fill", value);
}

double OptionalEffectTiming::iterationStart() const {
    return emlite::Val::get("iterationStart").as<double>();
}

void OptionalEffectTiming::iterationStart(double value) {
    emlite::Val::set("iterationStart", value);
}

double OptionalEffectTiming::iterations() const {
    return emlite::Val::get("iterations").as<double>();
}

void OptionalEffectTiming::iterations(double value) {
    emlite::Val::set("iterations", value);
}

jsbind::Any OptionalEffectTiming::duration() const {
    return emlite::Val::get("duration").as<jsbind::Any>();
}

void OptionalEffectTiming::duration(const jsbind::Any& value) {
    emlite::Val::set("duration", value);
}

PlaybackDirection OptionalEffectTiming::direction() const {
    return emlite::Val::get("direction").as<PlaybackDirection>();
}

void OptionalEffectTiming::direction(const PlaybackDirection& value) {
    emlite::Val::set("direction", value);
}

jsbind::String OptionalEffectTiming::easing() const {
    return emlite::Val::get("easing").as<jsbind::String>();
}

void OptionalEffectTiming::easing(const jsbind::String& value) {
    emlite::Val::set("easing", value);
}


} // namespace webbind