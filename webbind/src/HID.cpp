#include <webbind/HID.hpp>
#include <webbind/HIDDevice.hpp>


HIDDeviceRequestOptions::HIDDeviceRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDDeviceRequestOptions HIDDeviceRequestOptions::take_ownership(Handle h) noexcept {
        return HIDDeviceRequestOptions(h);
    }
HIDDeviceRequestOptions::HIDDeviceRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
HIDDeviceRequestOptions::HIDDeviceRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
HIDDeviceRequestOptions HIDDeviceRequestOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::Any> HIDDeviceRequestOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::TypedArray<jsbind::Any>>();
}

void HIDDeviceRequestOptions::filters(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("filters", value);
}

jsbind::TypedArray<jsbind::Any> HIDDeviceRequestOptions::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::TypedArray<jsbind::Any>>();
}

void HIDDeviceRequestOptions::exclusionFilters(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("exclusionFilters", value);
}

HID HID::take_ownership(Handle h) noexcept {
        return HID(h);
    }
HID HID::clone() const noexcept { return *this; }
emlite::Val HID::instance() noexcept { return emlite::Val::global("HID"); }
HID::HID(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
HID::HID(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Any HID::onconnect() const {
    return EventTarget::get("onconnect").as<jsbind::Any>();
}

void HID::onconnect(const jsbind::Any& value) {
    EventTarget::set("onconnect", value);
}

jsbind::Any HID::ondisconnect() const {
    return EventTarget::get("ondisconnect").as<jsbind::Any>();
}

void HID::ondisconnect(const jsbind::Any& value) {
    EventTarget::set("ondisconnect", value);
}

jsbind::Promise<jsbind::TypedArray<HIDDevice>> HID::getDevices() {
    return EventTarget::call("getDevices").as<jsbind::Promise<jsbind::TypedArray<HIDDevice>>>();
}

jsbind::Promise<jsbind::TypedArray<HIDDevice>> HID::requestDevice(const HIDDeviceRequestOptions& options) {
    return EventTarget::call("requestDevice", options).as<jsbind::Promise<jsbind::TypedArray<HIDDevice>>>();
}

