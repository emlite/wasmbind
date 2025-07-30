#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BluetoothDevice;
class BluetoothRemoteGATTServer;
class BluetoothRemoteGATTService;


class BluetoothRemoteGATTServer : public emlite::Val {
    explicit BluetoothRemoteGATTServer(Handle h) noexcept;

public:
    explicit BluetoothRemoteGATTServer(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTServer take_ownership(Handle h) noexcept;

    BluetoothRemoteGATTServer clone() const noexcept;
    BluetoothDevice device() const;
    bool connected() const;
    jsbind::Promise<BluetoothRemoteGATTServer> connect();
    jsbind::Undefined disconnect();
    jsbind::Promise<BluetoothRemoteGATTService> getPrimaryService(const jsbind::Any& service);
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> getPrimaryServices();
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> getPrimaryServices(const jsbind::Any& service);
};

