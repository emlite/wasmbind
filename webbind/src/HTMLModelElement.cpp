#include <webbind/HTMLModelElement.hpp>


HTMLModelElement HTMLModelElement::take_ownership(Handle h) noexcept {
        return HTMLModelElement(h);
    }
HTMLModelElement HTMLModelElement::clone() const noexcept { return *this; }
HTMLModelElement::HTMLModelElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLModelElement::HTMLModelElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


