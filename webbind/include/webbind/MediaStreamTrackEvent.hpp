#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class MediaStreamTrack;


class MediaStreamTrackEvent : public Event {
    explicit MediaStreamTrackEvent(Handle h) noexcept;

public:
    explicit MediaStreamTrackEvent(const emlite::Val &val) noexcept;
    static MediaStreamTrackEvent take_ownership(Handle h) noexcept;

    MediaStreamTrackEvent clone() const noexcept;
    MediaStreamTrackEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    MediaStreamTrack track() const;
};

