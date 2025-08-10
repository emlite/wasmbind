#include "webbind/HTMLMenuElement.hpp"

namespace webbind {

HTMLMenuElement HTMLMenuElement::take_ownership(Handle h) noexcept {
        return HTMLMenuElement(h);
    }
HTMLMenuElement HTMLMenuElement::clone() const noexcept { return *this; }
emlite::Val HTMLMenuElement::instance() noexcept { return emlite::Val::global("HTMLMenuElement"); }
HTMLMenuElement::HTMLMenuElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLMenuElement::HTMLMenuElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLMenuElement::HTMLMenuElement() : HTMLElement(emlite::Val::global("HTMLMenuElement").new_()) {}

bool HTMLMenuElement::compact() const {
    return HTMLElement::get("compact").as<bool>();
}

void HTMLMenuElement::compact(bool value) {
    HTMLElement::set("compact", value);
}


} // namespace webbind