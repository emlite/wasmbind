#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedAudioFrameMetadata.hpp"

namespace webbind {

/// Dictionary type RTCEncodedAudioFrameOptions
/// [`RTCEncodedAudioFrameOptions`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrameOptions)
class RTCEncodedAudioFrameOptions : public emlite::Val {
  explicit RTCEncodedAudioFrameOptions(Handle h) noexcept;
public:
    static RTCEncodedAudioFrameOptions take_ownership(Handle h) noexcept;
    explicit RTCEncodedAudioFrameOptions(const emlite::Val &val) noexcept;
    RTCEncodedAudioFrameOptions() noexcept;
    [[nodiscard]] RTCEncodedAudioFrameOptions clone() const noexcept;
    [[nodiscard]] RTCEncodedAudioFrameMetadata metadata() const;
    void metadata(const RTCEncodedAudioFrameMetadata& value);
};

} // namespace webbind