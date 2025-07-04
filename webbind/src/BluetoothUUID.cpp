#include <webbind/BluetoothUUID.hpp>


BluetoothUUID BluetoothUUID::take_ownership(Handle h) noexcept {
        return BluetoothUUID(h);
    }
BluetoothUUID BluetoothUUID::clone() const noexcept { return *this; }
BluetoothUUID::BluetoothUUID(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothUUID::BluetoothUUID(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any BluetoothUUID::getService(const jsbind::Any& name) {
    return emlite::Val::global("bluetoothuuid").call("getService", name).as<jsbind::Any>();
}

jsbind::Any BluetoothUUID::getCharacteristic(const jsbind::Any& name) {
    return emlite::Val::global("bluetoothuuid").call("getCharacteristic", name).as<jsbind::Any>();
}

jsbind::Any BluetoothUUID::getDescriptor(const jsbind::Any& name) {
    return emlite::Val::global("bluetoothuuid").call("getDescriptor", name).as<jsbind::Any>();
}

jsbind::Any BluetoothUUID::canonicalUUID(unsigned long alias) {
    return emlite::Val::global("bluetoothuuid").call("canonicalUUID", alias).as<jsbind::Any>();
}

