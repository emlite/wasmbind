#include <webbind/HTMLUListElement.hpp>

namespace webbind {

HTMLUListElement HTMLUListElement::take_ownership(Handle h) noexcept {
        return HTMLUListElement(h);
    }
HTMLUListElement HTMLUListElement::clone() const noexcept { return *this; }
emlite::Val HTMLUListElement::instance() noexcept { return emlite::Val::global("HTMLUListElement"); }
HTMLUListElement::HTMLUListElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLUListElement::HTMLUListElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLUListElement::HTMLUListElement() : HTMLElement(emlite::Val::global("HTMLUListElement").new_()) {}

bool HTMLUListElement::compact() const {
    return HTMLElement::get("compact").as<bool>();
}

void HTMLUListElement::compact(bool value) {
    HTMLElement::set("compact", value);
}

jsbind::String HTMLUListElement::type() const {
    return HTMLElement::get("type").as<jsbind::String>();
}

void HTMLUListElement::type(const jsbind::String& value) {
    HTMLElement::set("type", value);
}


} // namespace webbind