#include <webbind/BluetoothDevice.hpp>
#include <webbind/BluetoothRemoteGATTServer.hpp>
#include <webbind/AbortSignal.hpp>


WatchAdvertisementsOptions::WatchAdvertisementsOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
WatchAdvertisementsOptions WatchAdvertisementsOptions::take_ownership(Handle h) noexcept {
        return WatchAdvertisementsOptions(h);
    }
WatchAdvertisementsOptions::WatchAdvertisementsOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
WatchAdvertisementsOptions::WatchAdvertisementsOptions() noexcept: emlite::Val(emlite::Val::object()) {}
WatchAdvertisementsOptions WatchAdvertisementsOptions::clone() const noexcept { return *this; }

AbortSignal WatchAdvertisementsOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void WatchAdvertisementsOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

BluetoothDevice BluetoothDevice::take_ownership(Handle h) noexcept {
        return BluetoothDevice(h);
    }
BluetoothDevice BluetoothDevice::clone() const noexcept { return *this; }
emlite::Val BluetoothDevice::instance() noexcept { return emlite::Val::global("BluetoothDevice"); }
BluetoothDevice::BluetoothDevice(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
BluetoothDevice::BluetoothDevice(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::String BluetoothDevice::id() const {
    return EventTarget::get("id").as<jsbind::String>();
}

jsbind::String BluetoothDevice::name() const {
    return EventTarget::get("name").as<jsbind::String>();
}

BluetoothRemoteGATTServer BluetoothDevice::gatt() const {
    return EventTarget::get("gatt").as<BluetoothRemoteGATTServer>();
}

jsbind::Promise<jsbind::Undefined> BluetoothDevice::forget() {
    return EventTarget::call("forget").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> BluetoothDevice::watchAdvertisements() {
    return EventTarget::call("watchAdvertisements").as<jsbind::Promise<jsbind::Undefined>>();
}

jsbind::Promise<jsbind::Undefined> BluetoothDevice::watchAdvertisements(const WatchAdvertisementsOptions& options) {
    return EventTarget::call("watchAdvertisements", options).as<jsbind::Promise<jsbind::Undefined>>();
}

bool BluetoothDevice::watchingAdvertisements() const {
    return EventTarget::get("watchingAdvertisements").as<bool>();
}

jsbind::Any BluetoothDevice::onadvertisementreceived() const {
    return EventTarget::get("onadvertisementreceived").as<jsbind::Any>();
}

void BluetoothDevice::onadvertisementreceived(const jsbind::Any& value) {
    EventTarget::set("onadvertisementreceived", value);
}

jsbind::Any BluetoothDevice::ongattserverdisconnected() const {
    return EventTarget::get("ongattserverdisconnected").as<jsbind::Any>();
}

void BluetoothDevice::ongattserverdisconnected(const jsbind::Any& value) {
    EventTarget::set("ongattserverdisconnected", value);
}

jsbind::Any BluetoothDevice::oncharacteristicvaluechanged() const {
    return EventTarget::get("oncharacteristicvaluechanged").as<jsbind::Any>();
}

void BluetoothDevice::oncharacteristicvaluechanged(const jsbind::Any& value) {
    EventTarget::set("oncharacteristicvaluechanged", value);
}

jsbind::Any BluetoothDevice::onserviceadded() const {
    return EventTarget::get("onserviceadded").as<jsbind::Any>();
}

void BluetoothDevice::onserviceadded(const jsbind::Any& value) {
    EventTarget::set("onserviceadded", value);
}

jsbind::Any BluetoothDevice::onservicechanged() const {
    return EventTarget::get("onservicechanged").as<jsbind::Any>();
}

void BluetoothDevice::onservicechanged(const jsbind::Any& value) {
    EventTarget::set("onservicechanged", value);
}

jsbind::Any BluetoothDevice::onserviceremoved() const {
    return EventTarget::get("onserviceremoved").as<jsbind::Any>();
}

void BluetoothDevice::onserviceremoved(const jsbind::Any& value) {
    EventTarget::set("onserviceremoved", value);
}

