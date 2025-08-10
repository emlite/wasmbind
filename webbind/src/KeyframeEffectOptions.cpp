#include "webbind/KeyframeEffectOptions.hpp"

using emlite::Val;
namespace webbind {

KeyframeEffectOptions::KeyframeEffectOptions(Handle h) noexcept : EffectTiming(emlite::Val::take_ownership(h)) {}
KeyframeEffectOptions KeyframeEffectOptions::take_ownership(Handle h) noexcept {
        return KeyframeEffectOptions(h);
    }
KeyframeEffectOptions::KeyframeEffectOptions(const emlite::Val &val) noexcept: EffectTiming(val) {}
KeyframeEffectOptions::KeyframeEffectOptions() noexcept: EffectTiming(emlite::Val::object()) {}
KeyframeEffectOptions KeyframeEffectOptions::clone() const noexcept { return *this; }

CompositeOperation KeyframeEffectOptions::composite() const {
    return emlite::Val::get("composite").as<CompositeOperation>();
}

void KeyframeEffectOptions::composite(const CompositeOperation& value) {
    emlite::Val::set("composite", value);
}

jsbind::String KeyframeEffectOptions::pseudoElement() const {
    return emlite::Val::get("pseudoElement").as<jsbind::String>();
}

void KeyframeEffectOptions::pseudoElement(const jsbind::String& value) {
    emlite::Val::set("pseudoElement", value);
}


} // namespace webbind