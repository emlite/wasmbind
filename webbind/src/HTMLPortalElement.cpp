#include <webbind/HTMLPortalElement.hpp>
#include <webbind/PortalActivateOptions.hpp>
#include <webbind/StructuredSerializeOptions.hpp>

namespace webbind {

HTMLPortalElement HTMLPortalElement::take_ownership(Handle h) noexcept {
    return HTMLPortalElement(h);
}

HTMLPortalElement HTMLPortalElement::clone() const noexcept { return *this; }

emlite::Val HTMLPortalElement::instance() noexcept { return emlite::Val::global("HTMLPortalElement"); }

HTMLPortalElement::HTMLPortalElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}

HTMLPortalElement::HTMLPortalElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLPortalElement::HTMLPortalElement() : HTMLElement(emlite::Val::global("HTMLPortalElement").new_()) {}

jsbind::String HTMLPortalElement::src() const {
    return HTMLElement::get("src").as<jsbind::String>();
}

void HTMLPortalElement::src(const jsbind::String& value) {
    HTMLElement::set("src", value);
}

jsbind::String HTMLPortalElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::String>();
}

void HTMLPortalElement::referrerPolicy(const jsbind::String& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::Promise<jsbind::Undefined> HTMLPortalElement::activate() {
    return HTMLElement::call("activate").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> HTMLPortalElement::activate(const PortalActivateOptions& options) {
    return HTMLElement::call("activate", options).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Undefined HTMLPortalElement::postMessage(const jsbind::Any& message) {
    return HTMLElement::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined HTMLPortalElement::postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options) {
    return HTMLElement::call("postMessage", message, options).as<jsbind::Undefined>();
}

jsbind::Any HTMLPortalElement::onmessage() const {
    return HTMLElement::get("onmessage").as<jsbind::Any>();
}

void HTMLPortalElement::onmessage(const jsbind::Any& value) {
    HTMLElement::set("onmessage", value);
}

jsbind::Any HTMLPortalElement::onmessageerror() const {
    return HTMLElement::get("onmessageerror").as<jsbind::Any>();
}

void HTMLPortalElement::onmessageerror(const jsbind::Any& value) {
    HTMLElement::set("onmessageerror", value);
}


} // namespace webbind