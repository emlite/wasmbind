#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRSession;


/// The XRSessionEvent class.
/// [`XRSessionEvent`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionEvent)
class XRSessionEvent : public Event {
    explicit XRSessionEvent(Handle h) noexcept;

public:
    explicit XRSessionEvent(const emlite::Val &val) noexcept;
    static XRSessionEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] XRSessionEvent clone() const noexcept;
    /// The `new XRSessionEvent(..)` constructor, creating a new XRSessionEvent instance
    XRSessionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `session` attribute.
    /// [`XRSessionEvent.session`](https://developer.mozilla.org/en-US/docs/Web/API/XRSessionEvent/session)
    [[nodiscard]] XRSession session() const;
};

