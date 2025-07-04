#include <webbind/HTMLHeadElement.hpp>


HTMLHeadElement HTMLHeadElement::take_ownership(Handle h) noexcept {
        return HTMLHeadElement(h);
    }
HTMLHeadElement HTMLHeadElement::clone() const noexcept { return *this; }
HTMLHeadElement::HTMLHeadElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLHeadElement::HTMLHeadElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLHeadElement::HTMLHeadElement(): HTMLElement(emlite::Val::global("HTMLHeadElement").new_()) {}

