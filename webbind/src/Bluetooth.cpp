#include <webbind/Bluetooth.hpp>
#include <webbind/BluetoothDevice.hpp>
#include <webbind/BluetoothLEScan.hpp>


RequestDeviceOptions::RequestDeviceOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RequestDeviceOptions RequestDeviceOptions::take_ownership(Handle h) noexcept {
        return RequestDeviceOptions(h);
    }
RequestDeviceOptions::RequestDeviceOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RequestDeviceOptions::RequestDeviceOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RequestDeviceOptions RequestDeviceOptions::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> RequestDeviceOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::Sequence<jsbind::Any>>();
}

void RequestDeviceOptions::filters(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("filters", value);
}

jsbind::Sequence<jsbind::Any> RequestDeviceOptions::exclusionFilters() const {
    return emlite::Val::get("exclusionFilters").as<jsbind::Sequence<jsbind::Any>>();
}

void RequestDeviceOptions::exclusionFilters(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("exclusionFilters", value);
}

jsbind::Sequence<jsbind::Any> RequestDeviceOptions::optionalServices() const {
    return emlite::Val::get("optionalServices").as<jsbind::Sequence<jsbind::Any>>();
}

void RequestDeviceOptions::optionalServices(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("optionalServices", value);
}

jsbind::Sequence<unsigned short> RequestDeviceOptions::optionalManufacturerData() const {
    return emlite::Val::get("optionalManufacturerData").as<jsbind::Sequence<unsigned short>>();
}

void RequestDeviceOptions::optionalManufacturerData(jsbind::Sequence<unsigned short> value) {
    emlite::Val::set("optionalManufacturerData", value);
}

bool RequestDeviceOptions::acceptAllDevices() const {
    return emlite::Val::get("acceptAllDevices").as<bool>();
}

void RequestDeviceOptions::acceptAllDevices(bool value) {
    emlite::Val::set("acceptAllDevices", value);
}

BluetoothLEScanOptions::BluetoothLEScanOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothLEScanOptions BluetoothLEScanOptions::take_ownership(Handle h) noexcept {
        return BluetoothLEScanOptions(h);
    }
BluetoothLEScanOptions::BluetoothLEScanOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
BluetoothLEScanOptions::BluetoothLEScanOptions() noexcept: emlite::Val(emlite::Val::object()) {}
BluetoothLEScanOptions BluetoothLEScanOptions::clone() const noexcept { return *this; }

jsbind::Sequence<jsbind::Any> BluetoothLEScanOptions::filters() const {
    return emlite::Val::get("filters").as<jsbind::Sequence<jsbind::Any>>();
}

void BluetoothLEScanOptions::filters(const jsbind::Sequence<jsbind::Any>& value) {
    emlite::Val::set("filters", value);
}

bool BluetoothLEScanOptions::keepRepeatedDevices() const {
    return emlite::Val::get("keepRepeatedDevices").as<bool>();
}

void BluetoothLEScanOptions::keepRepeatedDevices(bool value) {
    emlite::Val::set("keepRepeatedDevices", value);
}

bool BluetoothLEScanOptions::acceptAllAdvertisements() const {
    return emlite::Val::get("acceptAllAdvertisements").as<bool>();
}

void BluetoothLEScanOptions::acceptAllAdvertisements(bool value) {
    emlite::Val::set("acceptAllAdvertisements", value);
}

Bluetooth Bluetooth::take_ownership(Handle h) noexcept {
        return Bluetooth(h);
    }
Bluetooth Bluetooth::clone() const noexcept { return *this; }
Bluetooth::Bluetooth(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Bluetooth::Bluetooth(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::Promise Bluetooth::getAvailability() {
    return EventTarget::call("getAvailability").as<jsbind::Promise>();
}

jsbind::Any Bluetooth::onavailabilitychanged() const {
    return EventTarget::get("onavailabilitychanged").as<jsbind::Any>();
}

void Bluetooth::onavailabilitychanged(const jsbind::Any& value) {
    EventTarget::set("onavailabilitychanged", value);
}

BluetoothDevice Bluetooth::referringDevice() const {
    return EventTarget::get("referringDevice").as<BluetoothDevice>();
}

jsbind::Promise Bluetooth::getDevices() {
    return EventTarget::call("getDevices").as<jsbind::Promise>();
}

jsbind::Promise Bluetooth::requestDevice(const RequestDeviceOptions& options) {
    return EventTarget::call("requestDevice", options).as<jsbind::Promise>();
}

jsbind::Promise Bluetooth::requestLEScan(const BluetoothLEScanOptions& options) {
    return EventTarget::call("requestLEScan", options).as<jsbind::Promise>();
}

jsbind::Any Bluetooth::onadvertisementreceived() const {
    return EventTarget::get("onadvertisementreceived").as<jsbind::Any>();
}

void Bluetooth::onadvertisementreceived(const jsbind::Any& value) {
    EventTarget::set("onadvertisementreceived", value);
}

jsbind::Any Bluetooth::ongattserverdisconnected() const {
    return EventTarget::get("ongattserverdisconnected").as<jsbind::Any>();
}

void Bluetooth::ongattserverdisconnected(const jsbind::Any& value) {
    EventTarget::set("ongattserverdisconnected", value);
}

jsbind::Any Bluetooth::oncharacteristicvaluechanged() const {
    return EventTarget::get("oncharacteristicvaluechanged").as<jsbind::Any>();
}

void Bluetooth::oncharacteristicvaluechanged(const jsbind::Any& value) {
    EventTarget::set("oncharacteristicvaluechanged", value);
}

jsbind::Any Bluetooth::onserviceadded() const {
    return EventTarget::get("onserviceadded").as<jsbind::Any>();
}

void Bluetooth::onserviceadded(const jsbind::Any& value) {
    EventTarget::set("onserviceadded", value);
}

jsbind::Any Bluetooth::onservicechanged() const {
    return EventTarget::get("onservicechanged").as<jsbind::Any>();
}

void Bluetooth::onservicechanged(const jsbind::Any& value) {
    EventTarget::set("onservicechanged", value);
}

jsbind::Any Bluetooth::onserviceremoved() const {
    return EventTarget::get("onserviceremoved").as<jsbind::Any>();
}

void Bluetooth::onserviceremoved(const jsbind::Any& value) {
    EventTarget::set("onserviceremoved", value);
}

