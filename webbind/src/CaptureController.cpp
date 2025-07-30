#include <webbind/CaptureController.hpp>
#include <webbind/HTMLElement.hpp>


CaptureController CaptureController::take_ownership(Handle h) noexcept {
        return CaptureController(h);
    }
CaptureController CaptureController::clone() const noexcept { return *this; }
CaptureController::CaptureController(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
CaptureController::CaptureController(const emlite::Val &val) noexcept: EventTarget(val) {}


CaptureController::CaptureController() : EventTarget(emlite::Val::global("CaptureController").new_()) {}

jsbind::Undefined CaptureController::setFocusBehavior(const CaptureStartFocusBehavior& focusBehavior) {
    return EventTarget::call("setFocusBehavior", focusBehavior).as<jsbind::Undefined>();
}

jsbind::Any CaptureController::oncapturedmousechange() const {
    return EventTarget::get("oncapturedmousechange").as<jsbind::Any>();
}

void CaptureController::oncapturedmousechange(const jsbind::Any& value) {
    EventTarget::set("oncapturedmousechange", value);
}

jsbind::TypedArray<long> CaptureController::getSupportedZoomLevels() {
    return EventTarget::call("getSupportedZoomLevels").as<jsbind::TypedArray<long>>();
}

long CaptureController::zoomLevel() const {
    return EventTarget::get("zoomLevel").as<long>();
}

jsbind::Promise<jsbind::Undefined> CaptureController::increaseZoomLevel() {
    return EventTarget::call("increaseZoomLevel").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> CaptureController::decreaseZoomLevel() {
    return EventTarget::call("decreaseZoomLevel").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> CaptureController::resetZoomLevel() {
    return EventTarget::call("resetZoomLevel").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Any CaptureController::onzoomlevelchange() const {
    return EventTarget::get("onzoomlevelchange").as<jsbind::Any>();
}

void CaptureController::onzoomlevelchange(const jsbind::Any& value) {
    EventTarget::set("onzoomlevelchange", value);
}

jsbind::Promise<jsbind::Undefined> CaptureController::forwardWheel(const HTMLElement& element) {
    return EventTarget::call("forwardWheel", element).as<jsbind::Promise<jsbind::Undefined>>();
}

