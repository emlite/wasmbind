#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedFrameMetadata.hpp"

namespace webbind {

/// Dictionary type RTCEncodedVideoFrameMetadata
/// [`RTCEncodedVideoFrameMetadata`](https://developer.mozilla.org/en-US/docs/Web/API/RTCEncodedVideoFrameMetadata)
class RTCEncodedVideoFrameMetadata : public RTCEncodedFrameMetadata {
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

} // namespace webbind