#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Event.hpp"
#include "RTCTrackEventInit.hpp"

namespace webbind {

class RTCRtpReceiver;
class MediaStreamTrack;
class MediaStream;
class RTCRtpTransceiver;

/// Interface RTCTrackEvent
/// [`RTCTrackEvent`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent)
class RTCTrackEvent : public Event {
    explicit RTCTrackEvent(Handle h) noexcept;
public:
    explicit RTCTrackEvent(const emlite::Val &val) noexcept;
    static RTCTrackEvent take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCTrackEvent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCTrackEvent(..)` constructor, creating a new RTCTrackEvent instance
    RTCTrackEvent(const jsbind::String& type, const RTCTrackEventInit& eventInitDict);
    /// [`RTCTrackEvent.receiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/receiver)
    /// [`RTCTrackEvent.receiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/receiver)
    [[nodiscard]] RTCRtpReceiver receiver() const;
    /// [`RTCTrackEvent.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/track)
    /// [`RTCTrackEvent.track`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/track)
    [[nodiscard]] MediaStreamTrack track() const;
    /// [`RTCTrackEvent.streams`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/streams)
    /// [`RTCTrackEvent.streams`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/streams)
    [[nodiscard]] jsbind::TypedArray<MediaStream> streams() const;
    /// [`RTCTrackEvent.transceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/transceiver)
    /// [`RTCTrackEvent.transceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent/transceiver)
    [[nodiscard]] RTCRtpTransceiver transceiver() const;
};

} // namespace webbind