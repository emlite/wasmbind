#include <webbind/HTMLDataListElement.hpp>
#include <webbind/HTMLCollection.hpp>


HTMLDataListElement HTMLDataListElement::take_ownership(Handle h) noexcept {
        return HTMLDataListElement(h);
    }
HTMLDataListElement HTMLDataListElement::clone() const noexcept { return *this; }
emlite::Val HTMLDataListElement::instance() noexcept { return emlite::Val::global("HTMLDataListElement"); }
HTMLDataListElement::HTMLDataListElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDataListElement::HTMLDataListElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLDataListElement::HTMLDataListElement() : HTMLElement(emlite::Val::global("HTMLDataListElement").new_()) {}

HTMLCollection HTMLDataListElement::options() const {
    return HTMLElement::get("options").as<HTMLCollection>();
}

