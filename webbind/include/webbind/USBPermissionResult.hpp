#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionStatus.hpp"

namespace webbind {

class USBDevice;

/// Interface USBPermissionResult
/// [`USBPermissionResult`](https://developer.mozilla.org/en-US/docs/Web/API/USBPermissionResult)
class USBPermissionResult : public PermissionStatus {
    explicit USBPermissionResult(Handle h) noexcept;
public:
    explicit USBPermissionResult(const emlite::Val &val) noexcept;
    static USBPermissionResult take_ownership(Handle h) noexcept;
    [[nodiscard]] USBPermissionResult clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `devices` attribute.
    /// [`USBPermissionResult.devices`](https://developer.mozilla.org/en-US/docs/Web/API/USBPermissionResult/devices)
    [[nodiscard]] jsbind::TypedArray<USBDevice> devices() const;
    /// Setter of the `devices` attribute.
    /// [`USBPermissionResult.devices`](https://developer.mozilla.org/en-US/docs/Web/API/USBPermissionResult/devices)
    void devices(const jsbind::TypedArray<USBDevice>& value);
};

} // namespace webbind