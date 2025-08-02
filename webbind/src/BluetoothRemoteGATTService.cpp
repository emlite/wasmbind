#include <webbind/BluetoothRemoteGATTService.hpp>
#include <webbind/BluetoothDevice.hpp>
#include <webbind/BluetoothRemoteGATTCharacteristic.hpp>


BluetoothRemoteGATTService BluetoothRemoteGATTService::take_ownership(Handle h) noexcept {
        return BluetoothRemoteGATTService(h);
    }
BluetoothRemoteGATTService BluetoothRemoteGATTService::clone() const noexcept { return *this; }
emlite::Val BluetoothRemoteGATTService::instance() noexcept { return emlite::Val::global("BluetoothRemoteGATTService"); }
BluetoothRemoteGATTService::BluetoothRemoteGATTService(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
BluetoothRemoteGATTService::BluetoothRemoteGATTService(const emlite::Val &val) noexcept: EventTarget(val) {}


BluetoothDevice BluetoothRemoteGATTService::device() const {
    return EventTarget::get("device").as<BluetoothDevice>();
}

jsbind::Any BluetoothRemoteGATTService::uuid() const {
    return EventTarget::get("uuid").as<jsbind::Any>();
}

bool BluetoothRemoteGATTService::isPrimary() const {
    return EventTarget::get("isPrimary").as<bool>();
}

jsbind::Promise<BluetoothRemoteGATTCharacteristic> BluetoothRemoteGATTService::getCharacteristic(const jsbind::Any& characteristic) {
    return EventTarget::call("getCharacteristic", characteristic).as<jsbind::Promise<BluetoothRemoteGATTCharacteristic>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTCharacteristic>> BluetoothRemoteGATTService::getCharacteristics() {
    return EventTarget::call("getCharacteristics").as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTCharacteristic>>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTCharacteristic>> BluetoothRemoteGATTService::getCharacteristics(const jsbind::Any& characteristic) {
    return EventTarget::call("getCharacteristics", characteristic).as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTCharacteristic>>>();
}

jsbind::Promise<BluetoothRemoteGATTService> BluetoothRemoteGATTService::getIncludedService(const jsbind::Any& service) {
    return EventTarget::call("getIncludedService", service).as<jsbind::Promise<BluetoothRemoteGATTService>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> BluetoothRemoteGATTService::getIncludedServices() {
    return EventTarget::call("getIncludedServices").as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> BluetoothRemoteGATTService::getIncludedServices(const jsbind::Any& service) {
    return EventTarget::call("getIncludedServices", service).as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>>>();
}

jsbind::Any BluetoothRemoteGATTService::oncharacteristicvaluechanged() const {
    return EventTarget::get("oncharacteristicvaluechanged").as<jsbind::Any>();
}

void BluetoothRemoteGATTService::oncharacteristicvaluechanged(const jsbind::Any& value) {
    EventTarget::set("oncharacteristicvaluechanged", value);
}

jsbind::Any BluetoothRemoteGATTService::onserviceadded() const {
    return EventTarget::get("onserviceadded").as<jsbind::Any>();
}

void BluetoothRemoteGATTService::onserviceadded(const jsbind::Any& value) {
    EventTarget::set("onserviceadded", value);
}

jsbind::Any BluetoothRemoteGATTService::onservicechanged() const {
    return EventTarget::get("onservicechanged").as<jsbind::Any>();
}

void BluetoothRemoteGATTService::onservicechanged(const jsbind::Any& value) {
    EventTarget::set("onservicechanged", value);
}

jsbind::Any BluetoothRemoteGATTService::onserviceremoved() const {
    return EventTarget::get("onserviceremoved").as<jsbind::Any>();
}

void BluetoothRemoteGATTService::onserviceremoved(const jsbind::Any& value) {
    EventTarget::set("onserviceremoved", value);
}

