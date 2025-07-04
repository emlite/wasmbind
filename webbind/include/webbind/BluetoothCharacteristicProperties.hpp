#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BluetoothCharacteristicProperties : public emlite::Val {
    explicit BluetoothCharacteristicProperties(Handle h) noexcept;

public:
    explicit BluetoothCharacteristicProperties(const emlite::Val &val) noexcept;
    static BluetoothCharacteristicProperties take_ownership(Handle h) noexcept;

    BluetoothCharacteristicProperties clone() const noexcept;
    bool broadcast() const;
    bool read() const;
    bool writeWithoutResponse() const;
    bool write() const;
    bool notify() const;
    bool indicate() const;
    bool authenticatedSignedWrites() const;
    bool reliableWrite() const;
    bool writableAuxiliaries() const;
};

