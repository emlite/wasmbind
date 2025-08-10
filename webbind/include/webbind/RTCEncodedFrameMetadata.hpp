#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCEncodedFrameMetadata
class RTCEncodedFrameMetadata : public emlite::Val {
  explicit RTCEncodedFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedFrameMetadata() noexcept;
    [[nodiscard]] RTCEncodedFrameMetadata clone() const noexcept;
    /// Getter of the `synchronizationSource` attribute.
    [[nodiscard]] unsigned long synchronizationSource() const;
    /// Setter of the `synchronizationSource` attribute.
    void synchronizationSource(unsigned long value);
    /// Getter of the `payloadType` attribute.
    [[nodiscard]] unsigned char payloadType() const;
    /// Setter of the `payloadType` attribute.
    void payloadType(unsigned char value);
    /// Getter of the `contributingSources` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> contributingSources() const;
    /// Setter of the `contributingSources` attribute.
    void contributingSources(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `rtpTimestamp` attribute.
    [[nodiscard]] unsigned long rtpTimestamp() const;
    /// Setter of the `rtpTimestamp` attribute.
    void rtpTimestamp(unsigned long value);
    /// Getter of the `receiveTime` attribute.
    [[nodiscard]] jsbind::Any receiveTime() const;
    /// Setter of the `receiveTime` attribute.
    void receiveTime(const jsbind::Any& value);
    /// Getter of the `captureTime` attribute.
    [[nodiscard]] jsbind::Any captureTime() const;
    /// Setter of the `captureTime` attribute.
    void captureTime(const jsbind::Any& value);
    /// Getter of the `senderCaptureTimeOffset` attribute.
    [[nodiscard]] jsbind::Any senderCaptureTimeOffset() const;
    /// Setter of the `senderCaptureTimeOffset` attribute.
    void senderCaptureTimeOffset(const jsbind::Any& value);
    /// Getter of the `mimeType` attribute.
    [[nodiscard]] jsbind::String mimeType() const;
    /// Setter of the `mimeType` attribute.
    void mimeType(const jsbind::String& value);
};

} // namespace webbind