#include <webbind/HTMLModElement.hpp>

namespace webbind {

HTMLModElement HTMLModElement::take_ownership(Handle h) noexcept {
    return HTMLModElement(h);
}

HTMLModElement HTMLModElement::clone() const noexcept { return *this; }

emlite::Val HTMLModElement::instance() noexcept { return emlite::Val::global("HTMLModElement"); }

HTMLModElement::HTMLModElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLModElement::HTMLModElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLModElement::HTMLModElement() : HTMLElement(emlite::Val::global("HTMLModElement").new_()) {}

jsbind::String HTMLModElement::cite() const {
    return HTMLElement::get("cite").as<jsbind::String>();
}

void HTMLModElement::cite(const jsbind::String& value) {
    HTMLElement::set("cite", value);
}

jsbind::String HTMLModElement::dateTime() const {
    return HTMLElement::get("dateTime").as<jsbind::String>();
}

void HTMLModElement::dateTime(const jsbind::String& value) {
    HTMLElement::set("dateTime", value);
}


} // namespace webbind