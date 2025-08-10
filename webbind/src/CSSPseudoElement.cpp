#include "webbind/CSSPseudoElement.hpp"
#include "webbind/Element.hpp"
#include "webbind/CSSPseudoElement.hpp"
#include "webbind/DOMQuad.hpp"
#include "webbind/BoxQuadOptions.hpp"
#include "webbind/DOMQuadInit.hpp"
#include "webbind/ConvertCoordinateOptions.hpp"
#include "webbind/DOMRectReadOnly.hpp"
#include "webbind/DOMPoint.hpp"
#include "webbind/DOMPointInit.hpp"

namespace webbind {

CSSPseudoElement CSSPseudoElement::take_ownership(Handle h) noexcept {
        return CSSPseudoElement(h);
    }
CSSPseudoElement CSSPseudoElement::clone() const noexcept { return *this; }
emlite::Val CSSPseudoElement::instance() noexcept { return emlite::Val::global("CSSPseudoElement"); }
CSSPseudoElement::CSSPseudoElement(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
CSSPseudoElement::CSSPseudoElement(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::String CSSPseudoElement::type() const {
    return EventTarget::get("type").as<jsbind::String>();
}

Element CSSPseudoElement::element() const {
    return EventTarget::get("element").as<Element>();
}

jsbind::Any CSSPseudoElement::parent() const {
    return EventTarget::get("parent").as<jsbind::Any>();
}

CSSPseudoElement CSSPseudoElement::pseudo(const jsbind::String& type) {
    return EventTarget::call("pseudo", type).as<CSSPseudoElement>();
}

jsbind::TypedArray<DOMQuad> CSSPseudoElement::getBoxQuads() {
    return EventTarget::call("getBoxQuads").as<jsbind::TypedArray<DOMQuad>>();
}

jsbind::TypedArray<DOMQuad> CSSPseudoElement::getBoxQuads(const BoxQuadOptions& options) {
    return EventTarget::call("getBoxQuads", options).as<jsbind::TypedArray<DOMQuad>>();
}

DOMQuad CSSPseudoElement::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from) {
    return EventTarget::call("convertQuadFromNode", quad, from).as<DOMQuad>();
}

DOMQuad CSSPseudoElement::convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return EventTarget::call("convertQuadFromNode", quad, from, options).as<DOMQuad>();
}

DOMQuad CSSPseudoElement::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from) {
    return EventTarget::call("convertRectFromNode", rect, from).as<DOMQuad>();
}

DOMQuad CSSPseudoElement::convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return EventTarget::call("convertRectFromNode", rect, from, options).as<DOMQuad>();
}

DOMPoint CSSPseudoElement::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from) {
    return EventTarget::call("convertPointFromNode", point, from).as<DOMPoint>();
}

DOMPoint CSSPseudoElement::convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options) {
    return EventTarget::call("convertPointFromNode", point, from, options).as<DOMPoint>();
}


} // namespace webbind