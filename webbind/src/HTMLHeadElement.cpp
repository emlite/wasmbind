#include "webbind/HTMLHeadElement.hpp"

namespace webbind {

HTMLHeadElement HTMLHeadElement::take_ownership(Handle h) noexcept {
        return HTMLHeadElement(h);
    }
HTMLHeadElement HTMLHeadElement::clone() const noexcept { return *this; }
emlite::Val HTMLHeadElement::instance() noexcept { return emlite::Val::global("HTMLHeadElement"); }
HTMLHeadElement::HTMLHeadElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLHeadElement::HTMLHeadElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLHeadElement::HTMLHeadElement() : HTMLElement(emlite::Val::global("HTMLHeadElement").new_()) {}


} // namespace webbind