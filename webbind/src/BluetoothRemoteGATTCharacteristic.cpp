#include <webbind/BluetoothRemoteGATTCharacteristic.hpp>
#include <webbind/BluetoothRemoteGATTService.hpp>
#include <webbind/BluetoothCharacteristicProperties.hpp>
#include <webbind/BluetoothRemoteGATTDescriptor.hpp>


BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic::take_ownership(Handle h) noexcept {
        return BluetoothRemoteGATTCharacteristic(h);
    }
BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic::clone() const noexcept { return *this; }
BluetoothRemoteGATTCharacteristic::BluetoothRemoteGATTCharacteristic(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
BluetoothRemoteGATTCharacteristic::BluetoothRemoteGATTCharacteristic(const emlite::Val &val) noexcept: EventTarget(val) {}


BluetoothRemoteGATTService BluetoothRemoteGATTCharacteristic::service() const {
    return EventTarget::get("service").as<BluetoothRemoteGATTService>();
}

jsbind::Any BluetoothRemoteGATTCharacteristic::uuid() const {
    return EventTarget::get("uuid").as<jsbind::Any>();
}

BluetoothCharacteristicProperties BluetoothRemoteGATTCharacteristic::properties() const {
    return EventTarget::get("properties").as<BluetoothCharacteristicProperties>();
}

jsbind::DataView BluetoothRemoteGATTCharacteristic::value() const {
    return EventTarget::get("value").as<jsbind::DataView>();
}

jsbind::Promise<BluetoothRemoteGATTDescriptor> BluetoothRemoteGATTCharacteristic::getDescriptor(const jsbind::Any& descriptor) {
    return EventTarget::call("getDescriptor", descriptor).as<jsbind::Promise<BluetoothRemoteGATTDescriptor>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTDescriptor>> BluetoothRemoteGATTCharacteristic::getDescriptors() {
    return EventTarget::call("getDescriptors").as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTDescriptor>>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTDescriptor>> BluetoothRemoteGATTCharacteristic::getDescriptors(const jsbind::Any& descriptor) {
    return EventTarget::call("getDescriptors", descriptor).as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTDescriptor>>>();
}

jsbind::Promise<jsbind::DataView> BluetoothRemoteGATTCharacteristic::readValue() {
    return EventTarget::call("readValue").as<jsbind::Promise<jsbind::DataView>>();
}

jsbind::Promise<jsbind::Undefined> BluetoothRemoteGATTCharacteristic::writeValue(const jsbind::Any& value) {
    return EventTarget::call("writeValue", value).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> BluetoothRemoteGATTCharacteristic::writeValueWithResponse(const jsbind::Any& value) {
    return EventTarget::call("writeValueWithResponse", value).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> BluetoothRemoteGATTCharacteristic::writeValueWithoutResponse(const jsbind::Any& value) {
    return EventTarget::call("writeValueWithoutResponse", value).as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<BluetoothRemoteGATTCharacteristic> BluetoothRemoteGATTCharacteristic::startNotifications() {
    return EventTarget::call("startNotifications").as<jsbind::Promise<BluetoothRemoteGATTCharacteristic>>();
}

jsbind::Promise<BluetoothRemoteGATTCharacteristic> BluetoothRemoteGATTCharacteristic::stopNotifications() {
    return EventTarget::call("stopNotifications").as<jsbind::Promise<BluetoothRemoteGATTCharacteristic>>();
}

jsbind::Any BluetoothRemoteGATTCharacteristic::oncharacteristicvaluechanged() const {
    return EventTarget::get("oncharacteristicvaluechanged").as<jsbind::Any>();
}

void BluetoothRemoteGATTCharacteristic::oncharacteristicvaluechanged(const jsbind::Any& value) {
    EventTarget::set("oncharacteristicvaluechanged", value);
}

