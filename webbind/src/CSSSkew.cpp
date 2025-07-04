#include <webbind/CSSSkew.hpp>
#include <webbind/CSSNumericValue.hpp>


CSSSkew CSSSkew::take_ownership(Handle h) noexcept {
        return CSSSkew(h);
    }
CSSSkew CSSSkew::clone() const noexcept { return *this; }
CSSSkew::CSSSkew(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSSkew::CSSSkew(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}


CSSSkew::CSSSkew(const CSSNumericValue& ax, const CSSNumericValue& ay): CSSTransformComponent(emlite::Val::global("CSSSkew").new_(ax, ay)) {}

CSSNumericValue CSSSkew::ax() const {
    return CSSTransformComponent::get("ax").as<CSSNumericValue>();
}

void CSSSkew::ax(const CSSNumericValue& value) {
    CSSTransformComponent::set("ax", value);
}

CSSNumericValue CSSSkew::ay() const {
    return CSSTransformComponent::get("ay").as<CSSNumericValue>();
}

void CSSSkew::ay(const CSSNumericValue& value) {
    CSSTransformComponent::set("ay", value);
}

