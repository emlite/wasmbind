#include <webbind/SVGScriptElement.hpp>
#include <webbind/SVGAnimatedString.hpp>

namespace webbind {

SVGScriptElement SVGScriptElement::take_ownership(Handle h) noexcept {
        return SVGScriptElement(h);
    }
SVGScriptElement SVGScriptElement::clone() const noexcept { return *this; }
emlite::Val SVGScriptElement::instance() noexcept { return emlite::Val::global("SVGScriptElement"); }
SVGScriptElement::SVGScriptElement(Handle h) noexcept : SVGElement(emlite::Val::take_ownership(h)) {}
SVGScriptElement::SVGScriptElement(const emlite::Val &val) noexcept: SVGElement(val) {}

jsbind::String SVGScriptElement::type() const {
    return SVGElement::get("type").as<jsbind::String>();
}

void SVGScriptElement::type(const jsbind::String& value) {
    SVGElement::set("type", value);
}

jsbind::String SVGScriptElement::crossOrigin() const {
    return SVGElement::get("crossOrigin").as<jsbind::String>();
}

void SVGScriptElement::crossOrigin(const jsbind::String& value) {
    SVGElement::set("crossOrigin", value);
}

SVGAnimatedString SVGScriptElement::href() const {
    return SVGElement::get("href").as<SVGAnimatedString>();
}


} // namespace webbind