#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "UIEventInit.hpp"

namespace webbind {

class EventTarget;

/// Dictionary type NavigationEventInit
class NavigationEventInit : public UIEventInit {
  explicit NavigationEventInit(Handle h) noexcept;
public:
    static NavigationEventInit take_ownership(Handle h) noexcept;
    explicit NavigationEventInit(const emlite::Val &val) noexcept;
    NavigationEventInit() noexcept;
    [[nodiscard]] NavigationEventInit clone() const noexcept;
    /// Getter of the `dir` attribute.
    [[nodiscard]] SpatialNavigationDirection dir() const;
    /// Setter of the `dir` attribute.
    void dir(const SpatialNavigationDirection& value);
    /// Getter of the `relatedTarget` attribute.
    [[nodiscard]] EventTarget relatedTarget() const;
    /// Setter of the `relatedTarget` attribute.
    void relatedTarget(const EventTarget& value);
};

} // namespace webbind