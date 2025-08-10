#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "XRSessionEventInit.hpp"

namespace webbind {

class XRSession;

/// Interface XRSessionEvent
/// [`XRSessionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionEvent)
class XRSessionEvent : public Event {
    explicit XRSessionEvent(Handle h) noexcept;
public:
    explicit XRSessionEvent(const emlite::Val &val) noexcept;
    static XRSessionEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] XRSessionEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new XRSessionEvent(..)` constructor, creating a new XRSessionEvent instance
    XRSessionEvent(const jsbind::String& type, const XRSessionEventInit& eventInitDict);
    /// [`XRSessionEvent.session`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionEvent/session)
    /// [`XRSessionEvent.session`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionEvent/session)
    [[nodiscard]] XRSession session() const;
};

} // namespace webbind