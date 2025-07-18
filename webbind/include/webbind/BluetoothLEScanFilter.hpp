#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class BluetoothManufacturerDataFilter;
class BluetoothServiceDataFilter;


class BluetoothLEScanFilter : public emlite::Val {
    explicit BluetoothLEScanFilter(Handle h) noexcept;

public:
    explicit BluetoothLEScanFilter(const emlite::Val &val) noexcept;
    static BluetoothLEScanFilter take_ownership(Handle h) noexcept;

    BluetoothLEScanFilter clone() const noexcept;
    BluetoothLEScanFilter();
    BluetoothLEScanFilter(const jsbind::Any& init);
    jsbind::DOMString name() const;
    jsbind::DOMString namePrefix() const;
    jsbind::FrozenArray<jsbind::Any> services() const;
    BluetoothManufacturerDataFilter manufacturerData() const;
    BluetoothServiceDataFilter serviceData() const;
};

