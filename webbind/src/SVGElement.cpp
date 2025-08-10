#include <webbind/SVGElement.hpp>
#include <webbind/SVGAnimatedString.hpp>
#include <webbind/SVGSVGElement.hpp>
#include <webbind/SVGElement.hpp>
#include <webbind/SVGUseElement.hpp>
#include <webbind/DOMStringMap.hpp>
#include <webbind/FocusOptions.hpp>
#include <webbind/CSSStyleDeclaration.hpp>

namespace webbind {

SVGElement SVGElement::take_ownership(Handle h) noexcept {
        return SVGElement(h);
    }
SVGElement SVGElement::clone() const noexcept { return *this; }
emlite::Val SVGElement::instance() noexcept { return emlite::Val::global("SVGElement"); }
SVGElement::SVGElement(Handle h) noexcept : Element(emlite::Val::take_ownership(h)) {}
SVGElement::SVGElement(const emlite::Val &val) noexcept: Element(val) {}

SVGAnimatedString SVGElement::className() const {
    return Element::get("className").as<SVGAnimatedString>();
}

SVGSVGElement SVGElement::ownerSVGElement() const {
    return Element::get("ownerSVGElement").as<SVGSVGElement>();
}

SVGElement SVGElement::viewportElement() const {
    return Element::get("viewportElement").as<SVGElement>();
}

jsbind::Any SVGElement::onbeforexrselect() const {
    return Element::get("onbeforexrselect").as<jsbind::Any>();
}

void SVGElement::onbeforexrselect(const jsbind::Any& value) {
    Element::set("onbeforexrselect", value);
}

SVGElement SVGElement::correspondingElement() const {
    return Element::get("correspondingElement").as<SVGElement>();
}

SVGUseElement SVGElement::correspondingUseElement() const {
    return Element::get("correspondingUseElement").as<SVGUseElement>();
}

DOMStringMap SVGElement::dataset() const {
    return Element::get("dataset").as<DOMStringMap>();
}

jsbind::String SVGElement::nonce() const {
    return Element::get("nonce").as<jsbind::String>();
}

void SVGElement::nonce(const jsbind::String& value) {
    Element::set("nonce", value);
}

bool SVGElement::autofocus() const {
    return Element::get("autofocus").as<bool>();
}

void SVGElement::autofocus(bool value) {
    Element::set("autofocus", value);
}

long SVGElement::tabIndex() const {
    return Element::get("tabIndex").as<long>();
}

void SVGElement::tabIndex(long value) {
    Element::set("tabIndex", value);
}

jsbind::Undefined SVGElement::focus() {
    return Element::call("focus").as<jsbind::Undefined>();
}

jsbind::Undefined SVGElement::focus(const FocusOptions& options) {
    return Element::call("focus", options).as<jsbind::Undefined>();
}

jsbind::Undefined SVGElement::blur() {
    return Element::call("blur").as<jsbind::Undefined>();
}

CSSStyleDeclaration SVGElement::style() const {
    return Element::get("style").as<CSSStyleDeclaration>();
}


} // namespace webbind