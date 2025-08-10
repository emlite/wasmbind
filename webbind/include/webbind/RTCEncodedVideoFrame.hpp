#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedVideoFrameOptions.hpp"
#include "RTCEncodedVideoFrameMetadata.hpp"
#include "enums.hpp"

namespace webbind {

class RTCEncodedVideoFrame;

/// Interface RTCEncodedVideoFrame
/// [`RTCEncodedVideoFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrame)
class RTCEncodedVideoFrame : public emlite::Val {
    explicit RTCEncodedVideoFrame(Handle h) noexcept;
public:
    explicit RTCEncodedVideoFrame(const emlite::Val &val) noexcept;
    static RTCEncodedVideoFrame take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCEncodedVideoFrame clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCEncodedVideoFrame(..)` constructor, creating a new RTCEncodedVideoFrame instance
    RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame);
    /// The `new RTCEncodedVideoFrame(..)` constructor, creating a new RTCEncodedVideoFrame instance
    RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame, const RTCEncodedVideoFrameOptions& options);
    /// Getter of the `type` attribute.
    /// [`RTCEncodedVideoFrame.type`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrame/type)
    [[nodiscard]] RTCEncodedVideoFrameType type() const;
    /// Getter of the `data` attribute.
    /// [`RTCEncodedVideoFrame.data`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrame/data)
    [[nodiscard]] jsbind::ArrayBuffer data() const;
    /// Setter of the `data` attribute.
    /// [`RTCEncodedVideoFrame.data`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrame/data)
    void data(const jsbind::ArrayBuffer& value);
    /// The getMetadata method.
    /// [`RTCEncodedVideoFrame.getMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrame/getMetadata)
    RTCEncodedVideoFrameMetadata getMetadata();
};

} // namespace webbind