#include <webbind/BluetoothRemoteGATTDescriptor.hpp>
#include <webbind/BluetoothRemoteGATTCharacteristic.hpp>


BluetoothRemoteGATTDescriptor BluetoothRemoteGATTDescriptor::take_ownership(Handle h) noexcept {
        return BluetoothRemoteGATTDescriptor(h);
    }
BluetoothRemoteGATTDescriptor BluetoothRemoteGATTDescriptor::clone() const noexcept { return *this; }
emlite::Val BluetoothRemoteGATTDescriptor::instance() noexcept { return emlite::Val::global("BluetoothRemoteGATTDescriptor"); }
BluetoothRemoteGATTDescriptor::BluetoothRemoteGATTDescriptor(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothRemoteGATTDescriptor::BluetoothRemoteGATTDescriptor(const emlite::Val &val) noexcept: emlite::Val(val) {}


BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTDescriptor::characteristic() const {
    return emlite::Val::get("characteristic").as<BluetoothRemoteGATTCharacteristic>();
}

jsbind::Any BluetoothRemoteGATTDescriptor::uuid() const {
    return emlite::Val::get("uuid").as<jsbind::Any>();
}

jsbind::DataView BluetoothRemoteGATTDescriptor::value() const {
    return emlite::Val::get("value").as<jsbind::DataView>();
}

jsbind::Promise<jsbind::DataView> BluetoothRemoteGATTDescriptor::readValue() {
    return emlite::Val::call("readValue").as<jsbind::Promise<jsbind::DataView>>();
}

jsbind::Promise<jsbind::Undefined> BluetoothRemoteGATTDescriptor::writeValue(const jsbind::Any& value) {
    return emlite::Val::call("writeValue", value).as<jsbind::Promise<jsbind::Undefined>>();
}

