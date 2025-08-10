#include "webbind/PortalHost.hpp"
#include "webbind/StructuredSerializeOptions.hpp"

namespace webbind {

PortalHost PortalHost::take_ownership(Handle h) noexcept {
        return PortalHost(h);
    }
PortalHost PortalHost::clone() const noexcept { return *this; }
emlite::Val PortalHost::instance() noexcept { return emlite::Val::global("PortalHost"); }
PortalHost::PortalHost(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
PortalHost::PortalHost(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Undefined PortalHost::postMessage(const jsbind::Any& message) {
    return EventTarget::call("postMessage", message).as<jsbind::Undefined>();
}

jsbind::Undefined PortalHost::postMessage(const jsbind::Any& message, const StructuredSerializeOptions& options) {
    return EventTarget::call("postMessage", message, options).as<jsbind::Undefined>();
}

jsbind::Any PortalHost::onmessage() const {
    return EventTarget::get("onmessage").as<jsbind::Any>();
}

void PortalHost::onmessage(const jsbind::Any& value) {
    EventTarget::set("onmessage", value);
}

jsbind::Any PortalHost::onmessageerror() const {
    return EventTarget::get("onmessageerror").as<jsbind::Any>();
}

void PortalHost::onmessageerror(const jsbind::Any& value) {
    EventTarget::set("onmessageerror", value);
}


} // namespace webbind