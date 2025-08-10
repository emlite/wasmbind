#include <webbind/HTMLMapElement.hpp>
#include <webbind/HTMLCollection.hpp>

namespace webbind {

HTMLMapElement HTMLMapElement::take_ownership(Handle h) noexcept {
        return HTMLMapElement(h);
    }
HTMLMapElement HTMLMapElement::clone() const noexcept { return *this; }
emlite::Val HTMLMapElement::instance() noexcept { return emlite::Val::global("HTMLMapElement"); }
HTMLMapElement::HTMLMapElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLMapElement::HTMLMapElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLMapElement::HTMLMapElement() : HTMLElement(emlite::Val::global("HTMLMapElement").new_()) {}

jsbind::String HTMLMapElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLMapElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

HTMLCollection HTMLMapElement::areas() const {
    return HTMLElement::get("areas").as<HTMLCollection>();
}


} // namespace webbind