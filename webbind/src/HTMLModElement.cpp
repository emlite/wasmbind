#include <webbind/HTMLModElement.hpp>


HTMLModElement HTMLModElement::take_ownership(Handle h) noexcept {
        return HTMLModElement(h);
    }
HTMLModElement HTMLModElement::clone() const noexcept { return *this; }
HTMLModElement::HTMLModElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLModElement::HTMLModElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLModElement::HTMLModElement() : HTMLElement(emlite::Val::global("HTMLModElement").new_()) {}

jsbind::USVString HTMLModElement::cite() const {
    return HTMLElement::get("cite").as<jsbind::USVString>();
}

void HTMLModElement::cite(const jsbind::USVString& value) {
    HTMLElement::set("cite", value);
}

jsbind::DOMString HTMLModElement::dateTime() const {
    return HTMLElement::get("dateTime").as<jsbind::DOMString>();
}

void HTMLModElement::dateTime(const jsbind::DOMString& value) {
    HTMLElement::set("dateTime", value);
}

