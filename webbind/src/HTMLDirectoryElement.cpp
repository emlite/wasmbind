#include <webbind/HTMLDirectoryElement.hpp>

namespace webbind {

HTMLDirectoryElement HTMLDirectoryElement::take_ownership(Handle h) noexcept {
        return HTMLDirectoryElement(h);
    }
HTMLDirectoryElement HTMLDirectoryElement::clone() const noexcept { return *this; }
emlite::Val HTMLDirectoryElement::instance() noexcept { return emlite::Val::global("HTMLDirectoryElement"); }
HTMLDirectoryElement::HTMLDirectoryElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDirectoryElement::HTMLDirectoryElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLDirectoryElement::HTMLDirectoryElement() : HTMLElement(emlite::Val::global("HTMLDirectoryElement").new_()) {}

bool HTMLDirectoryElement::compact() const {
    return HTMLElement::get("compact").as<bool>();
}

void HTMLDirectoryElement::compact(bool value) {
    HTMLElement::set("compact", value);
}


} // namespace webbind