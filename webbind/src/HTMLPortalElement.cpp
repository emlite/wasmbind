#include <webbind/HTMLPortalElement.hpp>
#include <webbind/MessagePort.hpp>


PortalActivateOptions::PortalActivateOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
PortalActivateOptions PortalActivateOptions::take_ownership(Handle h) noexcept {
        return PortalActivateOptions(h);
    }
PortalActivateOptions::PortalActivateOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
PortalActivateOptions::PortalActivateOptions() noexcept: emlite::Val(emlite::Val::object()) {}
PortalActivateOptions PortalActivateOptions::clone() const noexcept { return *this; }

jsbind::Any PortalActivateOptions::data() const {
    return emlite::Val::get("data").as<jsbind::Any>();
}

void PortalActivateOptions::data(const jsbind::Any& value) {
    emlite::Val::set("data", value);
}

HTMLPortalElement HTMLPortalElement::take_ownership(Handle h) noexcept {
        return HTMLPortalElement(h);
    }
HTMLPortalElement HTMLPortalElement::clone() const noexcept { return *this; }
HTMLPortalElement::HTMLPortalElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLPortalElement::HTMLPortalElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLPortalElement::HTMLPortalElement(): HTMLElement(emlite::Val::global("HTMLPortalElement").new_()) {}

jsbind::USVString HTMLPortalElement::src() const {
    return HTMLElement::get("src").as<jsbind::USVString>();
}

void HTMLPortalElement::src(const jsbind::USVString& value) {
    HTMLElement::set("src", value);
}

jsbind::DOMString HTMLPortalElement::referrerPolicy() const {
    return HTMLElement::get("referrerPolicy").as<jsbind::DOMString>();
}

void HTMLPortalElement::referrerPolicy(const jsbind::DOMString& value) {
    HTMLElement::set("referrerPolicy", value);
}

jsbind::Promise HTMLPortalElement::activate(const PortalActivateOptions& options) {
    return HTMLElement::call("activate", options).as<jsbind::Promise>();
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

