#include <webbind/HTMLPictureElement.hpp>


HTMLPictureElement HTMLPictureElement::take_ownership(Handle h) noexcept {
        return HTMLPictureElement(h);
    }
HTMLPictureElement HTMLPictureElement::clone() const noexcept { return *this; }
HTMLPictureElement::HTMLPictureElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLPictureElement::HTMLPictureElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLPictureElement::HTMLPictureElement() : HTMLElement(emlite::Val::global("HTMLPictureElement").new_()) {}

