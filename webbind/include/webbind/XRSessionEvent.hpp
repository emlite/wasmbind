#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class XRSession;


class XRSessionEvent : public Event {
    explicit XRSessionEvent(Handle h) noexcept;

public:
    explicit XRSessionEvent(const emlite::Val &val) noexcept;
    static XRSessionEvent take_ownership(Handle h) noexcept;

    XRSessionEvent clone() const noexcept;
    XRSessionEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    XRSession session() const;
};

