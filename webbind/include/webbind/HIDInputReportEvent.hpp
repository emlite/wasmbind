#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class HIDInputReportEventInit;
class HIDDevice;

/// Interface HIDInputReportEvent
/// [`HIDInputReportEvent`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent)
class HIDInputReportEvent : public Event {
    explicit HIDInputReportEvent(Handle h) noexcept;
public:
    explicit HIDInputReportEvent(const emlite::Val &val) noexcept;
    static HIDInputReportEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] HIDInputReportEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new HIDInputReportEvent(..)` constructor, creating a new HIDInputReportEvent instance
    HIDInputReportEvent(const jsbind::String& type, const HIDInputReportEventInit& eventInitDict);
    /// [`HIDInputReportEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/device)
    /// [`HIDInputReportEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/device)
    [[nodiscard]] HIDDevice device() const;
    /// [`HIDInputReportEvent.reportId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/reportId)
    /// [`HIDInputReportEvent.reportId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/reportId)
    [[nodiscard]] unsigned char reportId() const;
    /// [`HIDInputReportEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/data)
    /// [`HIDInputReportEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/data)
    [[nodiscard]] jsbind::DataView data() const;
};

} // namespace webbind