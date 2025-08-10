#include <webbind/CSSSkewX.hpp>
#include <webbind/CSSNumericValue.hpp>

namespace webbind {

CSSSkewX CSSSkewX::take_ownership(Handle h) noexcept {
        return CSSSkewX(h);
    }
CSSSkewX CSSSkewX::clone() const noexcept { return *this; }
emlite::Val CSSSkewX::instance() noexcept { return emlite::Val::global("CSSSkewX"); }
CSSSkewX::CSSSkewX(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSSkewX::CSSSkewX(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}

CSSSkewX::CSSSkewX(const CSSNumericValue& ax) : CSSTransformComponent(emlite::Val::global("CSSSkewX").new_(ax)) {}

CSSNumericValue CSSSkewX::ax() const {
    return CSSTransformComponent::get("ax").as<CSSNumericValue>();
}

void CSSSkewX::ax(const CSSNumericValue& value) {
    CSSTransformComponent::set("ax", value);
}


} // namespace webbind