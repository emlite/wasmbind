#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BluetoothManufacturerDataMap : public emlite::Val {
    explicit BluetoothManufacturerDataMap(Handle h) noexcept;

public:
    explicit BluetoothManufacturerDataMap(const emlite::Val &val) noexcept;
    static BluetoothManufacturerDataMap take_ownership(Handle h) noexcept;

    BluetoothManufacturerDataMap clone() const noexcept;
};

