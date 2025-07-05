#include <webbind/HTMLDirectoryElement.hpp>


HTMLDirectoryElement HTMLDirectoryElement::take_ownership(Handle h) noexcept {
        return HTMLDirectoryElement(h);
    }
HTMLDirectoryElement HTMLDirectoryElement::clone() const noexcept { return *this; }
HTMLDirectoryElement::HTMLDirectoryElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDirectoryElement::HTMLDirectoryElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLDirectoryElement::HTMLDirectoryElement() : HTMLElement(emlite::Val::global("HTMLDirectoryElement").new_()) {}

bool HTMLDirectoryElement::compact() const {
    return HTMLElement::get("compact").as<bool>();
}

void HTMLDirectoryElement::compact(bool value) {
    HTMLElement::set("compact", value);
}

