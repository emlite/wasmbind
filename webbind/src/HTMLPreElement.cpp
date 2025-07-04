#include <webbind/HTMLPreElement.hpp>


HTMLPreElement HTMLPreElement::take_ownership(Handle h) noexcept {
        return HTMLPreElement(h);
    }
HTMLPreElement HTMLPreElement::clone() const noexcept { return *this; }
HTMLPreElement::HTMLPreElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLPreElement::HTMLPreElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLPreElement::HTMLPreElement(): HTMLElement(emlite::Val::global("HTMLPreElement").new_()) {}

long HTMLPreElement::width() const {
    return HTMLElement::get("width").as<long>();
}

void HTMLPreElement::width(long value) {
    HTMLElement::set("width", value);
}

