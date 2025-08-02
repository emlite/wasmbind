#include <webbind/HTMLDListElement.hpp>


HTMLDListElement HTMLDListElement::take_ownership(Handle h) noexcept {
        return HTMLDListElement(h);
    }
HTMLDListElement HTMLDListElement::clone() const noexcept { return *this; }
emlite::Val HTMLDListElement::instance() noexcept { return emlite::Val::global("HTMLDListElement"); }
HTMLDListElement::HTMLDListElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDListElement::HTMLDListElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLDListElement::HTMLDListElement() : HTMLElement(emlite::Val::global("HTMLDListElement").new_()) {}

bool HTMLDListElement::compact() const {
    return HTMLElement::get("compact").as<bool>();
}

void HTMLDListElement::compact(bool value) {
    HTMLElement::set("compact", value);
}

