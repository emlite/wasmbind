#include <webbind/HTMLHeadingElement.hpp>


HTMLHeadingElement HTMLHeadingElement::take_ownership(Handle h) noexcept {
        return HTMLHeadingElement(h);
    }
HTMLHeadingElement HTMLHeadingElement::clone() const noexcept { return *this; }
HTMLHeadingElement::HTMLHeadingElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLHeadingElement::HTMLHeadingElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLHeadingElement::HTMLHeadingElement() : HTMLElement(emlite::Val::global("HTMLHeadingElement").new_()) {}

jsbind::String HTMLHeadingElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLHeadingElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

