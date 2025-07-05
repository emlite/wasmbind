#include <webbind/CSSSkewX.hpp>
#include <webbind/CSSNumericValue.hpp>


CSSSkewX CSSSkewX::take_ownership(Handle h) noexcept {
        return CSSSkewX(h);
    }
CSSSkewX CSSSkewX::clone() const noexcept { return *this; }
CSSSkewX::CSSSkewX(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSSkewX::CSSSkewX(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}


CSSSkewX::CSSSkewX(const CSSNumericValue& ax) : CSSTransformComponent(emlite::Val::global("CSSSkewX").new_(ax)) {}

CSSNumericValue CSSSkewX::ax() const {
    return CSSTransformComponent::get("ax").as<CSSNumericValue>();
}

void CSSSkewX::ax(const CSSNumericValue& value) {
    CSSTransformComponent::set("ax", value);
}

