#include <webbind/CSSTranslate.hpp>
#include <webbind/CSSNumericValue.hpp>


CSSTranslate CSSTranslate::take_ownership(Handle h) noexcept {
        return CSSTranslate(h);
    }
CSSTranslate CSSTranslate::clone() const noexcept { return *this; }
emlite::Val CSSTranslate::instance() noexcept { return emlite::Val::global("CSSTranslate"); }
CSSTranslate::CSSTranslate(Handle h) noexcept : CSSTransformComponent(emlite::Val::take_ownership(h)) {}
CSSTranslate::CSSTranslate(const emlite::Val &val) noexcept: CSSTransformComponent(val) {}


CSSTranslate::CSSTranslate(const CSSNumericValue& x, const CSSNumericValue& y) : CSSTransformComponent(emlite::Val::global("CSSTranslate").new_(x, y)) {}

CSSTranslate::CSSTranslate(const CSSNumericValue& x, const CSSNumericValue& y, const CSSNumericValue& z) : CSSTransformComponent(emlite::Val::global("CSSTranslate").new_(x, y, z)) {}

CSSNumericValue CSSTranslate::x() const {
    return CSSTransformComponent::get("x").as<CSSNumericValue>();
}

void CSSTranslate::x(const CSSNumericValue& value) {
    CSSTransformComponent::set("x", value);
}

CSSNumericValue CSSTranslate::y() const {
    return CSSTransformComponent::get("y").as<CSSNumericValue>();
}

void CSSTranslate::y(const CSSNumericValue& value) {
    CSSTransformComponent::set("y", value);
}

CSSNumericValue CSSTranslate::z() const {
    return CSSTransformComponent::get("z").as<CSSNumericValue>();
}

void CSSTranslate::z(const CSSNumericValue& value) {
    CSSTransformComponent::set("z", value);
}

