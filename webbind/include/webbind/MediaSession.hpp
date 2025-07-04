#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class MediaMetadata;
class MediaPositionState;


class MediaPositionState : public emlite::Val {
  explicit MediaPositionState(Handle h) noexcept;
public:
    static MediaPositionState take_ownership(Handle h) noexcept;
    explicit MediaPositionState(const emlite::Val &val) noexcept;
    MediaPositionState() noexcept;
    MediaPositionState clone() const noexcept;
    double duration() const;
    void duration(double value);
    double playbackRate() const;
    void playbackRate(double value);
    double position() const;
    void position(double value);
};

class MediaSession : public emlite::Val {
    explicit MediaSession(Handle h) noexcept;

public:
    explicit MediaSession(const emlite::Val &val) noexcept;
    static MediaSession take_ownership(Handle h) noexcept;

    MediaSession clone() const noexcept;
    MediaMetadata metadata() const;
    void metadata(const MediaMetadata& value);
    MediaSessionPlaybackState playbackState() const;
    void playbackState(const MediaSessionPlaybackState& value);
    jsbind::Undefined setActionHandler(const MediaSessionAction& action, const jsbind::Function& handler);
    jsbind::Undefined setPositionState(const MediaPositionState& state);
    jsbind::Promise setMicrophoneActive(bool active);
    jsbind::Promise setCameraActive(bool active);
    jsbind::Promise setScreenshareActive(bool active);
};

