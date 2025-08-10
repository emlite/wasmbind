#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type PortalActivateEventInit
/// [`PortalActivateEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEventInit)
class PortalActivateEventInit : public EventInit {
  explicit PortalActivateEventInit(Handle h) noexcept;
public:
    static PortalActivateEventInit take_ownership(Handle h) noexcept;
    explicit PortalActivateEventInit(const emlite::Val &val) noexcept;
    PortalActivateEventInit() noexcept;
    [[nodiscard]] PortalActivateEventInit clone() const noexcept;
    [[nodiscard]] jsbind::Any data() const;
    void data(const jsbind::Any& value);
};

} // namespace webbind