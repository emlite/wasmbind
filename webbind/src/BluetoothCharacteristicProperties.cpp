#include <webbind/BluetoothCharacteristicProperties.hpp>


BluetoothCharacteristicProperties BluetoothCharacteristicProperties::take_ownership(Handle h) noexcept {
        return BluetoothCharacteristicProperties(h);
    }
BluetoothCharacteristicProperties BluetoothCharacteristicProperties::clone() const noexcept { return *this; }
emlite::Val BluetoothCharacteristicProperties::instance() noexcept { return emlite::Val::global("BluetoothCharacteristicProperties"); }
BluetoothCharacteristicProperties::BluetoothCharacteristicProperties(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothCharacteristicProperties::BluetoothCharacteristicProperties(const emlite::Val &val) noexcept: emlite::Val(val) {}


bool BluetoothCharacteristicProperties::broadcast() const {
    return emlite::Val::get("broadcast").as<bool>();
}

bool BluetoothCharacteristicProperties::read() const {
    return emlite::Val::get("read").as<bool>();
}

bool BluetoothCharacteristicProperties::writeWithoutResponse() const {
    return emlite::Val::get("writeWithoutResponse").as<bool>();
}

bool BluetoothCharacteristicProperties::write() const {
    return emlite::Val::get("write").as<bool>();
}

bool BluetoothCharacteristicProperties::notify() const {
    return emlite::Val::get("notify").as<bool>();
}

bool BluetoothCharacteristicProperties::indicate() const {
    return emlite::Val::get("indicate").as<bool>();
}

bool BluetoothCharacteristicProperties::authenticatedSignedWrites() const {
    return emlite::Val::get("authenticatedSignedWrites").as<bool>();
}

bool BluetoothCharacteristicProperties::reliableWrite() const {
    return emlite::Val::get("reliableWrite").as<bool>();
}

bool BluetoothCharacteristicProperties::writableAuxiliaries() const {
    return emlite::Val::get("writableAuxiliaries").as<bool>();
}

