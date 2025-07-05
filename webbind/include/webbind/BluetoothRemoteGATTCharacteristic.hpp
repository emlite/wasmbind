#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class BluetoothRemoteGATTService;
class BluetoothCharacteristicProperties;
class BluetoothRemoteGATTDescriptor;
class BluetoothRemoteGATTCharacteristic;


class BluetoothRemoteGATTCharacteristic : public EventTarget {
    explicit BluetoothRemoteGATTCharacteristic(Handle h) noexcept;

public:
    explicit BluetoothRemoteGATTCharacteristic(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTCharacteristic take_ownership(Handle h) noexcept;

    BluetoothRemoteGATTCharacteristic clone() const noexcept;
    BluetoothRemoteGATTService service() const;
    jsbind::Any uuid() const;
    BluetoothCharacteristicProperties properties() const;
    jsbind::DataView value() const;
    jsbind::Promise getDescriptor(const jsbind::Any& descriptor);
    jsbind::Promise getDescriptors();
    jsbind::Promise getDescriptors(const jsbind::Any& descriptor);
    jsbind::Promise readValue();
    jsbind::Promise writeValue(const jsbind::Any& value);
    jsbind::Promise writeValueWithResponse(const jsbind::Any& value);
    jsbind::Promise writeValueWithoutResponse(const jsbind::Any& value);
    jsbind::Promise startNotifications();
    jsbind::Promise stopNotifications();
    jsbind::Any oncharacteristicvaluechanged() const;
    void oncharacteristicvaluechanged(const jsbind::Any& value);
};

