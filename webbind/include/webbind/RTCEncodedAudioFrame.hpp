#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedAudioFrameOptions.hpp"
#include "RTCEncodedAudioFrameMetadata.hpp"

namespace webbind {

class RTCEncodedAudioFrame;

/// Interface RTCEncodedAudioFrame
/// [`RTCEncodedAudioFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame)
class RTCEncodedAudioFrame : public emlite::Val {
    explicit RTCEncodedAudioFrame(Handle h) noexcept;
public:
    explicit RTCEncodedAudioFrame(const emlite::Val &val) noexcept;
    static RTCEncodedAudioFrame take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCEncodedAudioFrame clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new RTCEncodedAudioFrame(..)` constructor, creating a new RTCEncodedAudioFrame instance
    RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame);
    /// The `new RTCEncodedAudioFrame(..)` constructor, creating a new RTCEncodedAudioFrame instance
    RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame, const RTCEncodedAudioFrameOptions& options);
    /// [`RTCEncodedAudioFrame.data`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame/data)
    /// [`RTCEncodedAudioFrame.data`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame/data)
    [[nodiscard]] jsbind::ArrayBuffer data() const;
    /// Setter of the `data` attribute.
    /// [`RTCEncodedAudioFrame.data`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame/data)
    void data(const jsbind::ArrayBuffer& value);
    /// The getMetadata method.
    /// [`RTCEncodedAudioFrame.getMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame/getMetadata)
    RTCEncodedAudioFrameMetadata getMetadata();
};

} // namespace webbind