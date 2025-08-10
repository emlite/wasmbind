#include "webbind/HTMLLabelElement.hpp"
#include "webbind/HTMLFormElement.hpp"

namespace webbind {

HTMLLabelElement HTMLLabelElement::take_ownership(Handle h) noexcept {
        return HTMLLabelElement(h);
    }
HTMLLabelElement HTMLLabelElement::clone() const noexcept { return *this; }
emlite::Val HTMLLabelElement::instance() noexcept { return emlite::Val::global("HTMLLabelElement"); }
HTMLLabelElement::HTMLLabelElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLLabelElement::HTMLLabelElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLLabelElement::HTMLLabelElement() : HTMLElement(emlite::Val::global("HTMLLabelElement").new_()) {}

HTMLFormElement HTMLLabelElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::String HTMLLabelElement::htmlFor() const {
    return HTMLElement::get("htmlFor").as<jsbind::String>();
}

void HTMLLabelElement::htmlFor(const jsbind::String& value) {
    HTMLElement::set("htmlFor", value);
}

HTMLElement HTMLLabelElement::control() const {
    return HTMLElement::get("control").as<HTMLElement>();
}


} // namespace webbind