#include <webbind/HID.hpp>
#include <webbind/HIDDevice.hpp>


HIDDeviceRequestOptions::HIDDeviceRequestOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDDeviceRequestOptions HIDDeviceRequestOptions::take_ownership(Handle h) noexcept {
        return HIDDeviceRequestOptions(h);
    }
HIDDeviceRequestOptions::HIDDeviceRequestOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
HIDDeviceRequestOptions::HIDDeviceRequestOptions() noexcept: emlite::Val(emlite::Val::object()) {}
HIDDeviceRequestOptions HIDDeviceRequestOptions::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> HIDDeviceRequestOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::Sequence<jsbind::Any>>();
}

void HIDDeviceRequestOptions::filters(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("filters", value);
}

jsbind::Sequence<jsbind::Any> HIDDeviceRequestOptions::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::Sequence<jsbind::Any>>();
}

void HIDDeviceRequestOptions::exclusionFilters(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("exclusionFilters", value);
}

HID HID::take_ownership(Handle h) noexcept {
        return HID(h);
    }
HID HID::clone() const noexcept { return *this; }
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

jsbind::Promise<jsbind::Sequence<HIDDevice>> HID::getDevices() {
    return EventTarget::call("getDevices").as<jsbind::Promise<jsbind::Sequence<HIDDevice>>>();
}

jsbind::Promise<jsbind::Sequence<HIDDevice>> HID::requestDevice(const HIDDeviceRequestOptions& options) {
    return EventTarget::call("requestDevice", options).as<jsbind::Promise<jsbind::Sequence<HIDDevice>>>();
}

