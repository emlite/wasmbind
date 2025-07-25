#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"


class AnimationPlaybackEvent : public Event {
    explicit AnimationPlaybackEvent(Handle h) noexcept;

public:
    explicit AnimationPlaybackEvent(const emlite::Val &val) noexcept;
    static AnimationPlaybackEvent take_ownership(Handle h) noexcept;

    AnimationPlaybackEvent clone() const noexcept;
    AnimationPlaybackEvent(const jsbind::DOMString& type);
    AnimationPlaybackEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    jsbind::Any currentTime() const;
    jsbind::Any timelineTime() const;
};

