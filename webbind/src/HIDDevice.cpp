#include <webbind/HIDDevice.hpp>


HIDCollectionInfo::HIDCollectionInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDCollectionInfo HIDCollectionInfo::take_ownership(Handle h) noexcept {
        return HIDCollectionInfo(h);
    }
HIDCollectionInfo::HIDCollectionInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
HIDCollectionInfo::HIDCollectionInfo() noexcept: emlite::Val(emlite::Val::object()) {}
HIDCollectionInfo HIDCollectionInfo::clone() const noexcept { return *this; }

unsigned short HIDCollectionInfo::usagePage() const {
    return emlite::Val::get("usagePage").as<unsigned short>();
}

void HIDCollectionInfo::usagePage(unsigned short value) {
    emlite::Val::set("usagePage", value);
}

unsigned short HIDCollectionInfo::usage() const {
    return emlite::Val::get("usage").as<unsigned short>();
}

void HIDCollectionInfo::usage(unsigned short value) {
    emlite::Val::set("usage", value);
}

unsigned char HIDCollectionInfo::type() const {
    return emlite::Val::get("type").as<unsigned char>();
}

void HIDCollectionInfo::type(unsigned char value) {
    emlite::Val::set("type", value);
}

jsbind::Sequence<HIDCollectionInfo> HIDCollectionInfo::children() const {
    return emlite::Val::get("children").as<jsbind::Sequence<HIDCollectionInfo>>();
}

void HIDCollectionInfo::children(const jsbind::Sequence<HIDCollectionInfo>& value) {
    emlite::Val::set("children", value);
}

jsbind::Sequence<jsbind::Any> HIDCollectionInfo::inputReports() const {
    return emlite::Val::get("inputReports").as<jsbind::Sequence<jsbind::Any>>();
}

void HIDCollectionInfo::inputReports(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("inputReports", value);
}

jsbind::Sequence<jsbind::Any> HIDCollectionInfo::outputReports() const {
    return emlite::Val::get("outputReports").as<jsbind::Sequence<jsbind::Any>>();
}

void HIDCollectionInfo::outputReports(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("outputReports", value);
}

jsbind::Sequence<jsbind::Any> HIDCollectionInfo::featureReports() const {
    return emlite::Val::get("featureReports").as<jsbind::Sequence<jsbind::Any>>();
}

void HIDCollectionInfo::featureReports(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("featureReports", value);
}

HIDDevice HIDDevice::take_ownership(Handle h) noexcept {
        return HIDDevice(h);
    }
HIDDevice HIDDevice::clone() const noexcept { return *this; }
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

jsbind::DOMString HIDDevice::productName() const {
    return EventTarget::get("productName").as<jsbind::DOMString>();
}

jsbind::FrozenArray<HIDCollectionInfo> HIDDevice::collections() const {
    return EventTarget::get("collections").as<jsbind::FrozenArray<HIDCollectionInfo>>();
}

jsbind::Promise HIDDevice::open() {
    return EventTarget::call("open").as<jsbind::Promise>();
}

jsbind::Promise HIDDevice::close() {
    return EventTarget::call("close").as<jsbind::Promise>();
}

jsbind::Promise HIDDevice::forget() {
    return EventTarget::call("forget").as<jsbind::Promise>();
}

jsbind::Promise HIDDevice::sendReport(unsigned char reportId, const jsbind::Any& data) {
    return EventTarget::call("sendReport", reportId, data).as<jsbind::Promise>();
}

jsbind::Promise HIDDevice::sendFeatureReport(unsigned char reportId, const jsbind::Any& data) {
    return EventTarget::call("sendFeatureReport", reportId, data).as<jsbind::Promise>();
}

jsbind::Promise HIDDevice::receiveFeatureReport(unsigned char reportId) {
    return EventTarget::call("receiveFeatureReport", reportId).as<jsbind::Promise>();
}

