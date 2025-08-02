#include <webbind/XRSystem.hpp>
#include <webbind/XRSession.hpp>


XRSessionInit::XRSessionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRSessionInit XRSessionInit::take_ownership(Handle h) noexcept {
        return XRSessionInit(h);
    }
XRSessionInit::XRSessionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRSessionInit::XRSessionInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRSessionInit XRSessionInit::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> XRSessionInit::requiredFeatures() const {
    return emlite::Val::get("requiredFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

void XRSessionInit::requiredFeatures(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("requiredFeatures", value);
}

jsbind::TypedArray<jsbind::String> XRSessionInit::optionalFeatures() const {
    return emlite::Val::get("optionalFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

void XRSessionInit::optionalFeatures(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("optionalFeatures", value);
}

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

