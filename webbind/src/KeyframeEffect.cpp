#include <webbind/KeyframeEffect.hpp>
#include <webbind/Element.hpp>


KeyframeEffect KeyframeEffect::take_ownership(Handle h) noexcept {
        return KeyframeEffect(h);
    }
KeyframeEffect KeyframeEffect::clone() const noexcept { return *this; }
emlite::Val KeyframeEffect::instance() noexcept { return emlite::Val::global("KeyframeEffect"); }
KeyframeEffect::KeyframeEffect(Handle h) noexcept : AnimationEffect(emlite::Val::take_ownership(h)) {}
KeyframeEffect::KeyframeEffect(const emlite::Val &val) noexcept: AnimationEffect(val) {}


KeyframeEffect::KeyframeEffect(const KeyframeEffect& source) : AnimationEffect(emlite::Val::global("KeyframeEffect").new_(source)) {}

Element KeyframeEffect::target() const {
    return AnimationEffect::get("target").as<Element>();
}

void KeyframeEffect::target(const Element& value) {
    AnimationEffect::set("target", value);
}

jsbind::String KeyframeEffect::pseudoElement() const {
    return AnimationEffect::get("pseudoElement").as<jsbind::String>();
}

void KeyframeEffect::pseudoElement(const jsbind::String& value) {
    AnimationEffect::set("pseudoElement", value);
}

CompositeOperation KeyframeEffect::composite() const {
    return AnimationEffect::get("composite").as<CompositeOperation>();
}

void KeyframeEffect::composite(const CompositeOperation& value) {
    AnimationEffect::set("composite", value);
}

jsbind::TypedArray<jsbind::Object> KeyframeEffect::getKeyframes() {
    return AnimationEffect::call("getKeyframes").as<jsbind::TypedArray<jsbind::Object>>();
}

jsbind::Undefined KeyframeEffect::setKeyframes(const jsbind::Object& keyframes) {
    return AnimationEffect::call("setKeyframes", keyframes).as<jsbind::Undefined>();
}

IterationCompositeOperation KeyframeEffect::iterationComposite() const {
    return AnimationEffect::get("iterationComposite").as<IterationCompositeOperation>();
}

void KeyframeEffect::iterationComposite(const IterationCompositeOperation& value) {
    AnimationEffect::set("iterationComposite", value);
}

