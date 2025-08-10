#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class HIDDevice;

/// Dictionary type HIDConnectionEventInit
class HIDConnectionEventInit : public EventInit {
  explicit HIDConnectionEventInit(Handle h) noexcept;
public:
    static HIDConnectionEventInit take_ownership(Handle h) noexcept;
    explicit HIDConnectionEventInit(const emlite::Val &val) noexcept;
    HIDConnectionEventInit() noexcept;
    [[nodiscard]] HIDConnectionEventInit clone() const noexcept;
    /// Getter of the `device` attribute.
    [[nodiscard]] HIDDevice device() const;
    /// Setter of the `device` attribute.
    void device(const HIDDevice& value);
};

} // namespace webbind