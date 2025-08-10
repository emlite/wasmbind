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
class RTCTrackEventInit : public EventInit {
  explicit RTCTrackEventInit(Handle h) noexcept;
public:
    static RTCTrackEventInit take_ownership(Handle h) noexcept;
    explicit RTCTrackEventInit(const emlite::Val &val) noexcept;
    RTCTrackEventInit() noexcept;
    [[nodiscard]] RTCTrackEventInit clone() const noexcept;
    /// Getter of the `receiver` attribute.
    [[nodiscard]] RTCRtpReceiver receiver() const;
    /// Setter of the `receiver` attribute.
    void receiver(const RTCRtpReceiver& value);
    /// Getter of the `track` attribute.
    [[nodiscard]] MediaStreamTrack track() const;
    /// Setter of the `track` attribute.
    void track(const MediaStreamTrack& value);
    /// Getter of the `streams` attribute.
    [[nodiscard]] jsbind::TypedArray<MediaStream> streams() const;
    /// Setter of the `streams` attribute.
    void streams(const jsbind::TypedArray<MediaStream>& value);
    /// Getter of the `transceiver` attribute.
    [[nodiscard]] RTCRtpTransceiver transceiver() const;
    /// Setter of the `transceiver` attribute.
    void transceiver(const RTCRtpTransceiver& value);
};

} // namespace webbind