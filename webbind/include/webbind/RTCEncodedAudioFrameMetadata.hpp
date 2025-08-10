#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedFrameMetadata.hpp"

namespace webbind {

/// Dictionary type RTCEncodedAudioFrameMetadata
class RTCEncodedAudioFrameMetadata : public RTCEncodedFrameMetadata {
  explicit RTCEncodedAudioFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedAudioFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedAudioFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedAudioFrameMetadata() noexcept;
    [[nodiscard]] RTCEncodedAudioFrameMetadata clone() const noexcept;
    /// Getter of the `sequenceNumber` attribute.
    [[nodiscard]] short sequenceNumber() const;
    /// Setter of the `sequenceNumber` attribute.
    void sequenceNumber(short value);
    /// Getter of the `audioLevel` attribute.
    [[nodiscard]] double audioLevel() const;
    /// Setter of the `audioLevel` attribute.
    void audioLevel(double value);
};

} // namespace webbind