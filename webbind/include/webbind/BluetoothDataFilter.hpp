#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class BluetoothDataFilter : public emlite::Val {
    explicit BluetoothDataFilter(Handle h) noexcept;

public:
    explicit BluetoothDataFilter(const emlite::Val &val) noexcept;
    static BluetoothDataFilter take_ownership(Handle h) noexcept;

    BluetoothDataFilter clone() const noexcept;
    BluetoothDataFilter(const jsbind::Any& init);
    jsbind::ArrayBuffer dataPrefix() const;
    jsbind::ArrayBuffer mask() const;
};

