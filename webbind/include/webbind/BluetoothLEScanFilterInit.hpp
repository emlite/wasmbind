#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class BluetoothManufacturerDataFilterInit;
class BluetoothServiceDataFilterInit;

/// Dictionary type BluetoothLEScanFilterInit
class BluetoothLEScanFilterInit : public emlite::Val {
  explicit BluetoothLEScanFilterInit(Handle h) noexcept;
public:
    static BluetoothLEScanFilterInit take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanFilterInit(const emlite::Val &val) noexcept;
    BluetoothLEScanFilterInit() noexcept;
    [[nodiscard]] BluetoothLEScanFilterInit clone() const noexcept;
    /// Getter of the `services` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> services() const;
    /// Setter of the `services` attribute.
    void services(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `name` attribute.
    [[nodiscard]] jsbind::String name() const;
    /// Setter of the `name` attribute.
    void name(const jsbind::String& value);
    /// Getter of the `namePrefix` attribute.
    [[nodiscard]] jsbind::String namePrefix() const;
    /// Setter of the `namePrefix` attribute.
    void namePrefix(const jsbind::String& value);
    /// Getter of the `manufacturerData` attribute.
    [[nodiscard]] jsbind::TypedArray<BluetoothManufacturerDataFilterInit> manufacturerData() const;
    /// Setter of the `manufacturerData` attribute.
    void manufacturerData(const jsbind::TypedArray<BluetoothManufacturerDataFilterInit>& value);
    /// Getter of the `serviceData` attribute.
    [[nodiscard]] jsbind::TypedArray<BluetoothServiceDataFilterInit> serviceData() const;
    /// Setter of the `serviceData` attribute.
    void serviceData(const jsbind::TypedArray<BluetoothServiceDataFilterInit>& value);
};

} // namespace webbind