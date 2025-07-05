#include <webbind/HTMLMapElement.hpp>
#include <webbind/HTMLCollection.hpp>


HTMLMapElement HTMLMapElement::take_ownership(Handle h) noexcept {
        return HTMLMapElement(h);
    }
HTMLMapElement HTMLMapElement::clone() const noexcept { return *this; }
HTMLMapElement::HTMLMapElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLMapElement::HTMLMapElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLMapElement::HTMLMapElement() : HTMLElement(emlite::Val::global("HTMLMapElement").new_()) {}

jsbind::DOMString HTMLMapElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLMapElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

HTMLCollection HTMLMapElement::areas() const {
    return HTMLElement::get("areas").as<HTMLCollection>();
}

