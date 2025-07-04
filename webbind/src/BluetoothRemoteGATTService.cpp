#include <webbind/BluetoothRemoteGATTService.hpp>
#include <webbind/BluetoothDevice.hpp>
#include <webbind/BluetoothRemoteGATTCharacteristic.hpp>


BluetoothRemoteGATTService BluetoothRemoteGATTService::take_ownership(Handle h) noexcept {
        return BluetoothRemoteGATTService(h);
    }
BluetoothRemoteGATTService BluetoothRemoteGATTService::clone() const noexcept { return *this; }
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

jsbind::Promise BluetoothRemoteGATTService::getCharacteristic(const jsbind::Any& characteristic) {
    return EventTarget::call("getCharacteristic", characteristic).as<jsbind::Promise>();
}

jsbind::Promise BluetoothRemoteGATTService::getCharacteristics(const jsbind::Any& characteristic) {
    return EventTarget::call("getCharacteristics", characteristic).as<jsbind::Promise>();
}

jsbind::Promise BluetoothRemoteGATTService::getIncludedService(const jsbind::Any& service) {
    return EventTarget::call("getIncludedService", service).as<jsbind::Promise>();
}

jsbind::Promise BluetoothRemoteGATTService::getIncludedServices(const jsbind::Any& service) {
    return EventTarget::call("getIncludedServices", service).as<jsbind::Promise>();
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

