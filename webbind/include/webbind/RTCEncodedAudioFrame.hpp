#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCEncodedAudioFrameMetadata;


class RTCEncodedAudioFrameMetadata : public emlite::Val {
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

/// The RTCEncodedAudioFrame class.
/// [`RTCEncodedAudioFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame)
class RTCEncodedAudioFrame : public emlite::Val {
    explicit RTCEncodedAudioFrame(Handle h) noexcept;

public:
    explicit RTCEncodedAudioFrame(const emlite::Val &val) noexcept;
    static RTCEncodedAudioFrame take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCEncodedAudioFrame clone() const noexcept;
    /// The `new RTCEncodedAudioFrame(..)` constructor, creating a new RTCEncodedAudioFrame instance
    RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame);
    /// The `new RTCEncodedAudioFrame(..)` constructor, creating a new RTCEncodedAudioFrame instance
    RTCEncodedAudioFrame(const RTCEncodedAudioFrame& originalFrame, const jsbind::Any& options);
    /// Getter of the `data` attribute.
    /// [`RTCEncodedAudioFrame.data`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame/data)
    [[nodiscard]] jsbind::ArrayBuffer data() const;
    /// Setter of the `data` attribute.
    /// [`RTCEncodedAudioFrame.data`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame/data)
    void data(const jsbind::ArrayBuffer& value);
    /// The getMetadata method.
    /// [`RTCEncodedAudioFrame.getMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedAudioFrame/getMetadata)
    RTCEncodedAudioFrameMetadata getMetadata();
};

