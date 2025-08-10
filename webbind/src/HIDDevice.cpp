#include <webbind/HIDDevice.hpp>
#include <webbind/HIDCollectionInfo.hpp>

namespace webbind {

HIDDevice HIDDevice::take_ownership(Handle h) noexcept {
    return HIDDevice(h);
}

HIDDevice HIDDevice::clone() const noexcept { return *this; }

emlite::Val HIDDevice::instance() noexcept { return emlite::Val::global("HIDDevice"); }

HIDDevice::HIDDevice(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

HIDDevice::HIDDevice(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Any HIDDevice::oninputreport() const {
    return EventTarget::get("oninputreport").as<jsbind::Any>();
}

void HIDDevice::oninputreport(const jsbind::Any& value) {
    EventTarget::set("oninputreport", value);
}

bool HIDDevice::opened() const {
    return EventTarget::get("opened").as<bool>();
}

unsigned short HIDDevice::vendorId() const {
    return EventTarget::get("vendorId").as<unsigned short>();
}

unsigned short HIDDevice::productId() const {
    return EventTarget::get("productId").as<unsigned short>();
}

jsbind::String HIDDevice::productName() const {
    return EventTarget::get("productName").as<jsbind::String>();
}

jsbind::TypedArray<HIDCollectionInfo> HIDDevice::collections() const {
    return EventTarget::get("collections").as<jsbind::TypedArray<HIDCollectionInfo>>();
}

jsbind::Promise<jsbind::Undefined> HIDDevice::open() {
    return EventTarget::call("open").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> HIDDevice::close() {
    return EventTarget::call("close").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> HIDDevice::forget() {
    return EventTarget::call("forget").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> HIDDevice::sendReport(unsigned char reportId, const jsbind::Any& data) {
    return EventTarget::call("sendReport", reportId, data).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> HIDDevice::sendFeatureReport(unsigned char reportId, const jsbind::Any& data) {
    return EventTarget::call("sendFeatureReport", reportId, data).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::DataView> HIDDevice::receiveFeatureReport(unsigned char reportId) {
    return EventTarget::call("receiveFeatureReport", reportId).as<jsbind::Promise<jsbind::DataView>>();
}


} // namespace webbind