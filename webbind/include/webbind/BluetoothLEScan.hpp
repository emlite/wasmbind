#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BluetoothLEScanFilter;


class BluetoothLEScan : public emlite::Val {
    explicit BluetoothLEScan(Handle h) noexcept;

public:
    explicit BluetoothLEScan(const emlite::Val &val) noexcept;
    static BluetoothLEScan take_ownership(Handle h) noexcept;

    BluetoothLEScan clone() const noexcept;
    jsbind::FrozenArray<BluetoothLEScanFilter> filters() const;
    bool keepRepeatedDevices() const;
    bool acceptAllAdvertisements() const;
    bool active() const;
    jsbind::Undefined stop();
};

