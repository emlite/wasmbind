#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedFrameMetadata.hpp"

namespace webbind {

/// Dictionary type RTCEncodedAudioFrameMetadata
/// [`RTCEncodedAudioFrameMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrameMetadata)
class RTCEncodedAudioFrameMetadata : public RTCEncodedFrameMetadata {
  explicit RTCEncodedAudioFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedAudioFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedAudioFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedAudioFrameMetadata() noexcept;
    [[nodiscard]] RTCEncodedAudioFrameMetadata clone() const noexcept;
    [[nodiscard]] short sequenceNumber() const;
    void sequenceNumber(short value);
    [[nodiscard]] double audioLevel() const;
    void audioLevel(double value);
};

} // namespace webbind