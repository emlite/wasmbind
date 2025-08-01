#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class MediaStreamTrack;
class MediaStream;


/// The MediaStream class.
/// [`MediaStream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream)
class MediaStream : public EventTarget {
    explicit MediaStream(Handle h) noexcept;

public:
    explicit MediaStream(const emlite::Val &val) noexcept;
    static MediaStream take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaStream clone() const noexcept;
    /// The `new MediaStream(..)` constructor, creating a new MediaStream instance
    MediaStream(const jsbind::TypedArray<MediaStreamTrack>& tracks);
    /// Getter of the `id` attribute.
    /// [`MediaStream.id`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/id)
    [[nodiscard]] jsbind::String id() const;
    /// The getAudioTracks method.
    /// [`MediaStream.getAudioTracks`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/getAudioTracks)
    jsbind::TypedArray<MediaStreamTrack> getAudioTracks();
    /// The getVideoTracks method.
    /// [`MediaStream.getVideoTracks`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/getVideoTracks)
    jsbind::TypedArray<MediaStreamTrack> getVideoTracks();
    /// The getTracks method.
    /// [`MediaStream.getTracks`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/getTracks)
    jsbind::TypedArray<MediaStreamTrack> getTracks();
    /// The getTrackById method.
    /// [`MediaStream.getTrackById`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/getTrackById)
    MediaStreamTrack getTrackById(const jsbind::String& trackId);
    /// The addTrack method.
    /// [`MediaStream.addTrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/addTrack)
    jsbind::Undefined addTrack(const MediaStreamTrack& track);
    /// The removeTrack method.
    /// [`MediaStream.removeTrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/removeTrack)
    jsbind::Undefined removeTrack(const MediaStreamTrack& track);
    /// The clone method.
    /// [`MediaStream.clone`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/clone)
    MediaStream clone();
    /// Getter of the `active` attribute.
    /// [`MediaStream.active`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/active)
    [[nodiscard]] bool active() const;
    /// Getter of the `onaddtrack` attribute.
    /// [`MediaStream.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onaddtrack)
    [[nodiscard]] jsbind::Any onaddtrack() const;
    /// Setter of the `onaddtrack` attribute.
    /// [`MediaStream.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onaddtrack)
    void onaddtrack(const jsbind::Any& value);
    /// Getter of the `onremovetrack` attribute.
    /// [`MediaStream.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onremovetrack)
    [[nodiscard]] jsbind::Any onremovetrack() const;
    /// Setter of the `onremovetrack` attribute.
    /// [`MediaStream.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onremovetrack)
    void onremovetrack(const jsbind::Any& value);
};

