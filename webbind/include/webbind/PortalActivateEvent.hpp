#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"

namespace webbind {

class PortalActivateEventInit;
class HTMLPortalElement;

/// Interface PortalActivateEvent
/// [`PortalActivateEvent`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEvent)
class PortalActivateEvent : public Event {
    explicit PortalActivateEvent(Handle h) noexcept;
public:
    explicit PortalActivateEvent(const emlite::Val &val) noexcept;
    static PortalActivateEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] PortalActivateEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PortalActivateEvent(..)` constructor, creating a new PortalActivateEvent instance
    PortalActivateEvent(const jsbind::String& type);
    /// The `new PortalActivateEvent(..)` constructor, creating a new PortalActivateEvent instance
    PortalActivateEvent(const jsbind::String& type, const PortalActivateEventInit& eventInitDict);
    /// [`PortalActivateEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEvent/data)
    /// [`PortalActivateEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEvent/data)
    [[nodiscard]] jsbind::Any data() const;
    /// The adoptPredecessor method.
    /// [`PortalActivateEvent.adoptPredecessor`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEvent/adoptPredecessor)
    HTMLPortalElement adoptPredecessor();
};

} // namespace webbind