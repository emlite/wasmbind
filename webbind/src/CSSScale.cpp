#include <webbind/CSSScale.hpp>

namespace webbind {

CSSScale CSSScale::take_ownership(Handle h) noexcept {
        return CSSScale(h);
    }
CSSScale CSSScale::clone() const noexcept { return *this; }
emlite::Val CSSScale::instance() noexcept { return emlite::Val::global("CSSScale"); }
CSSScale::CSSScale(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSScale::CSSScale(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}

CSSScale::CSSScale(const jsbind::Any& x, const jsbind::Any& y) : CSSTransformComponent(emlite::Val::global("CSSScale").new_(x, y)) {}

CSSScale::CSSScale(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z) : CSSTransformComponent(emlite::Val::global("CSSScale").new_(x, y, z)) {}

jsbind::Any CSSScale::x() const {
    return CSSTransformComponent::get("x").as<jsbind::Any>();
}

void CSSScale::x(const jsbind::Any& value) {
    CSSTransformComponent::set("x", value);
}

jsbind::Any CSSScale::y() const {
    return CSSTransformComponent::get("y").as<jsbind::Any>();
}

void CSSScale::y(const jsbind::Any& value) {
    CSSTransformComponent::set("y", value);
}

jsbind::Any CSSScale::z() const {
    return CSSTransformComponent::get("z").as<jsbind::Any>();
}

void CSSScale::z(const jsbind::Any& value) {
    CSSTransformComponent::set("z", value);
}


} // namespace webbind