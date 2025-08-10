#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

/// Dictionary type RequestDeviceOptions
class RequestDeviceOptions : public emlite::Val {
  explicit RequestDeviceOptions(Handle h) noexcept;
public:
    static RequestDeviceOptions take_ownership(Handle h) noexcept;
    explicit RequestDeviceOptions(const emlite::Val &val) noexcept;
    RequestDeviceOptions() noexcept;
    [[nodiscard]] RequestDeviceOptions clone() const noexcept;
    /// Getter of the `filters` attribute.
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> filters() const;
    /// Setter of the `filters` attribute.
    void filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    /// Getter of the `exclusionFilters` attribute.
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> exclusionFilters() const;
    /// Setter of the `exclusionFilters` attribute.
    void exclusionFilters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    /// Getter of the `optionalServices` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> optionalServices() const;
    /// Setter of the `optionalServices` attribute.
    void optionalServices(const jsbind::TypedArray<jsbind::Any>& value);
    /// Getter of the `optionalManufacturerData` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned short> optionalManufacturerData() const;
    /// Setter of the `optionalManufacturerData` attribute.
    void optionalManufacturerData(jsbind::TypedArray<unsigned short> value);
    /// Getter of the `acceptAllDevices` attribute.
    [[nodiscard]] bool acceptAllDevices() const;
    /// Setter of the `acceptAllDevices` attribute.
    void acceptAllDevices(bool value);
};

} // namespace webbind