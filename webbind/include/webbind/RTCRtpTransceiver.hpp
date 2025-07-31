#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCRtpSender;
class RTCRtpReceiver;
class RTCRtpCodec;


class RTCRtpCodec : public emlite::Val {
  explicit RTCRtpCodec(Handle h) noexcept;
public:
    static RTCRtpCodec take_ownership(Handle h) noexcept;
    explicit RTCRtpCodec(const emlite::Val &val) noexcept;
    RTCRtpCodec() noexcept;
    [[nodiscard]] RTCRtpCodec clone() const noexcept;
    [[nodiscard]] jsbind::String mimeType() const;
    void mimeType(const jsbind::String& value);
    [[nodiscard]] unsigned long clockRate() const;
    void clockRate(unsigned long value);
    [[nodiscard]] unsigned short channels() const;
    void channels(unsigned short value);
    [[nodiscard]] jsbind::String sdpFmtpLine() const;
    void sdpFmtpLine(const jsbind::String& value);
};

/// The RTCRtpTransceiver class.
/// [`RTCRtpTransceiver`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiver)
class RTCRtpTransceiver : public emlite::Val {
    explicit RTCRtpTransceiver(Handle h) noexcept;

public:
    explicit RTCRtpTransceiver(const emlite::Val &val) noexcept;
    static RTCRtpTransceiver take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCRtpTransceiver clone() const noexcept;
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

