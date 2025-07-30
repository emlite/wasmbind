#include <webbind/HTMLTimeElement.hpp>


HTMLTimeElement HTMLTimeElement::take_ownership(Handle h) noexcept {
        return HTMLTimeElement(h);
    }
HTMLTimeElement HTMLTimeElement::clone() const noexcept { return *this; }
HTMLTimeElement::HTMLTimeElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLTimeElement::HTMLTimeElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLTimeElement::HTMLTimeElement() : HTMLElement(emlite::Val::global("HTMLTimeElement").new_()) {}

jsbind::String HTMLTimeElement::dateTime() const {
    return HTMLElement::get("dateTime").as<jsbind::String>();
}

void HTMLTimeElement::dateTime(const jsbind::String& value) {
    HTMLElement::set("dateTime", value);
}

