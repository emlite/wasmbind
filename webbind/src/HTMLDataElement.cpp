#include <webbind/HTMLDataElement.hpp>


HTMLDataElement HTMLDataElement::take_ownership(Handle h) noexcept {
        return HTMLDataElement(h);
    }
HTMLDataElement HTMLDataElement::clone() const noexcept { return *this; }
HTMLDataElement::HTMLDataElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDataElement::HTMLDataElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLDataElement::HTMLDataElement() : HTMLElement(emlite::Val::global("HTMLDataElement").new_()) {}

jsbind::String HTMLDataElement::value() const {
    return HTMLElement::get("value").as<jsbind::String>();
}

void HTMLDataElement::value(const jsbind::String& value) {
    HTMLElement::set("value", value);
}

