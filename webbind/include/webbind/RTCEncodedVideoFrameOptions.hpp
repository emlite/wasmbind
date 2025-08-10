#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedVideoFrameMetadata.hpp"

namespace webbind {

/// Dictionary type RTCEncodedVideoFrameOptions
class RTCEncodedVideoFrameOptions : public emlite::Val {
  explicit RTCEncodedVideoFrameOptions(Handle h) noexcept;
public:
    static RTCEncodedVideoFrameOptions take_ownership(Handle h) noexcept;
    explicit RTCEncodedVideoFrameOptions(const emlite::Val &val) noexcept;
    RTCEncodedVideoFrameOptions() noexcept;
    [[nodiscard]] RTCEncodedVideoFrameOptions clone() const noexcept;
    /// Getter of the `metadata` attribute.
    [[nodiscard]] RTCEncodedVideoFrameMetadata metadata() const;
    /// Setter of the `metadata` attribute.
    void metadata(const RTCEncodedVideoFrameMetadata& value);
};

} // namespace webbind