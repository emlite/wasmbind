#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCEncodedVideoFrameMetadata;


class RTCEncodedVideoFrameMetadata : public emlite::Val {
  explicit RTCEncodedVideoFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedVideoFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedVideoFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedVideoFrameMetadata() noexcept;
    [[nodiscard]] RTCEncodedVideoFrameMetadata clone() const noexcept;
    [[nodiscard]] long long frameId() const;
    void frameId(long long value);
    [[nodiscard]] jsbind::TypedArray<long long> dependencies() const;
    void dependencies(jsbind::TypedArray<long long> value);
    [[nodiscard]] unsigned short width() const;
    void width(unsigned short value);
    [[nodiscard]] unsigned short height() const;
    void height(unsigned short value);
    [[nodiscard]] unsigned long spatialIndex() const;
    void spatialIndex(unsigned long value);
    [[nodiscard]] unsigned long temporalIndex() const;
    void temporalIndex(unsigned long value);
    [[nodiscard]] long long timestamp() const;
    void timestamp(long long value);
};

/// The RTCEncodedVideoFrame class.
/// [`RTCEncodedVideoFrame`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrame)
class RTCEncodedVideoFrame : public emlite::Val {
    explicit RTCEncodedVideoFrame(Handle h) noexcept;

public:
    explicit RTCEncodedVideoFrame(const emlite::Val &val) noexcept;
    static RTCEncodedVideoFrame take_ownership(Handle h) noexcept;

    [[nodiscard]] RTCEncodedVideoFrame clone() const noexcept;
    /// The `new RTCEncodedVideoFrame(..)` constructor, creating a new RTCEncodedVideoFrame instance
    RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame);
    /// The `new RTCEncodedVideoFrame(..)` constructor, creating a new RTCEncodedVideoFrame instance
    RTCEncodedVideoFrame(const RTCEncodedVideoFrame& originalFrame, const jsbind::Any& options);
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

