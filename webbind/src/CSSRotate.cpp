#include "webbind/CSSRotate.hpp"
#include "webbind/CSSNumericValue.hpp"

namespace webbind {

CSSRotate CSSRotate::take_ownership(Handle h) noexcept {
        return CSSRotate(h);
    }
CSSRotate CSSRotate::clone() const noexcept { return *this; }
emlite::Val CSSRotate::instance() noexcept { return emlite::Val::global("CSSRotate"); }
CSSRotate::CSSRotate(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSRotate::CSSRotate(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}

CSSRotate::CSSRotate(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const CSSNumericValue& angle) : CSSTransformComponent(emlite::Val::global("CSSRotate").new_(x, y, z, angle)) {}

jsbind::Any CSSRotate::x() const {
    return CSSTransformComponent::get("x").as<jsbind::Any>();
}

void CSSRotate::x(const jsbind::Any& value) {
    CSSTransformComponent::set("x", value);
}

jsbind::Any CSSRotate::y() const {
    return CSSTransformComponent::get("y").as<jsbind::Any>();
}

void CSSRotate::y(const jsbind::Any& value) {
    CSSTransformComponent::set("y", value);
}

jsbind::Any CSSRotate::z() const {
    return CSSTransformComponent::get("z").as<jsbind::Any>();
}

void CSSRotate::z(const jsbind::Any& value) {
    CSSTransformComponent::set("z", value);
}

CSSNumericValue CSSRotate::angle() const {
    return CSSTransformComponent::get("angle").as<CSSNumericValue>();
}

void CSSRotate::angle(const CSSNumericValue& value) {
    CSSTransformComponent::set("angle", value);
}


} // namespace webbind