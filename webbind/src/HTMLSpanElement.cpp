#include <webbind/HTMLSpanElement.hpp>


HTMLSpanElement HTMLSpanElement::take_ownership(Handle h) noexcept {
        return HTMLSpanElement(h);
    }
HTMLSpanElement HTMLSpanElement::clone() const noexcept { return *this; }
emlite::Val HTMLSpanElement::instance() noexcept { return emlite::Val::global("HTMLSpanElement"); }
HTMLSpanElement::HTMLSpanElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLSpanElement::HTMLSpanElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLSpanElement::HTMLSpanElement() : HTMLElement(emlite::Val::global("HTMLSpanElement").new_()) {}

