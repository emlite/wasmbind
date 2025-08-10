#include <webbind/ShadowAnimation.hpp>

namespace webbind {

ShadowAnimation ShadowAnimation::take_ownership(Handle h) noexcept {
        return ShadowAnimation(h);
    }
ShadowAnimation ShadowAnimation::clone() const noexcept { return *this; }
emlite::Val ShadowAnimation::instance() noexcept { return emlite::Val::global("ShadowAnimation"); }
ShadowAnimation::ShadowAnimation(Handle h) noexcept : Animation(emlite::Val::take_ownership(h)) {}
ShadowAnimation::ShadowAnimation(const emlite::Val &val) noexcept: Animation(val) {}

ShadowAnimation::ShadowAnimation(const Animation& source, const jsbind::Any& newTarget) : Animation(emlite::Val::global("ShadowAnimation").new_(source, newTarget)) {}

Animation ShadowAnimation::sourceAnimation() const {
    return Animation::get("sourceAnimation").as<Animation>();
}


} // namespace webbind