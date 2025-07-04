#include <webbind/WorkletGroupEffect.hpp>
#include <webbind/WorkletAnimationEffect.hpp>


WorkletGroupEffect WorkletGroupEffect::take_ownership(Handle h) noexcept {
        return WorkletGroupEffect(h);
    }
WorkletGroupEffect WorkletGroupEffect::clone() const noexcept { return *this; }
WorkletGroupEffect::WorkletGroupEffect(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WorkletGroupEffect::WorkletGroupEffect(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Sequence<WorkletAnimationEffect> WorkletGroupEffect::getChildren() {
    return emlite::Val::call("getChildren").as<jsbind::Sequence<WorkletAnimationEffect>>();
}

