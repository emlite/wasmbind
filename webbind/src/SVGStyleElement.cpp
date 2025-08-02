#include <webbind/SVGStyleElement.hpp>
#include <webbind/CSSStyleSheet.hpp>


SVGStyleElement SVGStyleElement::take_ownership(Handle h) noexcept {
        return SVGStyleElement(h);
    }
SVGStyleElement SVGStyleElement::clone() const noexcept { return *this; }
emlite::Val SVGStyleElement::instance() noexcept { return emlite::Val::global("SVGStyleElement"); }
SVGStyleElement::SVGStyleElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGStyleElement::SVGStyleElement(const emlite::Val &val) noexcept: SVGElement(val) {}


jsbind::String SVGStyleElement::type() const {
    return SVGElement::get("type").as<jsbind::String>();
}

void SVGStyleElement::type(const jsbind::String& value) {
    SVGElement::set("type", value);
}

jsbind::String SVGStyleElement::media() const {
    return SVGElement::get("media").as<jsbind::String>();
}

void SVGStyleElement::media(const jsbind::String& value) {
    SVGElement::set("media", value);
}

jsbind::String SVGStyleElement::title() const {
    return SVGElement::get("title").as<jsbind::String>();
}

void SVGStyleElement::title(const jsbind::String& value) {
    SVGElement::set("title", value);
}

CSSStyleSheet SVGStyleElement::sheet() const {
    return SVGElement::get("sheet").as<CSSStyleSheet>();
}

