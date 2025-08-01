#include <webbind/HTMLTitleElement.hpp>


HTMLTitleElement HTMLTitleElement::take_ownership(Handle h) noexcept {
        return HTMLTitleElement(h);
    }
HTMLTitleElement HTMLTitleElement::clone() const noexcept { return *this; }
HTMLTitleElement::HTMLTitleElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTitleElement::HTMLTitleElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTitleElement::HTMLTitleElement() : HTMLElement(emlite::Val::global("HTMLTitleElement").new_()) {}

jsbind::String HTMLTitleElement::text() const {
    return HTMLElement::get("text").as<jsbind::String>();
}

void HTMLTitleElement::text(const jsbind::String& value) {
    HTMLElement::set("text", value);
}

