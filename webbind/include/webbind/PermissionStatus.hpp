#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The PermissionStatus class.
/// [`PermissionStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionStatus)
class PermissionStatus : public EventTarget {
    explicit PermissionStatus(Handle h) noexcept;

public:
    explicit PermissionStatus(const emlite::Val &val) noexcept;
    static PermissionStatus take_ownership(Handle h) noexcept;

    [[nodiscard]] PermissionStatus clone() const noexcept;
    /// Getter of the `state` attribute.
    /// [`PermissionStatus.state`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionStatus/state)
    [[nodiscard]] PermissionState state() const;
    /// Getter of the `name` attribute.
    /// [`PermissionStatus.name`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionStatus/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `onchange` attribute.
    /// [`PermissionStatus.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionStatus/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`PermissionStatus.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionStatus/onchange)
    void onchange(const jsbind::Any& value);
};

