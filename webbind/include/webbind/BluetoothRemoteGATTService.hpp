#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class BluetoothDevice;
class BluetoothRemoteGATTCharacteristic;
class BluetoothRemoteGATTService;


class BluetoothRemoteGATTService : public EventTarget {
    explicit BluetoothRemoteGATTService(Handle h) noexcept;

public:
    explicit BluetoothRemoteGATTService(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTService take_ownership(Handle h) noexcept;

    BluetoothRemoteGATTService clone() const noexcept;
    BluetoothDevice device() const;
    jsbind::Any uuid() const;
    bool isPrimary() const;
    jsbind::Promise getCharacteristic(const jsbind::Any& characteristic);
    jsbind::Promise getCharacteristics(const jsbind::Any& characteristic);
    jsbind::Promise getIncludedService(const jsbind::Any& service);
    jsbind::Promise getIncludedServices(const jsbind::Any& service);
    jsbind::Any oncharacteristicvaluechanged() const;
    void oncharacteristicvaluechanged(const jsbind::Any& value);
    jsbind::Any onserviceadded() const;
    void onserviceadded(const jsbind::Any& value);
    jsbind::Any onservicechanged() const;
    void onservicechanged(const jsbind::Any& value);
    jsbind::Any onserviceremoved() const;
    void onserviceremoved(const jsbind::Any& value);
};

