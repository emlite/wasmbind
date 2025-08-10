#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "FenceEvent.hpp"

namespace webbind {

class FencedFrameConfig;
class Event;

/// Interface Fence
/// [`Fence`](https://developer.mozilla.org/en-US/docs/Web/API/Fence)
class Fence : public emlite::Val {
    explicit Fence(Handle h) noexcept;
public:
    explicit Fence(const emlite::Val &val) noexcept;
    static Fence take_ownership(Handle h) noexcept;
    [[nodiscard]] Fence clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The reportEvent method.
    /// [`Fence.reportEvent`](https://developer.mozilla.org/en-US/docs/Web/API/Fence/reportEvent)
    jsbind::Undefined reportEvent();
    /// The reportEvent method.
    /// [`Fence.reportEvent`](https://developer.mozilla.org/en-US/docs/Web/API/Fence/reportEvent)
    jsbind::Undefined reportEvent(const jsbind::Any& event);
    /// The setReportEventDataForAutomaticBeacons method.
    /// [`Fence.setReportEventDataForAutomaticBeacons`](https://developer.mozilla.org/en-US/docs/Web/API/Fence/setReportEventDataForAutomaticBeacons)
    jsbind::Undefined setReportEventDataForAutomaticBeacons();
    /// The setReportEventDataForAutomaticBeacons method.
    /// [`Fence.setReportEventDataForAutomaticBeacons`](https://developer.mozilla.org/en-US/docs/Web/API/Fence/setReportEventDataForAutomaticBeacons)
    jsbind::Undefined setReportEventDataForAutomaticBeacons(const FenceEvent& event);
    /// The getNestedConfigs method.
    /// [`Fence.getNestedConfigs`](https://developer.mozilla.org/en-US/docs/Web/API/Fence/getNestedConfigs)
    jsbind::TypedArray<FencedFrameConfig> getNestedConfigs();
    /// The disableUntrustedNetwork method.
    /// [`Fence.disableUntrustedNetwork`](https://developer.mozilla.org/en-US/docs/Web/API/Fence/disableUntrustedNetwork)
    jsbind::Promise<jsbind::Undefined> disableUntrustedNetwork();
    /// The notifyEvent method.
    /// [`Fence.notifyEvent`](https://developer.mozilla.org/en-US/docs/Web/API/Fence/notifyEvent)
    jsbind::Undefined notifyEvent(const Event& event);
};

} // namespace webbind