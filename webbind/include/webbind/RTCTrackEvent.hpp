#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Event.hpp"
#include "enums.hpp"

class RTCRtpReceiver;
class MediaStreamTrack;
class MediaStream;
class RTCRtpTransceiver;


class RTCTrackEvent : public Event {
    explicit RTCTrackEvent(Handle h) noexcept;

public:
    explicit RTCTrackEvent(const emlite::Val &val) noexcept;
    static RTCTrackEvent take_ownership(Handle h) noexcept;

    RTCTrackEvent clone() const noexcept;
    RTCTrackEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict);
    RTCRtpReceiver receiver() const;
    MediaStreamTrack track() const;
    jsbind::FrozenArray<MediaStream> streams() const;
    RTCRtpTransceiver transceiver() const;
};

