#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

/// Interface BatteryManager
/// [`BatteryManager`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager)
class BatteryManager : public EventTarget {
    explicit BatteryManager(Handle h) noexcept;
public:
    explicit BatteryManager(const emlite::Val &val) noexcept;
    static BatteryManager take_ownership(Handle h) noexcept;
    [[nodiscard]] BatteryManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `charging` attribute.
    /// [`BatteryManager.charging`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/charging)
    [[nodiscard]] bool charging() const;
    /// Getter of the `chargingTime` attribute.
    /// [`BatteryManager.chargingTime`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/chargingTime)
    [[nodiscard]] double chargingTime() const;
    /// Getter of the `dischargingTime` attribute.
    /// [`BatteryManager.dischargingTime`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/dischargingTime)
    [[nodiscard]] double dischargingTime() const;
    /// Getter of the `level` attribute.
    /// [`BatteryManager.level`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/level)
    [[nodiscard]] double level() const;
    /// Getter of the `onchargingchange` attribute.
    /// [`BatteryManager.onchargingchange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/onchargingchange)
    [[nodiscard]] jsbind::Any onchargingchange() const;
    /// Setter of the `onchargingchange` attribute.
    /// [`BatteryManager.onchargingchange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/onchargingchange)
    void onchargingchange(const jsbind::Any& value);
    /// Getter of the `onchargingtimechange` attribute.
    /// [`BatteryManager.onchargingtimechange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/onchargingtimechange)
    [[nodiscard]] jsbind::Any onchargingtimechange() const;
    /// Setter of the `onchargingtimechange` attribute.
    /// [`BatteryManager.onchargingtimechange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/onchargingtimechange)
    void onchargingtimechange(const jsbind::Any& value);
    /// Getter of the `ondischargingtimechange` attribute.
    /// [`BatteryManager.ondischargingtimechange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/ondischargingtimechange)
    [[nodiscard]] jsbind::Any ondischargingtimechange() const;
    /// Setter of the `ondischargingtimechange` attribute.
    /// [`BatteryManager.ondischargingtimechange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/ondischargingtimechange)
    void ondischargingtimechange(const jsbind::Any& value);
    /// Getter of the `onlevelchange` attribute.
    /// [`BatteryManager.onlevelchange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/onlevelchange)
    [[nodiscard]] jsbind::Any onlevelchange() const;
    /// Setter of the `onlevelchange` attribute.
    /// [`BatteryManager.onlevelchange`](https://developer.mozilla.org/en-US/docs/Web/API/BatteryManager/onlevelchange)
    void onlevelchange(const jsbind::Any& value);
};

} // namespace webbind