#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class BluetoothRemoteGATTService;
class BluetoothCharacteristicProperties;
class BluetoothRemoteGATTDescriptor;
class BluetoothRemoteGATTCharacteristic;


/// The BluetoothRemoteGATTCharacteristic class.
/// [`BluetoothRemoteGATTCharacteristic`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic)
class BluetoothRemoteGATTCharacteristic : public EventTarget {
    explicit BluetoothRemoteGATTCharacteristic(Handle h) noexcept;

public:
    explicit BluetoothRemoteGATTCharacteristic(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTCharacteristic take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothRemoteGATTCharacteristic clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `service` attribute.
    /// [`BluetoothRemoteGATTCharacteristic.service`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/service)
    [[nodiscard]] BluetoothRemoteGATTService service() const;
    /// Getter of the `uuid` attribute.
    /// [`BluetoothRemoteGATTCharacteristic.uuid`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/uuid)
    [[nodiscard]] jsbind::Any uuid() const;
    /// Getter of the `properties` attribute.
    /// [`BluetoothRemoteGATTCharacteristic.properties`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/properties)
    [[nodiscard]] BluetoothCharacteristicProperties properties() const;
    /// Getter of the `value` attribute.
    /// [`BluetoothRemoteGATTCharacteristic.value`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/value)
    [[nodiscard]] jsbind::DataView value() const;
    /// The getDescriptor method.
    /// [`BluetoothRemoteGATTCharacteristic.getDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/getDescriptor)
    jsbind::Promise<BluetoothRemoteGATTDescriptor> getDescriptor(const jsbind::Any& descriptor);
    /// The getDescriptors method.
    /// [`BluetoothRemoteGATTCharacteristic.getDescriptors`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/getDescriptors)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTDescriptor>> getDescriptors();
    /// The getDescriptors method.
    /// [`BluetoothRemoteGATTCharacteristic.getDescriptors`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/getDescriptors)
    jsbind::Promise<jsbind::TypedArray<BluetoothRemoteGATTDescriptor>> getDescriptors(const jsbind::Any& descriptor);
    /// The readValue method.
    /// [`BluetoothRemoteGATTCharacteristic.readValue`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/readValue)
    jsbind::Promise<jsbind::DataView> readValue();
    /// The writeValue method.
    /// [`BluetoothRemoteGATTCharacteristic.writeValue`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/writeValue)
    jsbind::Promise<jsbind::Undefined> writeValue(const jsbind::Any& value);
    /// The writeValueWithResponse method.
    /// [`BluetoothRemoteGATTCharacteristic.writeValueWithResponse`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/writeValueWithResponse)
    jsbind::Promise<jsbind::Undefined> writeValueWithResponse(const jsbind::Any& value);
    /// The writeValueWithoutResponse method.
    /// [`BluetoothRemoteGATTCharacteristic.writeValueWithoutResponse`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/writeValueWithoutResponse)
    jsbind::Promise<jsbind::Undefined> writeValueWithoutResponse(const jsbind::Any& value);
    /// The startNotifications method.
    /// [`BluetoothRemoteGATTCharacteristic.startNotifications`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/startNotifications)
    jsbind::Promise<BluetoothRemoteGATTCharacteristic> startNotifications();
    /// The stopNotifications method.
    /// [`BluetoothRemoteGATTCharacteristic.stopNotifications`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/stopNotifications)
    jsbind::Promise<BluetoothRemoteGATTCharacteristic> stopNotifications();
    /// Getter of the `oncharacteristicvaluechanged` attribute.
    /// [`BluetoothRemoteGATTCharacteristic.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/oncharacteristicvaluechanged)
    [[nodiscard]] jsbind::Any oncharacteristicvaluechanged() const;
    /// Setter of the `oncharacteristicvaluechanged` attribute.
    /// [`BluetoothRemoteGATTCharacteristic.oncharacteristicvaluechanged`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTCharacteristic/oncharacteristicvaluechanged)
    void oncharacteristicvaluechanged(const jsbind::Any& value);
};

