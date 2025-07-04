#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BluetoothServiceDataMap : public emlite::Val {
    explicit BluetoothServiceDataMap(Handle h) noexcept;

public:
    explicit BluetoothServiceDataMap(const emlite::Val &val) noexcept;
    static BluetoothServiceDataMap take_ownership(Handle h) noexcept;

    BluetoothServiceDataMap clone() const noexcept;
};

