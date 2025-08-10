#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpCodec.hpp"
#include "enums.hpp"

namespace webbind {

class RTCRtpSender;
class RTCRtpReceiver;

/// Interface RTCRtpTransceiver
/// [`RTCRtpTransceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver)
class RTCRtpTransceiver : public emlite::Val {
    explicit RTCRtpTransceiver(Handle h) noexcept;
public:
    explicit RTCRtpTransceiver(const emlite::Val &val) noexcept;
    static RTCRtpTransceiver take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCRtpTransceiver clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `mid` attribute.
    /// [`RTCRtpTransceiver.mid`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/mid)
    [[nodiscard]] jsbind::String mid() const;
    /// Getter of the `sender` attribute.
    /// [`RTCRtpTransceiver.sender`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/sender)
    [[nodiscard]] RTCRtpSender sender() const;
    /// Getter of the `receiver` attribute.
    /// [`RTCRtpTransceiver.receiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/receiver)
    [[nodiscard]] RTCRtpReceiver receiver() const;
    /// Getter of the `direction` attribute.
    /// [`RTCRtpTransceiver.direction`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/direction)
    [[nodiscard]] RTCRtpTransceiverDirection direction() const;
    /// Setter of the `direction` attribute.
    /// [`RTCRtpTransceiver.direction`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/direction)
    void direction(const RTCRtpTransceiverDirection& value);
    /// Getter of the `currentDirection` attribute.
    /// [`RTCRtpTransceiver.currentDirection`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/currentDirection)
    [[nodiscard]] RTCRtpTransceiverDirection currentDirection() const;
    /// The stop method.
    /// [`RTCRtpTransceiver.stop`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/stop)
    jsbind::Undefined stop();
    /// The setCodecPreferences method.
    /// [`RTCRtpTransceiver.setCodecPreferences`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver/setCodecPreferences)
    jsbind::Undefined setCodecPreferences(const jsbind::TypedArray<RTCRtpCodec>& codecs);
};

} // namespace webbind