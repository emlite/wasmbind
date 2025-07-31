#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class HIDDevice;


/// The HIDInputReportEvent class.
/// [`HIDInputReportEvent`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent)
class HIDInputReportEvent : public Event {
    explicit HIDInputReportEvent(Handle h) noexcept;

public:
    explicit HIDInputReportEvent(const emlite::Val &val) noexcept;
    static HIDInputReportEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] HIDInputReportEvent clone() const noexcept;
    /// The `new HIDInputReportEvent(..)` constructor, creating a new HIDInputReportEvent instance
    HIDInputReportEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `device` attribute.
    /// [`HIDInputReportEvent.device`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/device)
    [[nodiscard]] HIDDevice device() const;
    /// Getter of the `reportId` attribute.
    /// [`HIDInputReportEvent.reportId`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/reportId)
    [[nodiscard]] unsigned char reportId() const;
    /// Getter of the `data` attribute.
    /// [`HIDInputReportEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEvent/data)
    [[nodiscard]] jsbind::DataView data() const;
};

