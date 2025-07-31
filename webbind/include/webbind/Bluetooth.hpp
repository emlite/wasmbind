#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class BluetoothDevice;
class RequestDeviceOptions;
class BluetoothLEScan;
class BluetoothLEScanOptions;


class RequestDeviceOptions : public emlite::Val {
  explicit RequestDeviceOptions(Handle h) noexcept;
public:
    static RequestDeviceOptions take_ownership(Handle h) noexcept;
    explicit RequestDeviceOptions(const emlite::Val &val) noexcept;
    RequestDeviceOptions() noexcept;
    [[nodiscard]] RequestDeviceOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> optionalServices() const;
    void optionalServices(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::TypedArray<unsigned short> optionalManufacturerData() const;
    void optionalManufacturerData(jsbind::TypedArray<unsigned short> value);
    [[nodiscard]] bool acceptAllDevices() const;
    void acceptAllDevices(bool value);
};

class BluetoothLEScanOptions : public emlite::Val {
  explicit BluetoothLEScanOptions(Handle h) noexcept;
public:
    static BluetoothLEScanOptions take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanOptions(const emlite::Val &val) noexcept;
    BluetoothLEScanOptions() noexcept;
    [[nodiscard]] BluetoothLEScanOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] bool keepRepeatedDevices() const;
    void keepRepeatedDevices(bool value);
    [[nodiscard]] bool acceptAllAdvertisements() const;
    void acceptAllAdvertisements(bool value);
};

/// The Bluetooth class.
/// [`Bluetooth`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth)
class Bluetooth : public EventTarget {
    explicit Bluetooth(Handle h) noexcept;

public:
    explicit Bluetooth(const emlite::Val &val) noexcept;
    static Bluetooth take_ownership(Handle h) noexcept;

    [[nodiscard]] Bluetooth clone() const noexcept;
    /// The getAvailability method.
    /// [`Bluetooth.getAvailability`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/getAvailability)
    jsbind::Promise<bool> getAvailability();
    /// Getter of the `onavailabilitychanged` attribute.
    /// [`Bluetooth.onavailabilitychanged`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onavailabilitychanged)
    [[nodiscard]] jsbind::Any onavailabilitychanged() const;
    /// Setter of the `onavailabilitychanged` attribute.
    /// [`Bluetooth.onavailabilitychanged`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onavailabilitychanged)
    void onavailabilitychanged(const jsbind::Any& value);
    /// Getter of the `referringDevice` attribute.
    /// [`Bluetooth.referringDevice`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/referringDevice)
    [[nodiscard]] BluetoothDevice referringDevice() const;
    /// The getDevices method.
    /// [`Bluetooth.getDevices`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/getDevices)
    jsbind::Promise<jsbind::TypedArray<BluetoothDevice>> getDevices();
    /// The requestDevice method.
    /// [`Bluetooth.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/requestDevice)
    jsbind::Promise<BluetoothDevice> requestDevice();
    /// The requestDevice method.
    /// [`Bluetooth.requestDevice`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/requestDevice)
    jsbind::Promise<BluetoothDevice> requestDevice(const RequestDeviceOptions& options);
    /// The requestLEScan method.
    /// [`Bluetooth.requestLEScan`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/requestLEScan)
    jsbind::Promise<BluetoothLEScan> requestLEScan();
    /// The requestLEScan method.
    /// [`Bluetooth.requestLEScan`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/requestLEScan)
    jsbind::Promise<BluetoothLEScan> requestLEScan(const BluetoothLEScanOptions& options);
    /// Getter of the `onadvertisementreceived` attribute.
    /// [`Bluetooth.onadvertisementreceived`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onadvertisementreceived)
    [[nodiscard]] jsbind::Any onadvertisementreceived() const;
    /// Setter of the `onadvertisementreceived` attribute.
    /// [`Bluetooth.onadvertisementreceived`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onadvertisementreceived)
    void onadvertisementreceived(const jsbind::Any& value);
    /// Getter of the `ongattserverdisconnected` attribute.
    /// [`Bluetooth.ongattserverdisconnected`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/ongattserverdisconnected)
    [[nodiscard]] jsbind::Any ongattserverdisconnected() const;
    /// Setter of the `ongattserverdisconnected` attribute.
    /// [`Bluetooth.ongattserverdisconnected`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/ongattserverdisconnected)
    void ongattserverdisconnected(const jsbind::Any& value);
    /// Getter of the `oncharacteristicvaluechanged` attribute.
    /// [`Bluetooth.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/oncharacteristicvaluechanged)
    [[nodiscard]] jsbind::Any oncharacteristicvaluechanged() const;
    /// Setter of the `oncharacteristicvaluechanged` attribute.
    /// [`Bluetooth.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/oncharacteristicvaluechanged)
    void oncharacteristicvaluechanged(const jsbind::Any& value);
    /// Getter of the `onserviceadded` attribute.
    /// [`Bluetooth.onserviceadded`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onserviceadded)
    [[nodiscard]] jsbind::Any onserviceadded() const;
    /// Setter of the `onserviceadded` attribute.
    /// [`Bluetooth.onserviceadded`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onserviceadded)
    void onserviceadded(const jsbind::Any& value);
    /// Getter of the `onservicechanged` attribute.
    /// [`Bluetooth.onservicechanged`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onservicechanged)
    [[nodiscard]] jsbind::Any onservicechanged() const;
    /// Setter of the `onservicechanged` attribute.
    /// [`Bluetooth.onservicechanged`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onservicechanged)
    void onservicechanged(const jsbind::Any& value);
    /// Getter of the `onserviceremoved` attribute.
    /// [`Bluetooth.onserviceremoved`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onserviceremoved)
    [[nodiscard]] jsbind::Any onserviceremoved() const;
    /// Setter of the `onserviceremoved` attribute.
    /// [`Bluetooth.onserviceremoved`](https://developer.mozilla.org/en-US/docs/Web/API/Bluetooth/onserviceremoved)
    void onserviceremoved(const jsbind::Any& value);
};

