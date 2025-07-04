#include <webbind/SequenceEffect.hpp>


SequenceEffect SequenceEffect::take_ownership(Handle h) noexcept {
        return SequenceEffect(h);
    }
SequenceEffect SequenceEffect::clone() const noexcept { return *this; }
SequenceEffect::SequenceEffect(Handle h) noexcept : GroupEffect(emlite::Val::take_ownership(h)) {}
SequenceEffect::SequenceEffect(const emlite::Val &val) noexcept: GroupEffect(val) {}


SequenceEffect::SequenceEffect(const jsbind::Sequence<AnimationEffect>& children, const jsbind::Any& timing): GroupEffect(emlite::Val::global("SequenceEffect").new_(children, timing)) {}

SequenceEffect SequenceEffect::clone() {
    return GroupEffect::call("clone").as<SequenceEffect>();
}

