#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCRtpEncodingParameters.hpp"

namespace webbind {

class MediaStream;

/// Dictionary type RTCRtpTransceiverInit
/// [`RTCRtpTransceiverInit`](https://developer.mozilla.org/en-US/docs/Web/API/RTCRtpTransceiverInit)
class RTCRtpTransceiverInit : public emlite::Val {
  explicit RTCRtpTransceiverInit(Handle h) noexcept;
public:
    static RTCRtpTransceiverInit take_ownership(Handle h) noexcept;
    explicit RTCRtpTransceiverInit(const emlite::Val &val) noexcept;
    RTCRtpTransceiverInit() noexcept;
    [[nodiscard]] RTCRtpTransceiverInit clone() const noexcept;
    [[nodiscard]] RTCRtpTransceiverDirection direction() const;
    void direction(const RTCRtpTransceiverDirection& value);
    [[nodiscard]] jsbind::TypedArray<MediaStream> streams() const;
    void streams(const jsbind::TypedArray<MediaStream>& value);
    [[nodiscard]] jsbind::TypedArray<RTCRtpEncodingParameters> sendEncodings() const;
    void sendEncodings(const jsbind::TypedArray<RTCRtpEncodingParameters>& value);
};

} // namespace webbind