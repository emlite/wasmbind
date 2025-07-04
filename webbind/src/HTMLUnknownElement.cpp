#include <webbind/HTMLUnknownElement.hpp>


HTMLUnknownElement HTMLUnknownElement::take_ownership(Handle h) noexcept {
        return HTMLUnknownElement(h);
    }
HTMLUnknownElement HTMLUnknownElement::clone() const noexcept { return *this; }
HTMLUnknownElement::HTMLUnknownElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLUnknownElement::HTMLUnknownElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


