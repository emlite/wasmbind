#include <webbind/SequenceEffect.hpp>
#include <webbind/AnimationEffect.hpp>
#include <webbind/SequenceEffect.hpp>

namespace webbind {

SequenceEffect SequenceEffect::take_ownership(Handle h) noexcept {
        return SequenceEffect(h);
    }
SequenceEffect SequenceEffect::clone() const noexcept { return *this; }
emlite::Val SequenceEffect::instance() noexcept { return emlite::Val::global("SequenceEffect"); }
SequenceEffect::SequenceEffect(Handle h) noexcept : GroupEffect(emlite::Val::take_ownership(h)) {}
SequenceEffect::SequenceEffect(const emlite::Val &val) noexcept: GroupEffect(val) {}

SequenceEffect::SequenceEffect(const jsbind::TypedArray<AnimationEffect>& children) : GroupEffect(emlite::Val::global("SequenceEffect").new_(children)) {}

SequenceEffect::SequenceEffect(const jsbind::TypedArray<AnimationEffect>& children, const jsbind::Any& timing) : GroupEffect(emlite::Val::global("SequenceEffect").new_(children, timing)) {}

SequenceEffect SequenceEffect::clone() {
    return GroupEffect::call("clone").as<SequenceEffect>();
}


} // namespace webbind