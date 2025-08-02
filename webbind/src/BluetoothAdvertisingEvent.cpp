#include <webbind/BluetoothAdvertisingEvent.hpp>
#include <webbind/BluetoothDevice.hpp>
#include <webbind/BluetoothManufacturerDataMap.hpp>
#include <webbind/BluetoothServiceDataMap.hpp>


BluetoothAdvertisingEvent BluetoothAdvertisingEvent::take_ownership(Handle h) noexcept {
        return BluetoothAdvertisingEvent(h);
    }
BluetoothAdvertisingEvent BluetoothAdvertisingEvent::clone() const noexcept { return *this; }
emlite::Val BluetoothAdvertisingEvent::instance() noexcept { return emlite::Val::global("BluetoothAdvertisingEvent"); }
BluetoothAdvertisingEvent::BluetoothAdvertisingEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
BluetoothAdvertisingEvent::BluetoothAdvertisingEvent(const emlite::Val &val) noexcept: Event(val) {}


BluetoothAdvertisingEvent::BluetoothAdvertisingEvent(const jsbind::String& type, const jsbind::Any& init) : Event(emlite::Val::global("BluetoothAdvertisingEvent").new_(type, init)) {}

BluetoothDevice BluetoothAdvertisingEvent::device() const {
    return Event::get("device").as<BluetoothDevice>();
}

jsbind::TypedArray<jsbind::Any> BluetoothAdvertisingEvent::uuids() const {
    return Event::get("uuids").as<jsbind::TypedArray<jsbind::Any>>();
}

jsbind::String BluetoothAdvertisingEvent::name() const {
    return Event::get("name").as<jsbind::String>();
}

unsigned short BluetoothAdvertisingEvent::appearance() const {
    return Event::get("appearance").as<unsigned short>();
}

char BluetoothAdvertisingEvent::txPower() const {
    return Event::get("txPower").as<char>();
}

char BluetoothAdvertisingEvent::rssi() const {
    return Event::get("rssi").as<char>();
}

BluetoothManufacturerDataMap BluetoothAdvertisingEvent::manufacturerData() const {
    return Event::get("manufacturerData").as<BluetoothManufacturerDataMap>();
}

BluetoothServiceDataMap BluetoothAdvertisingEvent::serviceData() const {
    return Event::get("serviceData").as<BluetoothServiceDataMap>();
}

