#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class VideoTrack;


class VideoTrackList : public EventTarget {
    explicit VideoTrackList(Handle h) noexcept;

public:
    explicit VideoTrackList(const emlite::Val &val) noexcept;
    static VideoTrackList take_ownership(Handle h) noexcept;

    VideoTrackList clone() const noexcept;
    unsigned long length() const;
    VideoTrack getTrackById(const jsbind::String& id);
    long selectedIndex() const;
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
    jsbind::Any onaddtrack() const;
    void onaddtrack(const jsbind::Any& value);
    jsbind::Any onremovetrack() const;
    void onremovetrack(const jsbind::Any& value);
};

