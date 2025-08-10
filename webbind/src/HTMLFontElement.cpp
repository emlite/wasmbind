#include <webbind/HTMLFontElement.hpp>

namespace webbind {

HTMLFontElement HTMLFontElement::take_ownership(Handle h) noexcept {
        return HTMLFontElement(h);
    }
HTMLFontElement HTMLFontElement::clone() const noexcept { return *this; }
emlite::Val HTMLFontElement::instance() noexcept { return emlite::Val::global("HTMLFontElement"); }
HTMLFontElement::HTMLFontElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLFontElement::HTMLFontElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLFontElement::HTMLFontElement() : HTMLElement(emlite::Val::global("HTMLFontElement").new_()) {}

jsbind::String HTMLFontElement::color() const {
    return HTMLElement::get("color").as<jsbind::String>();
}

void HTMLFontElement::color(const jsbind::String& value) {
    HTMLElement::set("color", value);
}

jsbind::String HTMLFontElement::face() const {
    return HTMLElement::get("face").as<jsbind::String>();
}

void HTMLFontElement::face(const jsbind::String& value) {
    HTMLElement::set("face", value);
}

jsbind::String HTMLFontElement::size() const {
    return HTMLElement::get("size").as<jsbind::String>();
}

void HTMLFontElement::size(const jsbind::String& value) {
    HTMLElement::set("size", value);
}


} // namespace webbind