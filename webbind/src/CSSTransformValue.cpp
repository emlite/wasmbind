#include <webbind/CSSTransformValue.hpp>
#include <webbind/CSSTransformComponent.hpp>
#include <webbind/DOMMatrix.hpp>


CSSTransformValue CSSTransformValue::take_ownership(Handle h) noexcept {
        return CSSTransformValue(h);
    }
CSSTransformValue CSSTransformValue::clone() const noexcept { return *this; }
CSSTransformValue::CSSTransformValue(Handle h) noexcept : CSSStyleValue(emlite::Val::take_ownership(h)) {}
CSSTransformValue::CSSTransformValue(const emlite::Val &val) noexcept: CSSStyleValue(val) {}


CSSTransformValue::CSSTransformValue(const jsbind::Sequence<CSSTransformComponent>& transforms): CSSStyleValue(emlite::Val::global("CSSTransformValue").new_(transforms)) {}

unsigned long CSSTransformValue::length() const {
    return CSSStyleValue::get("length").as<unsigned long>();
}

bool CSSTransformValue::is2D() const {
    return CSSStyleValue::get("is2D").as<bool>();
}

DOMMatrix CSSTransformValue::toMatrix() {
    return CSSStyleValue::call("toMatrix").as<DOMMatrix>();
}

