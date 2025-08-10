#include <webbind/Bluetooth.hpp>
#include <webbind/BluetoothDevice.hpp>
#include <webbind/RequestDeviceOptions.hpp>
#include <webbind/BluetoothLEScan.hpp>
#include <webbind/BluetoothLEScanOptions.hpp>

namespace webbind {

Bluetooth Bluetooth::take_ownership(Handle h) noexcept {
    return Bluetooth(h);
}

Bluetooth Bluetooth::clone() const noexcept { return *this; }

emlite::Val Bluetooth::instance() noexcept { return emlite::Val::global("Bluetooth"); }

Bluetooth::Bluetooth(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}

Bluetooth::Bluetooth(const emlite::Val &val) noexcept: EventTarget(val) {}

jsbind::Promise<bool> Bluetooth::getAvailability() {
    return EventTarget::call("getAvailability").as<jsbind::Promise<bool>>();
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

jsbind::Promise<jsbind::TypedArray<BluetoothDevice>> Bluetooth::getDevices() {
    return EventTarget::call("getDevices").as<jsbind::Promise<jsbind::TypedArray<BluetoothDevice>>>();
}

jsbind::Promise<BluetoothDevice> Bluetooth::requestDevice() {
    return EventTarget::call("requestDevice").as<jsbind::Promise<BluetoothDevice>>();
}

jsbind::Promise<BluetoothDevice> Bluetooth::requestDevice(const RequestDeviceOptions& options) {
    return EventTarget::call("requestDevice", options).as<jsbind::Promise<BluetoothDevice>>();
}

jsbind::Promise<BluetoothLEScan> Bluetooth::requestLEScan() {
    return EventTarget::call("requestLEScan").as<jsbind::Promise<BluetoothLEScan>>();
}

jsbind::Promise<BluetoothLEScan> Bluetooth::requestLEScan(const BluetoothLEScanOptions& options) {
    return EventTarget::call("requestLEScan", options).as<jsbind::Promise<BluetoothLEScan>>();
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


} // namespace webbind