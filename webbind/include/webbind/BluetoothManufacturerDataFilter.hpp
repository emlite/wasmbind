#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BluetoothManufacturerDataFilter : public emlite::Val {
    explicit BluetoothManufacturerDataFilter(Handle h) noexcept;

public:
    explicit BluetoothManufacturerDataFilter(const emlite::Val &val) noexcept;
    static BluetoothManufacturerDataFilter take_ownership(Handle h) noexcept;

    BluetoothManufacturerDataFilter clone() const noexcept;
    BluetoothManufacturerDataFilter(const jsbind::Object& init);
};

