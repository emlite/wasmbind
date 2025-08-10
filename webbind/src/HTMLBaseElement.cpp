#include <webbind/HTMLBaseElement.hpp>

namespace webbind {

HTMLBaseElement HTMLBaseElement::take_ownership(Handle h) noexcept {
    return HTMLBaseElement(h);
}

HTMLBaseElement HTMLBaseElement::clone() const noexcept { return *this; }

emlite::Val HTMLBaseElement::instance() noexcept { return emlite::Val::global("HTMLBaseElement"); }

HTMLBaseElement::HTMLBaseElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLBaseElement::HTMLBaseElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLBaseElement::HTMLBaseElement() : HTMLElement(emlite::Val::global("HTMLBaseElement").new_()) {}

jsbind::String HTMLBaseElement::href() const {
    return HTMLElement::get("href").as<jsbind::String>();
}

void HTMLBaseElement::href(const jsbind::String& value) {
    HTMLElement::set("href", value);
}

jsbind::String HTMLBaseElement::target() const {
    return HTMLElement::get("target").as<jsbind::String>();
}

void HTMLBaseElement::target(const jsbind::String& value) {
    HTMLElement::set("target", value);
}


} // namespace webbind