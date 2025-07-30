#include <webbind/BluetoothRemoteGATTServer.hpp>
#include <webbind/BluetoothDevice.hpp>
#include <webbind/BluetoothRemoteGATTService.hpp>


BluetoothRemoteGATTServer BluetoothRemoteGATTServer::take_ownership(Handle h) noexcept {
        return BluetoothRemoteGATTServer(h);
    }
BluetoothRemoteGATTServer BluetoothRemoteGATTServer::clone() const noexcept { return *this; }
BluetoothRemoteGATTServer::BluetoothRemoteGATTServer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
BluetoothRemoteGATTServer::BluetoothRemoteGATTServer(const emlite::Val &val) noexcept: emlite::Val(val) {}


BluetoothDevice BluetoothRemoteGATTServer::device() const {
    return emlite::Val::get("device").as<BluetoothDevice>();
}

bool BluetoothRemoteGATTServer::connected() const {
    return emlite::Val::get("connected").as<bool>();
}

jsbind::Promise<BluetoothRemoteGATTServer> BluetoothRemoteGATTServer::connect() {
    return emlite::Val::call("connect").as<jsbind::Promise<BluetoothRemoteGATTServer>>();
}

jsbind::Undefined BluetoothRemoteGATTServer::disconnect() {
    return emlite::Val::call("disconnect").as<jsbind::Undefined>();
}

jsbind::Promise<BluetoothRemoteGATTService> BluetoothRemoteGATTServer::getPrimaryService(const jsbind::Any& service) {
    return emlite::Val::call("getPrimaryService", service).as<jsbind::Promise<BluetoothRemoteGATTService>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> BluetoothRemoteGATTServer::getPrimaryServices() {
    return emlite::Val::call("getPrimaryServices").as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>>>();
}

jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> BluetoothRemoteGATTServer::getPrimaryServices(const jsbind::Any& service) {
    return emlite::Val::call("getPrimaryServices", service).as<jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>>>();
}

