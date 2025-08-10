#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class RTCEncodedAudioFrameMetadata;

/// Dictionary type RTCEncodedAudioFrameOptions
class RTCEncodedAudioFrameOptions : public emlite::Val {
  explicit RTCEncodedAudioFrameOptions(Handle h) noexcept;
public:
    static RTCEncodedAudioFrameOptions take_ownership(Handle h) noexcept;
    explicit RTCEncodedAudioFrameOptions(const emlite::Val &val) noexcept;
    RTCEncodedAudioFrameOptions() noexcept;
    [[nodiscard]] RTCEncodedAudioFrameOptions clone() const noexcept;
    /// Getter of the `metadata` attribute.
    [[nodiscard]] RTCEncodedAudioFrameMetadata metadata() const;
    /// Setter of the `metadata` attribute.
    void metadata(const RTCEncodedAudioFrameMetadata& value);
};

} // namespace webbind