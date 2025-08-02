#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class HTMLPortalElement;


/// The PortalActivateEvent class.
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
    PortalActivateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `data` attribute.
    /// [`PortalActivateEvent.data`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEvent/data)
    [[nodiscard]] jsbind::Any data() const;
    /// The adoptPredecessor method.
    /// [`PortalActivateEvent.adoptPredecessor`](https://developer.mozilla.org/en-US/docs/Web/API/PortalActivateEvent/adoptPredecessor)
    HTMLPortalElement adoptPredecessor();
};

