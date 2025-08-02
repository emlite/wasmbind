#include <webbind/HTMLOptionElement.hpp>
#include <webbind/HTMLFormElement.hpp>


HTMLOptionElement HTMLOptionElement::take_ownership(Handle h) noexcept {
        return HTMLOptionElement(h);
    }
HTMLOptionElement HTMLOptionElement::clone() const noexcept { return *this; }
emlite::Val HTMLOptionElement::instance() noexcept { return emlite::Val::global("HTMLOptionElement"); }
HTMLOptionElement::HTMLOptionElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLOptionElement::HTMLOptionElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLOptionElement::HTMLOptionElement() : HTMLElement(emlite::Val::global("HTMLOptionElement").new_()) {}

bool HTMLOptionElement::disabled() const {
    return HTMLElement::get("disabled").as<bool>();
}

void HTMLOptionElement::disabled(bool value) {
    HTMLElement::set("disabled", value);
}

HTMLFormElement HTMLOptionElement::form() const {
    return HTMLElement::get("form").as<HTMLFormElement>();
}

jsbind::String HTMLOptionElement::label() const {
    return HTMLElement::get("label").as<jsbind::String>();
}

void HTMLOptionElement::label(const jsbind::String& value) {
    HTMLElement::set("label", value);
}

bool HTMLOptionElement::defaultSelected() const {
    return HTMLElement::get("defaultSelected").as<bool>();
}

void HTMLOptionElement::defaultSelected(bool value) {
    HTMLElement::set("defaultSelected", value);
}

bool HTMLOptionElement::selected() const {
    return HTMLElement::get("selected").as<bool>();
}

void HTMLOptionElement::selected(bool value) {
    HTMLElement::set("selected", value);
}

jsbind::String HTMLOptionElement::value() const {
    return HTMLElement::get("value").as<jsbind::String>();
}

void HTMLOptionElement::value(const jsbind::String& value) {
    HTMLElement::set("value", value);
}

jsbind::String HTMLOptionElement::text() const {
    return HTMLElement::get("text").as<jsbind::String>();
}

void HTMLOptionElement::text(const jsbind::String& value) {
    HTMLElement::set("text", value);
}

long HTMLOptionElement::index() const {
    return HTMLElement::get("index").as<long>();
}

