#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class HIDDevice;

/// Dictionary type HIDInputReportEventInit
class HIDInputReportEventInit : public EventInit {
  explicit HIDInputReportEventInit(Handle h) noexcept;
public:
    static HIDInputReportEventInit take_ownership(Handle h) noexcept;
    explicit HIDInputReportEventInit(const emlite::Val &val) noexcept;
    HIDInputReportEventInit() noexcept;
    [[nodiscard]] HIDInputReportEventInit clone() const noexcept;
    /// Getter of the `device` attribute.
    [[nodiscard]] HIDDevice device() const;
    /// Setter of the `device` attribute.
    void device(const HIDDevice& value);
    /// Getter of the `reportId` attribute.
    [[nodiscard]] unsigned char reportId() const;
    /// Setter of the `reportId` attribute.
    void reportId(unsigned char value);
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::DataView data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::DataView& value);
};

} // namespace webbind