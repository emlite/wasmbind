#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCEncodedFrameMetadata
/// [`RTCEncodedFrameMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedFrameMetadata)
class RTCEncodedFrameMetadata : public emlite::Val {
  explicit RTCEncodedFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedFrameMetadata() noexcept;
    [[nodiscard]] RTCEncodedFrameMetadata clone() const noexcept;
    [[nodiscard]] unsigned long synchronizationSource() const;
    void synchronizationSource(unsigned long value);
    [[nodiscard]] unsigned char payloadType() const;
    void payloadType(unsigned char value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> contributingSources() const;
    void contributingSources(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] unsigned long rtpTimestamp() const;
    void rtpTimestamp(unsigned long value);
    [[nodiscard]] jsbind::Any receiveTime() const;
    void receiveTime(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any captureTime() const;
    void captureTime(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any senderCaptureTimeOffset() const;
    void senderCaptureTimeOffset(const jsbind::Any& value);
    [[nodiscard]] jsbind::String mimeType() const;
    void mimeType(const jsbind::String& value);
};

} // namespace webbind