#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BluetoothServiceDataFilter : public emlite::Val {
    explicit BluetoothServiceDataFilter(Handle h) noexcept;

public:
    explicit BluetoothServiceDataFilter(const emlite::Val &val) noexcept;
    static BluetoothServiceDataFilter take_ownership(Handle h) noexcept;

    BluetoothServiceDataFilter clone() const noexcept;
    BluetoothServiceDataFilter(const jsbind::Object& init);
};

