#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class MediaStream;
class RTCRtpEncodingParameters;

/// Dictionary type RTCRtpTransceiverInit
class RTCRtpTransceiverInit : public emlite::Val {
  explicit RTCRtpTransceiverInit(Handle h) noexcept;
public:
    static RTCRtpTransceiverInit take_ownership(Handle h) noexcept;
    explicit RTCRtpTransceiverInit(const emlite::Val &val) noexcept;
    RTCRtpTransceiverInit() noexcept;
    [[nodiscard]] RTCRtpTransceiverInit clone() const noexcept;
    /// Getter of the `direction` attribute.
    [[nodiscard]] RTCRtpTransceiverDirection direction() const;
    /// Setter of the `direction` attribute.
    void direction(const RTCRtpTransceiverDirection& value);
    /// Getter of the `streams` attribute.
    [[nodiscard]] jsbind::TypedArray<MediaStream> streams() const;
    /// Setter of the `streams` attribute.
    void streams(const jsbind::TypedArray<MediaStream>& value);
    /// Getter of the `sendEncodings` attribute.
    [[nodiscard]] jsbind::TypedArray<RTCRtpEncodingParameters> sendEncodings() const;
    /// Setter of the `sendEncodings` attribute.
    void sendEncodings(const jsbind::TypedArray<RTCRtpEncodingParameters>& value);
};

} // namespace webbind