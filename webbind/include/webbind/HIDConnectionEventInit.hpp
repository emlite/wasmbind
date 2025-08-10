#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class HIDDevice;

/// Dictionary type HIDConnectionEventInit
/// [`HIDConnectionEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/HIDConnectionEventInit)
class HIDConnectionEventInit : public EventInit {
  explicit HIDConnectionEventInit(Handle h) noexcept;
public:
    static HIDConnectionEventInit take_ownership(Handle h) noexcept;
    explicit HIDConnectionEventInit(const emlite::Val &val) noexcept;
    HIDConnectionEventInit() noexcept;
    [[nodiscard]] HIDConnectionEventInit clone() const noexcept;
    [[nodiscard]] HIDDevice device() const;
    void device(const HIDDevice& value);
};

} // namespace webbind