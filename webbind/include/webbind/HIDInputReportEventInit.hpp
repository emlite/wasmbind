#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class HIDDevice;

/// Dictionary type HIDInputReportEventInit
/// [`HIDInputReportEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/HIDInputReportEventInit)
class HIDInputReportEventInit : public EventInit {
  explicit HIDInputReportEventInit(Handle h) noexcept;
public:
    static HIDInputReportEventInit take_ownership(Handle h) noexcept;
    explicit HIDInputReportEventInit(const emlite::Val &val) noexcept;
    HIDInputReportEventInit() noexcept;
    [[nodiscard]] HIDInputReportEventInit clone() const noexcept;
    [[nodiscard]] HIDDevice device() const;
    void device(const HIDDevice& value);
    [[nodiscard]] unsigned char reportId() const;
    void reportId(unsigned char value);
    [[nodiscard]] jsbind::DataView data() const;
    void data(const jsbind::DataView& value);
};

} // namespace webbind