#include <webbind/CSSPerspective.hpp>

namespace webbind {

CSSPerspective CSSPerspective::take_ownership(Handle h) noexcept {
        return CSSPerspective(h);
    }
CSSPerspective CSSPerspective::clone() const noexcept { return *this; }
emlite::Val CSSPerspective::instance() noexcept { return emlite::Val::global("CSSPerspective"); }
CSSPerspective::CSSPerspective(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSPerspective::CSSPerspective(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}

CSSPerspective::CSSPerspective(const jsbind::Any& length) : CSSTransformComponent(emlite::Val::global("CSSPerspective").new_(length)) {}

jsbind::Any CSSPerspective::length() const {
    return CSSTransformComponent::get("length").as<jsbind::Any>();
}

void CSSPerspective::length(const jsbind::Any& value) {
    CSSTransformComponent::set("length", value);
}


} // namespace webbind