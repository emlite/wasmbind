#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SerialPortFilter.hpp"

namespace webbind {

/// Dictionary type SerialPortRequestOptions
/// [`SerialPortRequestOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SerialPortRequestOptions)
class SerialPortRequestOptions : public emlite::Val {
  explicit SerialPortRequestOptions(Handle h) noexcept;
public:
    static SerialPortRequestOptions take_ownership(Handle h) noexcept;
    explicit SerialPortRequestOptions(const emlite::Val &val) noexcept;
    SerialPortRequestOptions() noexcept;
    [[nodiscard]] SerialPortRequestOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<SerialPortFilter> filters() const;
    void filters(const jsbind::TypedArray<SerialPortFilter>& value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allowedBluetoothServiceClassIds() const;
    void allowedBluetoothServiceClassIds(const jsbind::TypedArray<jsbind::Any>& value);
};

} // namespace webbind