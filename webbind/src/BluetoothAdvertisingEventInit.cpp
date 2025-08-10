#include "webbind/BluetoothAdvertisingEventInit.hpp"
#include "webbind/BluetoothDevice.hpp"
#include "webbind/BluetoothManufacturerDataMap.hpp"
#include "webbind/BluetoothServiceDataMap.hpp"

using emlite::Val;
namespace webbind {

BluetoothAdvertisingEventInit::BluetoothAdvertisingEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
BluetoothAdvertisingEventInit BluetoothAdvertisingEventInit::take_ownership(Handle h) noexcept {
        return BluetoothAdvertisingEventInit(h);
    }
BluetoothAdvertisingEventInit::BluetoothAdvertisingEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
BluetoothAdvertisingEventInit::BluetoothAdvertisingEventInit() noexcept: EventInit(emlite::Val::object()) {}
BluetoothAdvertisingEventInit BluetoothAdvertisingEventInit::clone() const noexcept { return *this; }

BluetoothDevice BluetoothAdvertisingEventInit::device() const {
    return emlite::Val::get("device").as<BluetoothDevice>();
}

void BluetoothAdvertisingEventInit::device(const BluetoothDevice& value) {
    emlite::Val::set("device", value);
}

jsbind::TypedArray<jsbind::Any> BluetoothAdvertisingEventInit::uuids() const {
    return emlite::Val::get("uuids").as<jsbind::TypedArray<jsbind::Any>>();
}

void BluetoothAdvertisingEventInit::uuids(const jsbind::TypedArray<jsbind::Any>& value) {
    emlite::Val::set("uuids", value);
}

jsbind::String BluetoothAdvertisingEventInit::name() const {
    return emlite::Val::get("name").as<jsbind::String>();
}

void BluetoothAdvertisingEventInit::name(const jsbind::String& value) {
    emlite::Val::set("name", value);
}

unsigned short BluetoothAdvertisingEventInit::appearance() const {
    return emlite::Val::get("appearance").as<unsigned short>();
}

void BluetoothAdvertisingEventInit::appearance(unsigned short value) {
    emlite::Val::set("appearance", value);
}

char BluetoothAdvertisingEventInit::txPower() const {
    return emlite::Val::get("txPower").as<char>();
}

void BluetoothAdvertisingEventInit::txPower(char value) {
    emlite::Val::set("txPower", value);
}

char BluetoothAdvertisingEventInit::rssi() const {
    return emlite::Val::get("rssi").as<char>();
}

void BluetoothAdvertisingEventInit::rssi(char value) {
    emlite::Val::set("rssi", value);
}

BluetoothManufacturerDataMap BluetoothAdvertisingEventInit::manufacturerData() const {
    return emlite::Val::get("manufacturerData").as<BluetoothManufacturerDataMap>();
}

void BluetoothAdvertisingEventInit::manufacturerData(const BluetoothManufacturerDataMap& value) {
    emlite::Val::set("manufacturerData", value);
}

BluetoothServiceDataMap BluetoothAdvertisingEventInit::serviceData() const {
    return emlite::Val::get("serviceData").as<BluetoothServiceDataMap>();
}

void BluetoothAdvertisingEventInit::serviceData(const BluetoothServiceDataMap& value) {
    emlite::Val::set("serviceData", value);
}


} // namespace webbind