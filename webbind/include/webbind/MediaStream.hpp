#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class MediaStreamTrack;
class MediaStream;

/// Interface MediaStream
/// [`MediaStream`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream)
class MediaStream : public EventTarget {
    explicit MediaStream(Handle h) noexcept;
public:
    explicit MediaStream(const emlite::Val &val) noexcept;
    static MediaStream take_ownership(Handle h) noexcept;
    [[nodiscard]] MediaStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new MediaStream(..)` constructor, creating a new MediaStream instance
    MediaStream(const jsbind::TypedArray<MediaStreamTrack>& tracks);
    /// [`MediaStream.id`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/id)
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
    /// [`MediaStream.active`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/active)
    /// [`MediaStream.active`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/active)
    [[nodiscard]] bool active() const;
    /// [`MediaStream.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onaddtrack)
    /// [`MediaStream.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onaddtrack)
    [[nodiscard]] jsbind::Any onaddtrack() const;
    /// Setter of the `onaddtrack` attribute.
    /// [`MediaStream.onaddtrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onaddtrack)
    void onaddtrack(const jsbind::Any& value);
    /// [`MediaStream.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onremovetrack)
    /// [`MediaStream.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onremovetrack)
    [[nodiscard]] jsbind::Any onremovetrack() const;
    /// Setter of the `onremovetrack` attribute.
    /// [`MediaStream.onremovetrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStream/onremovetrack)
    void onremovetrack(const jsbind::Any& value);
};

} // namespace webbind