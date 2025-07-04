#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BluetoothRemoteGATTCharacteristic;


class BluetoothRemoteGATTDescriptor : public emlite::Val {
    explicit BluetoothRemoteGATTDescriptor(Handle h) noexcept;

public:
    explicit BluetoothRemoteGATTDescriptor(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTDescriptor take_ownership(Handle h) noexcept;

    BluetoothRemoteGATTDescriptor clone() const noexcept;
    BluetoothRemoteGATTCharacteristic characteristic() const;
    jsbind::Any uuid() const;
    jsbind::DataView value() const;
    jsbind::Promise readValue();
    jsbind::Promise writeValue(const jsbind::Any& value);
};

