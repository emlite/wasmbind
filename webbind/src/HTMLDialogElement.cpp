#include <webbind/HTMLDialogElement.hpp>

namespace webbind {

HTMLDialogElement HTMLDialogElement::take_ownership(Handle h) noexcept {
        return HTMLDialogElement(h);
    }
HTMLDialogElement HTMLDialogElement::clone() const noexcept { return *this; }
emlite::Val HTMLDialogElement::instance() noexcept { return emlite::Val::global("HTMLDialogElement"); }
HTMLDialogElement::HTMLDialogElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLDialogElement::HTMLDialogElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLDialogElement::HTMLDialogElement() : HTMLElement(emlite::Val::global("HTMLDialogElement").new_()) {}

bool HTMLDialogElement::open() const {
    return HTMLElement::get("open").as<bool>();
}

void HTMLDialogElement::open(bool value) {
    HTMLElement::set("open", value);
}

jsbind::String HTMLDialogElement::returnValue() const {
    return HTMLElement::get("returnValue").as<jsbind::String>();
}

void HTMLDialogElement::returnValue(const jsbind::String& value) {
    HTMLElement::set("returnValue", value);
}

jsbind::String HTMLDialogElement::closedBy() const {
    return HTMLElement::get("closedBy").as<jsbind::String>();
}

void HTMLDialogElement::closedBy(const jsbind::String& value) {
    HTMLElement::set("closedBy", value);
}

jsbind::Undefined HTMLDialogElement::show() {
    return HTMLElement::call("show").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLDialogElement::showModal() {
    return HTMLElement::call("showModal").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLDialogElement::close() {
    return HTMLElement::call("close").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLDialogElement::close(const jsbind::String& returnValue) {
    return HTMLElement::call("close", returnValue).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLDialogElement::requestClose() {
    return HTMLElement::call("requestClose").as<jsbind::Undefined>();
}

jsbind::Undefined HTMLDialogElement::requestClose(const jsbind::String& returnValue) {
    return HTMLElement::call("requestClose", returnValue).as<jsbind::Undefined>();
}


} // namespace webbind