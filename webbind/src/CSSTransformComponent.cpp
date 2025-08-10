#include <webbind/CSSTransformComponent.hpp>
#include <webbind/DOMMatrix.hpp>

namespace webbind {

CSSTransformComponent CSSTransformComponent::take_ownership(Handle h) noexcept {
        return CSSTransformComponent(h);
    }
CSSTransformComponent CSSTransformComponent::clone() const noexcept { return *this; }
emlite::Val CSSTransformComponent::instance() noexcept { return emlite::Val::global("CSSTransformComponent"); }
CSSTransformComponent::CSSTransformComponent(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
CSSTransformComponent::CSSTransformComponent(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool CSSTransformComponent::is2D() const {
    return emlite::Val::get("is2D").as<bool>();
}

void CSSTransformComponent::is2D(bool value) {
    emlite::Val::set("is2D", value);
}

DOMMatrix CSSTransformComponent::toMatrix() {
    return emlite::Val::call("toMatrix").as<DOMMatrix>();
}


} // namespace webbind