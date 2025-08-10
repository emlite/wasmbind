#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface BluetoothCharacteristicProperties
/// [`BluetoothCharacteristicProperties`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties)
class BluetoothCharacteristicProperties : public emlite::Val {
    explicit BluetoothCharacteristicProperties(Handle h) noexcept;
public:
    explicit BluetoothCharacteristicProperties(const emlite::Val &val) noexcept;
    static BluetoothCharacteristicProperties take_ownership(Handle h) noexcept;
    [[nodiscard]] BluetoothCharacteristicProperties clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`BluetoothCharacteristicProperties.broadcast`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/broadcast)
    /// [`BluetoothCharacteristicProperties.broadcast`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/broadcast)
    [[nodiscard]] bool broadcast() const;
    /// [`BluetoothCharacteristicProperties.read`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/read)
    /// [`BluetoothCharacteristicProperties.read`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/read)
    [[nodiscard]] bool read() const;
    /// [`BluetoothCharacteristicProperties.writeWithoutResponse`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/writeWithoutResponse)
    /// [`BluetoothCharacteristicProperties.writeWithoutResponse`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/writeWithoutResponse)
    [[nodiscard]] bool writeWithoutResponse() const;
    /// [`BluetoothCharacteristicProperties.write`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/write)
    /// [`BluetoothCharacteristicProperties.write`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/write)
    [[nodiscard]] bool write() const;
    /// [`BluetoothCharacteristicProperties.notify`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/notify)
    /// [`BluetoothCharacteristicProperties.notify`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/notify)
    [[nodiscard]] bool notify() const;
    /// [`BluetoothCharacteristicProperties.indicate`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/indicate)
    /// [`BluetoothCharacteristicProperties.indicate`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/indicate)
    [[nodiscard]] bool indicate() const;
    /// [`BluetoothCharacteristicProperties.authenticatedSignedWrites`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/authenticatedSignedWrites)
    /// [`BluetoothCharacteristicProperties.authenticatedSignedWrites`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/authenticatedSignedWrites)
    [[nodiscard]] bool authenticatedSignedWrites() const;
    /// [`BluetoothCharacteristicProperties.reliableWrite`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/reliableWrite)
    /// [`BluetoothCharacteristicProperties.reliableWrite`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/reliableWrite)
    [[nodiscard]] bool reliableWrite() const;
    /// [`BluetoothCharacteristicProperties.writableAuxiliaries`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/writableAuxiliaries)
    /// [`BluetoothCharacteristicProperties.writableAuxiliaries`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/writableAuxiliaries)
    [[nodiscard]] bool writableAuxiliaries() const;
};

} // namespace webbind