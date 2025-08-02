#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PermissionStatus.hpp"
#include "enums.hpp"


/// The XRPermissionStatus class.
/// [`XRPermissionStatus`](https://developer.mozilla.org/en-US/docs/Web/API/XRPermissionStatus)
class XRPermissionStatus : public PermissionStatus {
    explicit XRPermissionStatus(Handle h) noexcept;

public:
    explicit XRPermissionStatus(const emlite::Val &val) noexcept;
    static XRPermissionStatus take_ownership(Handle h) noexcept;

    [[nodiscard]] XRPermissionStatus clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `granted` attribute.
    /// [`XRPermissionStatus.granted`](https://developer.mozilla.org/en-US/docs/Web/API/XRPermissionStatus/granted)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> granted() const;
    /// Setter of the `granted` attribute.
    /// [`XRPermissionStatus.granted`](https://developer.mozilla.org/en-US/docs/Web/API/XRPermissionStatus/granted)
    void granted(const jsbind::TypedArray<jsbind::String>& value);
};

