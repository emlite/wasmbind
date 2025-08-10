#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class BluetoothRemoteGATTCharacteristic;

/// Interface BluetoothRemoteGATTDescriptor
/// [`BluetoothRemoteGATTDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTDescriptor)
class BluetoothRemoteGATTDescriptor : public emlite::Val {
    explicit BluetoothRemoteGATTDescriptor(Handle h) noexcept;
public:
    explicit BluetoothRemoteGATTDescriptor(const emlite::Val &val) noexcept;
    static BluetoothRemoteGATTDescriptor take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothRemoteGATTDescriptor clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `characteristic` attribute.
    /// [`BluetoothRemoteGATTDescriptor.characteristic`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTDescriptor/characteristic)
    [[nodiscard]] BluetoothRemoteGATTCharacteristic characteristic() const;
    /// Getter of the `uuid` attribute.
    /// [`BluetoothRemoteGATTDescriptor.uuid`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTDescriptor/uuid)
    [[nodiscard]] jsbind::Any uuid() const;
    /// Getter of the `value` attribute.
    /// [`BluetoothRemoteGATTDescriptor.value`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTDescriptor/value)
    [[nodiscard]] jsbind::DataView value() const;
    /// The readValue method.
    /// [`BluetoothRemoteGATTDescriptor.readValue`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTDescriptor/readValue)
    jsbind::Promise<jsbind::DataView> readValue();
    /// The writeValue method.
    /// [`BluetoothRemoteGATTDescriptor.writeValue`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothRemoteGATTDescriptor/writeValue)
    jsbind::Promise<jsbind::Undefined> writeValue(const jsbind::Any& value);
};

} // namespace webbind