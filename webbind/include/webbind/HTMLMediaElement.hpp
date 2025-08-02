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


/// The HTMLMediaElement class.
/// [`HTMLMediaElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement)
class HTMLMediaElement : public HTMLElement {
    explicit HTMLMediaElement(Handle h) noexcept;

public:
    explicit HTMLMediaElement(const emlite::Val &val) noexcept;
    static HTMLMediaElement take_ownership(Handle h) noexcept;

    [[nodiscard]] HTMLMediaElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `error` attribute.
    /// [`HTMLMediaElement.error`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/error)
    [[nodiscard]] MediaError error() const;
    /// Getter of the `src` attribute.
    /// [`HTMLMediaElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/src)
    [[nodiscard]] jsbind::String src() const;
    /// Setter of the `src` attribute.
    /// [`HTMLMediaElement.src`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/src)
    void src(const jsbind::String& value);
    /// Getter of the `srcObject` attribute.
    /// [`HTMLMediaElement.srcObject`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/srcObject)
    [[nodiscard]] jsbind::Any srcObject() const;
    /// Setter of the `srcObject` attribute.
    /// [`HTMLMediaElement.srcObject`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/srcObject)
    void srcObject(const jsbind::Any& value);
    /// Getter of the `currentSrc` attribute.
    /// [`HTMLMediaElement.currentSrc`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/currentSrc)
    [[nodiscard]] jsbind::String currentSrc() const;
    /// Getter of the `crossOrigin` attribute.
    /// [`HTMLMediaElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/crossOrigin)
    [[nodiscard]] jsbind::String crossOrigin() const;
    /// Setter of the `crossOrigin` attribute.
    /// [`HTMLMediaElement.crossOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/crossOrigin)
    void crossOrigin(const jsbind::String& value);
    /// Getter of the `networkState` attribute.
    /// [`HTMLMediaElement.networkState`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/networkState)
    [[nodiscard]] unsigned short networkState() const;
    /// Getter of the `preload` attribute.
    /// [`HTMLMediaElement.preload`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/preload)
    [[nodiscard]] jsbind::String preload() const;
    /// Setter of the `preload` attribute.
    /// [`HTMLMediaElement.preload`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/preload)
    void preload(const jsbind::String& value);
    /// Getter of the `buffered` attribute.
    /// [`HTMLMediaElement.buffered`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/buffered)
    [[nodiscard]] TimeRanges buffered() const;
    /// The load method.
    /// [`HTMLMediaElement.load`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/load)
    jsbind::Undefined load();
    /// The canPlayType method.
    /// [`HTMLMediaElement.canPlayType`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/canPlayType)
    CanPlayTypeResult canPlayType(const jsbind::String& type);
    /// Getter of the `readyState` attribute.
    /// [`HTMLMediaElement.readyState`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/readyState)
    [[nodiscard]] unsigned short readyState() const;
    /// Getter of the `seeking` attribute.
    /// [`HTMLMediaElement.seeking`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/seeking)
    [[nodiscard]] bool seeking() const;
    /// Getter of the `currentTime` attribute.
    /// [`HTMLMediaElement.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/currentTime)
    [[nodiscard]] double currentTime() const;
    /// Setter of the `currentTime` attribute.
    /// [`HTMLMediaElement.currentTime`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/currentTime)
    void currentTime(double value);
    /// The fastSeek method.
    /// [`HTMLMediaElement.fastSeek`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/fastSeek)
    jsbind::Undefined fastSeek(double time);
    /// Getter of the `duration` attribute.
    /// [`HTMLMediaElement.duration`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/duration)
    [[nodiscard]] double duration() const;
    /// The getStartDate method.
    /// [`HTMLMediaElement.getStartDate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/getStartDate)
    jsbind::Object getStartDate();
    /// Getter of the `paused` attribute.
    /// [`HTMLMediaElement.paused`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/paused)
    [[nodiscard]] bool paused() const;
    /// Getter of the `defaultPlaybackRate` attribute.
    /// [`HTMLMediaElement.defaultPlaybackRate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/defaultPlaybackRate)
    [[nodiscard]] double defaultPlaybackRate() const;
    /// Setter of the `defaultPlaybackRate` attribute.
    /// [`HTMLMediaElement.defaultPlaybackRate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/defaultPlaybackRate)
    void defaultPlaybackRate(double value);
    /// Getter of the `playbackRate` attribute.
    /// [`HTMLMediaElement.playbackRate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/playbackRate)
    [[nodiscard]] double playbackRate() const;
    /// Setter of the `playbackRate` attribute.
    /// [`HTMLMediaElement.playbackRate`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/playbackRate)
    void playbackRate(double value);
    /// Getter of the `preservesPitch` attribute.
    /// [`HTMLMediaElement.preservesPitch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/preservesPitch)
    [[nodiscard]] bool preservesPitch() const;
    /// Setter of the `preservesPitch` attribute.
    /// [`HTMLMediaElement.preservesPitch`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/preservesPitch)
    void preservesPitch(bool value);
    /// Getter of the `played` attribute.
    /// [`HTMLMediaElement.played`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/played)
    [[nodiscard]] TimeRanges played() const;
    /// Getter of the `seekable` attribute.
    /// [`HTMLMediaElement.seekable`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/seekable)
    [[nodiscard]] TimeRanges seekable() const;
    /// Getter of the `ended` attribute.
    /// [`HTMLMediaElement.ended`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/ended)
    [[nodiscard]] bool ended() const;
    /// Getter of the `autoplay` attribute.
    /// [`HTMLMediaElement.autoplay`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/autoplay)
    [[nodiscard]] bool autoplay() const;
    /// Setter of the `autoplay` attribute.
    /// [`HTMLMediaElement.autoplay`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/autoplay)
    void autoplay(bool value);
    /// Getter of the `loop` attribute.
    /// [`HTMLMediaElement.loop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/loop)
    [[nodiscard]] bool loop() const;
    /// Setter of the `loop` attribute.
    /// [`HTMLMediaElement.loop`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/loop)
    void loop(bool value);
    /// The play method.
    /// [`HTMLMediaElement.play`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/play)
    jsbind::Promise<jsbind::Undefined> play();
    /// The pause method.
    /// [`HTMLMediaElement.pause`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/pause)
    jsbind::Undefined pause();
    /// Getter of the `controls` attribute.
    /// [`HTMLMediaElement.controls`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/controls)
    [[nodiscard]] bool controls() const;
    /// Setter of the `controls` attribute.
    /// [`HTMLMediaElement.controls`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/controls)
    void controls(bool value);
    /// Getter of the `volume` attribute.
    /// [`HTMLMediaElement.volume`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/volume)
    [[nodiscard]] double volume() const;
    /// Setter of the `volume` attribute.
    /// [`HTMLMediaElement.volume`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/volume)
    void volume(double value);
    /// Getter of the `muted` attribute.
    /// [`HTMLMediaElement.muted`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/muted)
    [[nodiscard]] bool muted() const;
    /// Setter of the `muted` attribute.
    /// [`HTMLMediaElement.muted`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/muted)
    void muted(bool value);
    /// Getter of the `defaultMuted` attribute.
    /// [`HTMLMediaElement.defaultMuted`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/defaultMuted)
    [[nodiscard]] bool defaultMuted() const;
    /// Setter of the `defaultMuted` attribute.
    /// [`HTMLMediaElement.defaultMuted`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/defaultMuted)
    void defaultMuted(bool value);
    /// Getter of the `audioTracks` attribute.
    /// [`HTMLMediaElement.audioTracks`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/audioTracks)
    [[nodiscard]] AudioTrackList audioTracks() const;
    /// Getter of the `videoTracks` attribute.
    /// [`HTMLMediaElement.videoTracks`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/videoTracks)
    [[nodiscard]] VideoTrackList videoTracks() const;
    /// Getter of the `textTracks` attribute.
    /// [`HTMLMediaElement.textTracks`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/textTracks)
    [[nodiscard]] TextTrackList textTracks() const;
    /// The addTextTrack method.
    /// [`HTMLMediaElement.addTextTrack`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/addTextTrack)
    TextTrack addTextTrack(const TextTrackKind& kind);
    /// The addTextTrack method.
    /// [`HTMLMediaElement.addTextTrack`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/addTextTrack)
    TextTrack addTextTrack(const TextTrackKind& kind, const jsbind::String& label);
    /// The addTextTrack method.
    /// [`HTMLMediaElement.addTextTrack`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/addTextTrack)
    TextTrack addTextTrack(const TextTrackKind& kind, const jsbind::String& label, const jsbind::String& language);
    /// Getter of the `sinkId` attribute.
    /// [`HTMLMediaElement.sinkId`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/sinkId)
    [[nodiscard]] jsbind::String sinkId() const;
    /// The setSinkId method.
    /// [`HTMLMediaElement.setSinkId`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/setSinkId)
    jsbind::Promise<jsbind::Undefined> setSinkId(const jsbind::String& sinkId);
    /// Getter of the `mediaKeys` attribute.
    /// [`HTMLMediaElement.mediaKeys`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/mediaKeys)
    [[nodiscard]] MediaKeys mediaKeys() const;
    /// Getter of the `onencrypted` attribute.
    /// [`HTMLMediaElement.onencrypted`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/onencrypted)
    [[nodiscard]] jsbind::Any onencrypted() const;
    /// Setter of the `onencrypted` attribute.
    /// [`HTMLMediaElement.onencrypted`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/onencrypted)
    void onencrypted(const jsbind::Any& value);
    /// Getter of the `onwaitingforkey` attribute.
    /// [`HTMLMediaElement.onwaitingforkey`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/onwaitingforkey)
    [[nodiscard]] jsbind::Any onwaitingforkey() const;
    /// Setter of the `onwaitingforkey` attribute.
    /// [`HTMLMediaElement.onwaitingforkey`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/onwaitingforkey)
    void onwaitingforkey(const jsbind::Any& value);
    /// The setMediaKeys method.
    /// [`HTMLMediaElement.setMediaKeys`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/setMediaKeys)
    jsbind::Promise<jsbind::Undefined> setMediaKeys(const MediaKeys& mediaKeys);
    /// The captureStream method.
    /// [`HTMLMediaElement.captureStream`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/captureStream)
    MediaStream captureStream();
    /// Getter of the `remote` attribute.
    /// [`HTMLMediaElement.remote`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/remote)
    [[nodiscard]] RemotePlayback remote() const;
    /// Getter of the `disableRemotePlayback` attribute.
    /// [`HTMLMediaElement.disableRemotePlayback`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/disableRemotePlayback)
    [[nodiscard]] bool disableRemotePlayback() const;
    /// Setter of the `disableRemotePlayback` attribute.
    /// [`HTMLMediaElement.disableRemotePlayback`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement/disableRemotePlayback)
    void disableRemotePlayback(bool value);
};

