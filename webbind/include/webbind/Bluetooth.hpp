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
    RequestDeviceOptions clone() const noexcept;
    jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> exclusionFilters() const;
    void exclusionFilters(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<jsbind::Any> optionalServices() const;
    void optionalServices(const jsbind::TypedArray<jsbind::Any>& value);
    jsbind::TypedArray<unsigned short> optionalManufacturerData() const;
    void optionalManufacturerData(jsbind::TypedArray<unsigned short> value);
    bool acceptAllDevices() const;
    void acceptAllDevices(bool value);
};

class BluetoothLEScanOptions : public emlite::Val {
  explicit BluetoothLEScanOptions(Handle h) noexcept;
public:
    static BluetoothLEScanOptions take_ownership(Handle h) noexcept;
    explicit BluetoothLEScanOptions(const emlite::Val &val) noexcept;
    BluetoothLEScanOptions() noexcept;
    BluetoothLEScanOptions clone() const noexcept;
    jsbind::TypedArray<jsbind::Any> filters() const;
    void filters(const jsbind::TypedArray<jsbind::Any>& value);
    bool keepRepeatedDevices() const;
    void keepRepeatedDevices(bool value);
    bool acceptAllAdvertisements() const;
    void acceptAllAdvertisements(bool value);
};

class Bluetooth : public EventTarget {
    explicit Bluetooth(Handle h) noexcept;

public:
    explicit Bluetooth(const emlite::Val &val) noexcept;
    static Bluetooth take_ownership(Handle h) noexcept;

    Bluetooth clone() const noexcept;
    jsbind::Promise<bool> getAvailability();
    jsbind::Any onavailabilitychanged() const;
    void onavailabilitychanged(const jsbind::Any& value);
    BluetoothDevice referringDevice() const;
    jsbind::Promise<jsbind::TypedArray<BluetoothDevice>> getDevices();
    jsbind::Promise<BluetoothDevice> requestDevice();
    jsbind::Promise<BluetoothDevice> requestDevice(const RequestDeviceOptions& options);
    jsbind::Promise<BluetoothLEScan> requestLEScan();
    jsbind::Promise<BluetoothLEScan> requestLEScan(const BluetoothLEScanOptions& options);
    jsbind::Any onadvertisementreceived() const;
    void onadvertisementreceived(const jsbind::Any& value);
    jsbind::Any ongattserverdisconnected() const;
    void ongattserverdisconnected(const jsbind::Any& value);
    jsbind::Any oncharacteristicvaluechanged() const;
    void oncharacteristicvaluechanged(const jsbind::Any& value);
    jsbind::Any onserviceadded() const;
    void onserviceadded(const jsbind::Any& value);
    jsbind::Any onservicechanged() const;
    void onservicechanged(const jsbind::Any& value);
    jsbind::Any onserviceremoved() const;
    void onserviceremoved(const jsbind::Any& value);
};

