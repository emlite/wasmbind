#include <webbind/XRSystem.hpp>
#include <webbind/XRSession.hpp>


XRSessionInit::XRSessionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRSessionInit XRSessionInit::take_ownership(Handle h) noexcept {
        return XRSessionInit(h);
    }
XRSessionInit::XRSessionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRSessionInit::XRSessionInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRSessionInit XRSessionInit::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::DOMString> XRSessionInit::requiredFeatures() const {
    return emlite::Val::get("requiredFeatures").as<jsbind::Sequence<jsbind::DOMString>>();
}

void XRSessionInit::requiredFeatures(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("requiredFeatures", value);
}

jsbind::Sequence<jsbind::DOMString> XRSessionInit::optionalFeatures() const {
    return emlite::Val::get("optionalFeatures").as<jsbind::Sequence<jsbind::DOMString>>();
}

void XRSessionInit::optionalFeatures(const jsbind::Sequence<jsbind::DOMString>& value) {
    emlite::Val::set("optionalFeatures", value);
}

XRSystem XRSystem::take_ownership(Handle h) noexcept {
        return XRSystem(h);
    }
XRSystem XRSystem::clone() const noexcept { return *this; }
XRSystem::XRSystem(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
XRSystem::XRSystem(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise XRSystem::isSessionSupported(const XRSessionMode& mode) {
    return EventTarget::call("isSessionSupported", mode).as<jsbind::Promise>();
}

jsbind::Promise XRSystem::requestSession(const XRSessionMode& mode, const XRSessionInit& options) {
    return EventTarget::call("requestSession", mode, options).as<jsbind::Promise>();
}

jsbind::Any XRSystem::ondevicechange() const {
    return EventTarget::get("ondevicechange").as<jsbind::Any>();
}

void XRSystem::ondevicechange(const jsbind::Any& value) {
    EventTarget::set("ondevicechange", value);
}

