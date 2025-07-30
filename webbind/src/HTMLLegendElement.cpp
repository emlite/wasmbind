#include <webbind/HTMLLegendElement.hpp>
#include <webbind/HTMLFormElement.hpp>


HTMLLegendElement HTMLLegendElement::take_ownership(Handle h) noexcept {
        return HTMLLegendElement(h);
    }
HTMLLegendElement HTMLLegendElement::clone() const noexcept { return *this; }
HTMLLegendElement::HTMLLegendElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLLegendElement::HTMLLegendElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLLegendElement::HTMLLegendElement() : HTMLElement(emlite::Val::global("HTMLLegendElement").new_()) {}

HTMLFormElement HTMLLegendElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::String HTMLLegendElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLLegendElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}

