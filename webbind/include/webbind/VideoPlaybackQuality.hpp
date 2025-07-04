#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class VideoPlaybackQuality : public emlite::Val {
    explicit VideoPlaybackQuality(Handle h) noexcept;

public:
    explicit VideoPlaybackQuality(const emlite::Val &val) noexcept;
    static VideoPlaybackQuality take_ownership(Handle h) noexcept;

    VideoPlaybackQuality clone() const noexcept;
    jsbind::Any creationTime() const;
    unsigned long droppedVideoFrames() const;
    unsigned long totalVideoFrames() const;
    unsigned long corruptedVideoFrames() const;
};

