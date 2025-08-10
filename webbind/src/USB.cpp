#include <webbind/USB.hpp>
#include <webbind/USBDevice.hpp>
#include <webbind/USBDeviceRequestOptions.hpp>

namespace webbind {

USB USB::take_ownership(Handle h) noexcept {
        return USB(h);
    }
USB USB::clone() const noexcept { return *this; }
emlite::Val USB::instance() noexcept { return emlite::Val::global("USB"); }
USB::USB(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
USB::USB(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any USB::onconnect() const {
    return EventTarget::get("onconnect").as<jsbind::Any>();
}

void USB::onconnect(const jsbind::Any& value) {
    EventTarget::set("onconnect", value);
}

jsbind::Any USB::ondisconnect() const {
    return EventTarget::get("ondisconnect").as<jsbind::Any>();
}

void USB::ondisconnect(const jsbind::Any& value) {
    EventTarget::set("ondisconnect", value);
}

jsbind::Promise<jsbind::TypedArray<USBDevice>> USB::getDevices() {
    return EventTarget::call("getDevices").as<jsbind::Promise<jsbind::TypedArray<USBDevice>>>();
}

jsbind::Promise<USBDevice> USB::requestDevice(const USBDeviceRequestOptions& options) {
    return EventTarget::call("requestDevice", options).as<jsbind::Promise<USBDevice>>();
}


} // namespace webbind