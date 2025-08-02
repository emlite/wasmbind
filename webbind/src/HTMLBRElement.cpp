#include <webbind/HTMLBRElement.hpp>


HTMLBRElement HTMLBRElement::take_ownership(Handle h) noexcept {
        return HTMLBRElement(h);
    }
HTMLBRElement HTMLBRElement::clone() const noexcept { return *this; }
emlite::Val HTMLBRElement::instance() noexcept { return emlite::Val::global("HTMLBRElement"); }
HTMLBRElement::HTMLBRElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLBRElement::HTMLBRElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLBRElement::HTMLBRElement() : HTMLElement(emlite::Val::global("HTMLBRElement").new_()) {}

jsbind::String HTMLBRElement::clear() const {
    return HTMLElement::get("clear").as<jsbind::String>();
}

void HTMLBRElement::clear(const jsbind::String& value) {
    HTMLElement::set("clear", value);
}

