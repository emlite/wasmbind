#include "webbind/MathMLElement.hpp"
#include "webbind/CSSStyleDeclaration.hpp"
#include "webbind/DOMStringMap.hpp"
#include "webbind/FocusOptions.hpp"

namespace webbind {

MathMLElement MathMLElement::take_ownership(Handle h) noexcept {
        return MathMLElement(h);
    }
MathMLElement MathMLElement::clone() const noexcept { return *this; }
emlite::Val MathMLElement::instance() noexcept { return emlite::Val::global("MathMLElement"); }
MathMLElement::MathMLElement(Handle h) noexcept : Element(emlite::Val::take_ownership(h)) {}
MathMLElement::MathMLElement(const emlite::Val &val) noexcept: Element(val) {}

CSSStyleDeclaration MathMLElement::style() const {
    return Element::get("style").as<CSSStyleDeclaration>();
}

jsbind::Any MathMLElement::onbeforexrselect() const {
    return Element::get("onbeforexrselect").as<jsbind::Any>();
}

void MathMLElement::onbeforexrselect(const jsbind::Any& value) {
    Element::set("onbeforexrselect", value);
}

DOMStringMap MathMLElement::dataset() const {
    return Element::get("dataset").as<DOMStringMap>();
}

jsbind::String MathMLElement::nonce() const {
    return Element::get("nonce").as<jsbind::String>();
}

void MathMLElement::nonce(const jsbind::String& value) {
    Element::set("nonce", value);
}

bool MathMLElement::autofocus() const {
    return Element::get("autofocus").as<bool>();
}

void MathMLElement::autofocus(bool value) {
    Element::set("autofocus", value);
}

long MathMLElement::tabIndex() const {
    return Element::get("tabIndex").as<long>();
}

void MathMLElement::tabIndex(long value) {
    Element::set("tabIndex", value);
}

jsbind::Undefined MathMLElement::focus() {
    return Element::call("focus").as<jsbind::Undefined>();
}

jsbind::Undefined MathMLElement::focus(const FocusOptions& options) {
    return Element::call("focus", options).as<jsbind::Undefined>();
}

jsbind::Undefined MathMLElement::blur() {
    return Element::call("blur").as<jsbind::Undefined>();
}


} // namespace webbind