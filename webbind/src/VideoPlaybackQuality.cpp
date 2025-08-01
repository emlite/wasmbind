#include <webbind/VideoPlaybackQuality.hpp>


VideoPlaybackQuality VideoPlaybackQuality::take_ownership(Handle h) noexcept {
        return VideoPlaybackQuality(h);
    }
VideoPlaybackQuality VideoPlaybackQuality::clone() const noexcept { return *this; }
VideoPlaybackQuality::VideoPlaybackQuality(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
VideoPlaybackQuality::VideoPlaybackQuality(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any VideoPlaybackQuality::creationTime() const {
    return emlite::Val::get("creationTime").as<jsbind::Any>();
}

unsigned long VideoPlaybackQuality::droppedVideoFrames() const {
    return emlite::Val::get("droppedVideoFrames").as<unsigned long>();
}

unsigned long VideoPlaybackQuality::totalVideoFrames() const {
    return emlite::Val::get("totalVideoFrames").as<unsigned long>();
}

unsigned long VideoPlaybackQuality::corruptedVideoFrames() const {
    return emlite::Val::get("corruptedVideoFrames").as<unsigned long>();
}

