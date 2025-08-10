#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

class EventTarget;

/// Dictionary type NavigationEventInit
/// [`NavigationEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/NavigationEventInit)
class NavigationEventInit : public UIEventInit {
  explicit NavigationEventInit(Handle h) noexcept;
public:
    static NavigationEventInit take_ownership(Handle h) noexcept;
    explicit NavigationEventInit(const emlite::Val &val) noexcept;
    NavigationEventInit() noexcept;
    [[nodiscard]] NavigationEventInit clone() const noexcept;
    [[nodiscard]] SpatialNavigationDirection dir() const;
    void dir(const SpatialNavigationDirection& value);
    [[nodiscard]] EventTarget relatedTarget() const;
    void relatedTarget(const EventTarget& value);
};

} // namespace webbind