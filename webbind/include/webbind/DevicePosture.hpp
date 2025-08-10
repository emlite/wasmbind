#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"
#include "enums.hpp"

namespace webbind {

/// Interface DevicePosture
/// [`DevicePosture`](https://developer.mozilla.org/en-US/docs/Web/API/DevicePosture)
class DevicePosture : public EventTarget {
    explicit DevicePosture(Handle h) noexcept;
public:
    explicit DevicePosture(const emlite::Val &val) noexcept;
    static DevicePosture take_ownership(Handle h) noexcept;
    [[nodiscard]] DevicePosture clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `type` attribute.
    /// [`DevicePosture.type`](https://developer.mozilla.org/en-US/docs/Web/API/DevicePosture/type)
    [[nodiscard]] DevicePostureType type() const;
    /// Getter of the `onchange` attribute.
    /// [`DevicePosture.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/DevicePosture/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`DevicePosture.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/DevicePosture/onchange)
    void onchange(const jsbind::Any& value);
};

} // namespace webbind