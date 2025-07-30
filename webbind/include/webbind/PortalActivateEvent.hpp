#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class HTMLPortalElement;


class PortalActivateEvent : public Event {
    explicit PortalActivateEvent(Handle h) noexcept;

public:
    explicit PortalActivateEvent(const emlite::Val &val) noexcept;
    static PortalActivateEvent take_ownership(Handle h) noexcept;

    PortalActivateEvent clone() const noexcept;
    PortalActivateEvent(const jsbind::String& type);
    PortalActivateEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    jsbind::Any data() const;
    HTMLPortalElement adoptPredecessor();
};

