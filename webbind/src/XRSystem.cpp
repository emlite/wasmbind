#include <webbind/XRSystem.hpp>
#include <webbind/XRSession.hpp>
#include <webbind/XRSessionInit.hpp>

namespace webbind {

XRSystem XRSystem::take_ownership(Handle h) noexcept {
    return XRSystem(h);
}

XRSystem XRSystem::clone() const noexcept { return *this; }

emlite::Val XRSystem::instance() noexcept { return emlite::Val::global("XRSystem"); }

XRSystem::XRSystem(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

XRSystem::XRSystem(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Promise<bool> XRSystem::isSessionSupported(const XRSessionMode& mode) {
    return EventTarget::call("isSessionSupported", mode).as<jsbind::Promise<bool>>();
}

jsbind::Promise<XRSession> XRSystem::requestSession(const XRSessionMode& mode) {
    return EventTarget::call("requestSession", mode).as<jsbind::Promise<XRSession>>();
}

jsbind::Promise<XRSession> XRSystem::requestSession(const XRSessionMode& mode, const XRSessionInit& options) {
    return EventTarget::call("requestSession", mode, options).as<jsbind::Promise<XRSession>>();
}

jsbind::Any XRSystem::ondevicechange() const {
    return EventTarget::get("ondevicechange").as<jsbind::Any>();
}

void XRSystem::ondevicechange(const jsbind::Any& value) {
    EventTarget::set("ondevicechange", value);
}


} // namespace webbind