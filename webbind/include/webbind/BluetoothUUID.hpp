#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The BluetoothUUID class.
/// [`BluetoothUUID`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothUUID)
class BluetoothUUID : public emlite::Val {
    explicit BluetoothUUID(Handle h) noexcept;

public:
    explicit BluetoothUUID(const emlite::Val &val) noexcept;
    static BluetoothUUID take_ownership(Handle h) noexcept;

    [[nodiscard]] BluetoothUUID clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getService method.
    /// [`BluetoothUUID.getService`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothUUID/getService)
    static jsbind::Any getService(const jsbind::Any& name);
    /// The getCharacteristic method.
    /// [`BluetoothUUID.getCharacteristic`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothUUID/getCharacteristic)
    static jsbind::Any getCharacteristic(const jsbind::Any& name);
    /// The getDescriptor method.
    /// [`BluetoothUUID.getDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothUUID/getDescriptor)
    static jsbind::Any getDescriptor(const jsbind::Any& name);
    /// The canonicalUUID method.
    /// [`BluetoothUUID.canonicalUUID`](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothUUID/canonicalUUID)
    static jsbind::Any canonicalUUID(unsigned long alias);
};

