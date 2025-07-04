#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BluetoothUUID : public emlite::Val {
    explicit BluetoothUUID(Handle h) noexcept;

public:
    explicit BluetoothUUID(const emlite::Val &val) noexcept;
    static BluetoothUUID take_ownership(Handle h) noexcept;

    BluetoothUUID clone() const noexcept;
    static jsbind::Any getService(const jsbind::Any& name);
    static jsbind::Any getCharacteristic(const jsbind::Any& name);
    static jsbind::Any getDescriptor(const jsbind::Any& name);
    static jsbind::Any canonicalUUID(unsigned long alias);
};

