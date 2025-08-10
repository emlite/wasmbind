#include <webbind/HTMLTableCaptionElement.hpp>

namespace webbind {

HTMLTableCaptionElement HTMLTableCaptionElement::take_ownership(Handle h) noexcept {
    return HTMLTableCaptionElement(h);
}

HTMLTableCaptionElement HTMLTableCaptionElement::clone() const noexcept { return *this; }

emlite::Val HTMLTableCaptionElement::instance() noexcept { return emlite::Val::global("HTMLTableCaptionElement"); }

HTMLTableCaptionElement::HTMLTableCaptionElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLTableCaptionElement::HTMLTableCaptionElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLTableCaptionElement::HTMLTableCaptionElement() : HTMLElement(emlite::Val::global("HTMLTableCaptionElement").new_()) {}

jsbind::String HTMLTableCaptionElement::align() const {
    return HTMLElement::get("align").as<jsbind::String>();
}

void HTMLTableCaptionElement::align(const jsbind::String& value) {
    HTMLElement::set("align", value);
}


} // namespace webbind