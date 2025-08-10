#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface PermissionStatus
/// [`PermissionStatus`](https://developer.mozilla.org/en-US/docs/Web/API/PermissionStatus)
class PermissionStatus : public EventTarget {
    explicit PermissionStatus(Handle h) noexcept;
public:
    explicit PermissionStatus(const emlite::Val &val) noexcept;
    static PermissionStatus take_ownership(Handle h) noexcept;
    [[nodiscard]] PermissionStatus clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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

} // namespace webbind