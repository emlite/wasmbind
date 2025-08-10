#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class BluetoothDevice;
class BluetoothRemoteGATTCharacteristic;
class BluetoothRemoteGATTService;

/// Interface BluetoothRemoteGATTService
/// [`BluetoothRemoteGATTService`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService)
class BluetoothRemoteGATTService : public EventTarget {
    explicit BluetoothRemoteGATTService(Handle h) noexcept;
public:
    explicit BluetoothRemoteGATTService(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTService take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothRemoteGATTService clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`BluetoothRemoteGATTService.device`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/device)
    /// [`BluetoothRemoteGATTService.device`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/device)
    [[nodiscard]] BluetoothDevice device() const;
    /// [`BluetoothRemoteGATTService.uuid`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/uuid)
    /// [`BluetoothRemoteGATTService.uuid`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/uuid)
    [[nodiscard]] jsbind::Any uuid() const;
    /// [`BluetoothRemoteGATTService.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/isPrimary)
    /// [`BluetoothRemoteGATTService.isPrimary`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/isPrimary)
    [[nodiscard]] bool isPrimary() const;
    /// The getCharacteristic method.
    /// [`BluetoothRemoteGATTService.getCharacteristic`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/getCharacteristic)
    jsbind::Promise<BluetoothRemoteGATTCharacteristic> getCharacteristic(const jsbind::Any& characteristic);
    /// The getCharacteristics method.
    /// [`BluetoothRemoteGATTService.getCharacteristics`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/getCharacteristics)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTCharacteristic>> getCharacteristics();
    /// The getCharacteristics method.
    /// [`BluetoothRemoteGATTService.getCharacteristics`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/getCharacteristics)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTCharacteristic>> getCharacteristics(const jsbind::Any& characteristic);
    /// The getIncludedService method.
    /// [`BluetoothRemoteGATTService.getIncludedService`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/getIncludedService)
    jsbind::Promise<BluetoothRemoteGATTService> getIncludedService(const jsbind::Any& service);
    /// The getIncludedServices method.
    /// [`BluetoothRemoteGATTService.getIncludedServices`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/getIncludedServices)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> getIncludedServices();
    /// The getIncludedServices method.
    /// [`BluetoothRemoteGATTService.getIncludedServices`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/getIncludedServices)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTService>> getIncludedServices(const jsbind::Any& service);
    /// [`BluetoothRemoteGATTService.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/oncharacteristicvaluechanged)
    /// [`BluetoothRemoteGATTService.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/oncharacteristicvaluechanged)
    [[nodiscard]] jsbind::Any oncharacteristicvaluechanged() const;
    /// Setter of the `oncharacteristicvaluechanged` attribute.
    /// [`BluetoothRemoteGATTService.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/oncharacteristicvaluechanged)
    void oncharacteristicvaluechanged(const jsbind::Any& value);
    /// [`BluetoothRemoteGATTService.onserviceadded`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onserviceadded)
    /// [`BluetoothRemoteGATTService.onserviceadded`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onserviceadded)
    [[nodiscard]] jsbind::Any onserviceadded() const;
    /// Setter of the `onserviceadded` attribute.
    /// [`BluetoothRemoteGATTService.onserviceadded`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onserviceadded)
    void onserviceadded(const jsbind::Any& value);
    /// [`BluetoothRemoteGATTService.onservicechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onservicechanged)
    /// [`BluetoothRemoteGATTService.onservicechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onservicechanged)
    [[nodiscard]] jsbind::Any onservicechanged() const;
    /// Setter of the `onservicechanged` attribute.
    /// [`BluetoothRemoteGATTService.onservicechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onservicechanged)
    void onservicechanged(const jsbind::Any& value);
    /// [`BluetoothRemoteGATTService.onserviceremoved`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onserviceremoved)
    /// [`BluetoothRemoteGATTService.onserviceremoved`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onserviceremoved)
    [[nodiscard]] jsbind::Any onserviceremoved() const;
    /// Setter of the `onserviceremoved` attribute.
    /// [`BluetoothRemoteGATTService.onserviceremoved`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTService/onserviceremoved)
    void onserviceremoved(const jsbind::Any& value);
};

} // namespace webbind