#include <webbind/SVGStyleElement.hpp>
#include <webbind/CSSStyleSheet.hpp>


SVGStyleElement SVGStyleElement::take_ownership(Handle h) noexcept {
        return SVGStyleElement(h);
    }
SVGStyleElement SVGStyleElement::clone() const noexcept { return *this; }
SVGStyleElement::SVGStyleElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGStyleElement::SVGStyleElement(const emlite::Val &val) noexcept: SVGElement(val) {}


jsbind::DOMString SVGStyleElement::type() const {
    return SVGElement::get("type").as<jsbind::DOMString>();
}

void SVGStyleElement::type(const jsbind::DOMString& value) {
    SVGElement::set("type", value);
}

jsbind::DOMString SVGStyleElement::media() const {
    return SVGElement::get("media").as<jsbind::DOMString>();
}

void SVGStyleElement::media(const jsbind::DOMString& value) {
    SVGElement::set("media", value);
}

jsbind::DOMString SVGStyleElement::title() const {
    return SVGElement::get("title").as<jsbind::DOMString>();
}

void SVGStyleElement::title(const jsbind::DOMString& value) {
    SVGElement::set("title", value);
}

CSSStyleSheet SVGStyleElement::sheet() const {
    return SVGElement::get("sheet").as<CSSStyleSheet>();
}

