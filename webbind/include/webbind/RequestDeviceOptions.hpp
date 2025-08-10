#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "BluetoothLEScanFilterInit.hpp"

namespace webbind {

/// Dictionary type RequestDeviceOptions
/// [`RequestDeviceOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RequestDeviceOptions)
class RequestDeviceOptions : public emlite::Val {
  explicit RequestDeviceOptions(Handle h) noexcept;
public:
    static RequestDeviceOptions take_ownership(Handle h) noexcept;
    explicit RequestDeviceOptions(const emlite::Val &val) noexcept;
    RequestDeviceOptions() noexcept;
    [[nodiscard]] RequestDeviceOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> filters() const;
    void filters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    [[nodiscard]] jsbind::TypedArray<BluetoothLEScanFilterInit> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<BluetoothLEScanFilterInit>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> optionalServices() const;
    void optionalServices(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<unsigned short> optionalManufacturerData() const;
    void optionalManufacturerData(jsbind::TypedArray<unsigned short> value);
    [[nodiscard]] bool acceptAllDevices() const;
    void acceptAllDevices(bool value);
};

} // namespace webbind