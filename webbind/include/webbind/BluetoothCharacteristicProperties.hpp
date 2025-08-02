#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BluetoothCharacteristicProperties class.
/// [`BluetoothCharacteristicProperties`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties)
class BluetoothCharacteristicProperties : public emlite::Val {
    explicit BluetoothCharacteristicProperties(Handle h) noexcept;

public:
    explicit BluetoothCharacteristicProperties(const emlite::Val &val) noexcept;
    static BluetoothCharacteristicProperties take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothCharacteristicProperties clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `broadcast` attribute.
    /// [`BluetoothCharacteristicProperties.broadcast`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/broadcast)
    [[nodiscard]] bool broadcast() const;
    /// Getter of the `read` attribute.
    /// [`BluetoothCharacteristicProperties.read`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/read)
    [[nodiscard]] bool read() const;
    /// Getter of the `writeWithoutResponse` attribute.
    /// [`BluetoothCharacteristicProperties.writeWithoutResponse`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/writeWithoutResponse)
    [[nodiscard]] bool writeWithoutResponse() const;
    /// Getter of the `write` attribute.
    /// [`BluetoothCharacteristicProperties.write`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/write)
    [[nodiscard]] bool write() const;
    /// Getter of the `notify` attribute.
    /// [`BluetoothCharacteristicProperties.notify`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/notify)
    [[nodiscard]] bool notify() const;
    /// Getter of the `indicate` attribute.
    /// [`BluetoothCharacteristicProperties.indicate`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/indicate)
    [[nodiscard]] bool indicate() const;
    /// Getter of the `authenticatedSignedWrites` attribute.
    /// [`BluetoothCharacteristicProperties.authenticatedSignedWrites`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/authenticatedSignedWrites)
    [[nodiscard]] bool authenticatedSignedWrites() const;
    /// Getter of the `reliableWrite` attribute.
    /// [`BluetoothCharacteristicProperties.reliableWrite`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/reliableWrite)
    [[nodiscard]] bool reliableWrite() const;
    /// Getter of the `writableAuxiliaries` attribute.
    /// [`BluetoothCharacteristicProperties.writableAuxiliaries`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothCharacteristicProperties/writableAuxiliaries)
    [[nodiscard]] bool writableAuxiliaries() const;
};

