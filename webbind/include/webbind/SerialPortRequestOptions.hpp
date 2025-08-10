#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SerialPortFilter;

/// Dictionary type SerialPortRequestOptions
class SerialPortRequestOptions : public emlite::Val {
  explicit SerialPortRequestOptions(Handle h) noexcept;
public:
    static SerialPortRequestOptions take_ownership(Handle h) noexcept;
    explicit SerialPortRequestOptions(const emlite::Val &val) noexcept;
    SerialPortRequestOptions() noexcept;
    [[nodiscard]] SerialPortRequestOptions clone() const noexcept;
    /// Getter of the `filters` attribute.
    [[nodiscard]] jsbind::TypedArray<SerialPortFilter> filters() const;
    /// Setter of the `filters` attribute.
    void filters(const jsbind::TypedArray<SerialPortFilter>& value);
    /// Getter of the `allowedBluetoothServiceClassIds` attribute.
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> allowedBluetoothServiceClassIds() const;
    /// Setter of the `allowedBluetoothServiceClassIds` attribute.
    void allowedBluetoothServiceClassIds(const jsbind::TypedArray<jsbind::Any>& value);
};

} // namespace webbind