#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "HTMLElement.hpp"
#include "enums.hpp"

class MediaError;
class TimeRanges;
class AudioTrackList;
class VideoTrackList;
class TextTrackList;
class TextTrack;
class MediaKeys;
class MediaStream;
class RemotePlayback;


class HTMLMediaElement : public HTMLElement {
    explicit HTMLMediaElement(Handle h) noexcept;

public:
    explicit HTMLMediaElement(const emlite::Val &val) noexcept;
    static HTMLMediaElement take_ownership(Handle h) noexcept;

    HTMLMediaElement clone() const noexcept;
    MediaError error() const;
    jsbind::String src() const;
    void src(const jsbind::String& value);
    jsbind::Any srcObject() const;
    void srcObject(const jsbind::Any& value);
    jsbind::String currentSrc() const;
    jsbind::String crossOrigin() const;
    void crossOrigin(const jsbind::String& value);
    unsigned short networkState() const;
    jsbind::String preload() const;
    void preload(const jsbind::String& value);
    TimeRanges buffered() const;
    jsbind::Undefined load();
    CanPlayTypeResult canPlayType(const jsbind::String& type);
    unsigned short readyState() const;
    bool seeking() const;
    double currentTime() const;
    void currentTime(double value);
    jsbind::Undefined fastSeek(double time);
    double duration() const;
    jsbind::Object getStartDate();
    bool paused() const;
    double defaultPlaybackRate() const;
    void defaultPlaybackRate(double value);
    double playbackRate() const;
    void playbackRate(double value);
    bool preservesPitch() const;
    void preservesPitch(bool value);
    TimeRanges played() const;
    TimeRanges seekable() const;
    bool ended() const;
    bool autoplay() const;
    void autoplay(bool value);
    bool loop() const;
    void loop(bool value);
    jsbind::Promise<jsbind::Undefined> play();
    jsbind::Undefined pause();
    bool controls() const;
    void controls(bool value);
    double volume() const;
    void volume(double value);
    bool muted() const;
    void muted(bool value);
    bool defaultMuted() const;
    void defaultMuted(bool value);
    AudioTrackList audioTracks() const;
    VideoTrackList videoTracks() const;
    TextTrackList textTracks() const;
    TextTrack addTextTrack(const TextTrackKind& kind);
    TextTrack addTextTrack(const TextTrackKind& kind, const jsbind::String& label);
    TextTrack addTextTrack(const TextTrackKind& kind, const jsbind::String& label, const jsbind::String& language);
    jsbind::String sinkId() const;
    jsbind::Promise<jsbind::Undefined> setSinkId(const jsbind::String& sinkId);
    MediaKeys mediaKeys() const;
    jsbind::Any onencrypted() const;
    void onencrypted(const jsbind::Any& value);
    jsbind::Any onwaitingforkey() const;
    void onwaitingforkey(const jsbind::Any& value);
    jsbind::Promise<jsbind::Undefined> setMediaKeys(const MediaKeys& mediaKeys);
    MediaStream captureStream();
    RemotePlayback remote() const;
    bool disableRemotePlayback() const;
    void disableRemotePlayback(bool value);
};

