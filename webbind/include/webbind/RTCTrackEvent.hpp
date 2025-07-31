#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCRtpReceiver;
class MediaStreamTrack;
class MediaStream;
class RTCRtpTransceiver;


/// The RTCTrackEvent class.
/// [`RTCTrackEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent)
class RTCTrackEvent : public Event {
    explicit RTCTrackEvent(Handle h) noexcept;

public:
    explicit RTCTrackEvent(const emlite::Val &val) noexcept;
    static RTCTrackEvent take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCTrackEvent clone() const noexcept;
    /// The `new RTCTrackEvent(..)` constructor, creating a new RTCTrackEvent instance
    RTCTrackEvent(const jsbind::String& type, const jsbind::Any& eventInitDict);
    /// Getter of the `receiver` attribute.
    /// [`RTCTrackEvent.receiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/receiver)
    [[nodiscard]] RTCRtpReceiver receiver() const;
    /// Getter of the `track` attribute.
    /// [`RTCTrackEvent.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/track)
    [[nodiscard]] MediaStreamTrack track() const;
    /// Getter of the `streams` attribute.
    /// [`RTCTrackEvent.streams`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/streams)
    [[nodiscard]] jsbind::TypedArray<MediaStream> streams() const;
    /// Getter of the `transceiver` attribute.
    /// [`RTCTrackEvent.transceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/transceiver)
    [[nodiscard]] RTCRtpTransceiver transceiver() const;
};

