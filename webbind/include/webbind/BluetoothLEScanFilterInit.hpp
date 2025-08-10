#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothManufacturerDataFilterInit.hpp"
#include "BluetoothServiceDataFilterInit.hpp"

namespace webbind {

/// Dictionary type BluetoothLEScanFilterInit
/// [`BluetoothLEScanFilterInit`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothLEScanFilterInit)
class BluetoothLEScanFilterInit : public emlite::Val {
  explicit BluetoothLEScanFilterInit(Handle h) noexcept;
public:
    static BluetoothLEScanFilterInit take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanFilterInit(const emlite::Val &val) noexcept;
    BluetoothLEScanFilterInit() noexcept;
    [[nodiscard]] BluetoothLEScanFilterInit clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> services() const;
    void services(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String name() const;
    void name(const jsbind::String& value);
    [[nodiscard]] jsbind::String namePrefix() const;
    void namePrefix(const jsbind::String& value);
    [[nodiscard]] jsbind::TypedArray<BluetoothManufacturerDataFilterInit> manufacturerData() const;
    void manufacturerData(const jsbind::TypedArray<BluetoothManufacturerDataFilterInit>& value);
    [[nodiscard]] jsbind::TypedArray<BluetoothServiceDataFilterInit> serviceData() const;
    void serviceData(const jsbind::TypedArray<BluetoothServiceDataFilterInit>& value);
};

} // namespace webbind