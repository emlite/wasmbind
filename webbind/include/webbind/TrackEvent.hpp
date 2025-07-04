#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class TrackEvent : public Event {
    explicit TrackEvent(Handle h) noexcept;

public:
    explicit TrackEvent(const emlite::Val &val) noexcept;
    static TrackEvent take_ownership(Handle h) noexcept;

    TrackEvent clone() const noexcept;
    TrackEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Any track() const;
};

