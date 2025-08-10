#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class RTCRtpReceiver;
class MediaStreamTrack;
class MediaStream;
class RTCRtpTransceiver;

/// Dictionary type RTCTrackEventInit
/// [`RTCTrackEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEventInit)
class RTCTrackEventInit : public EventInit {
  explicit RTCTrackEventInit(Handle h) noexcept;
public:
    static RTCTrackEventInit take_ownership(Handle h) noexcept;
    explicit RTCTrackEventInit(const emlite::Val &val) noexcept;
    RTCTrackEventInit() noexcept;
    [[nodiscard]] RTCTrackEventInit clone() const noexcept;
    [[nodiscard]] RTCRtpReceiver receiver() const;
    void receiver(const RTCRtpReceiver& value);
    [[nodiscard]] MediaStreamTrack track() const;
    void track(const MediaStreamTrack& value);
    [[nodiscard]] jsbind::TypedArray<MediaStream> streams() const;
    void streams(const jsbind::TypedArray<MediaStream>& value);
    [[nodiscard]] RTCRtpTransceiver transceiver() const;
    void transceiver(const RTCRtpTransceiver& value);
};

} // namespace webbind