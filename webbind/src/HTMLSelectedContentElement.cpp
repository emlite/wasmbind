#include <webbind/HTMLSelectedContentElement.hpp>

namespace webbind {

HTMLSelectedContentElement HTMLSelectedContentElement::take_ownership(Handle h) noexcept {
    return HTMLSelectedContentElement(h);
}

HTMLSelectedContentElement HTMLSelectedContentElement::clone() const noexcept { return *this; }

emlite::Val HTMLSelectedContentElement::instance() noexcept { return emlite::Val::global("HTMLSelectedContentElement"); }

HTMLSelectedContentElement::HTMLSelectedContentElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLSelectedContentElement::HTMLSelectedContentElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLSelectedContentElement::HTMLSelectedContentElement() : HTMLElement(emlite::Val::global("HTMLSelectedContentElement").new_()) {}


} // namespace webbind