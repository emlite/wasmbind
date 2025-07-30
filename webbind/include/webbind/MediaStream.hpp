#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaStreamTrack;
class MediaStream;


class MediaStream : public EventTarget {
    explicit MediaStream(Handle h) noexcept;

public:
    explicit MediaStream(const emlite::Val &val) noexcept;
    static MediaStream take_ownership(Handle h) noexcept;

    MediaStream clone() const noexcept;
    MediaStream(const jsbind::TypedArray<MediaStreamTrack>& tracks);
    jsbind::String id() const;
    jsbind::TypedArray<MediaStreamTrack> getAudioTracks();
    jsbind::TypedArray<MediaStreamTrack> getVideoTracks();
    jsbind::TypedArray<MediaStreamTrack> getTracks();
    MediaStreamTrack getTrackById(const jsbind::String& trackId);
    jsbind::Undefined addTrack(const MediaStreamTrack& track);
    jsbind::Undefined removeTrack(const MediaStreamTrack& track);
    MediaStream clone();
    bool active() const;
    jsbind::Any onaddtrack() const;
    void onaddtrack(const jsbind::Any& value);
    jsbind::Any onremovetrack() const;
    void onremovetrack(const jsbind::Any& value);
};

