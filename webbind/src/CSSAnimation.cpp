#include <webbind/CSSAnimation.hpp>

namespace webbind {

CSSAnimation CSSAnimation::take_ownership(Handle h) noexcept {
    return CSSAnimation(h);
}

CSSAnimation CSSAnimation::clone() const noexcept { return *this; }

emlite::Val CSSAnimation::instance() noexcept { return emlite::Val::global("CSSAnimation"); }

CSSAnimation::CSSAnimation(Handle h) noexcept : Animation(emlite::Val::take_ownership(h)) {}

CSSAnimation::CSSAnimation(const emlite::Val &val) noexcept: Animation(val) {}

jsbind::String CSSAnimation::animationName() const {
    return Animation::get("animationName").as<jsbind::String>();
}


} // namespace webbind