#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCEncodedFrameMetadata.hpp"

namespace webbind {

/// Dictionary type RTCEncodedVideoFrameMetadata
class RTCEncodedVideoFrameMetadata : public RTCEncodedFrameMetadata {
  explicit RTCEncodedVideoFrameMetadata(Handle h) noexcept;
public:
    static RTCEncodedVideoFrameMetadata take_ownership(Handle h) noexcept;
    explicit RTCEncodedVideoFrameMetadata(const emlite::Val &val) noexcept;
    RTCEncodedVideoFrameMetadata() noexcept;
    [[nodiscard]] RTCEncodedVideoFrameMetadata clone() const noexcept;
    /// Getter of the `frameId` attribute.
    [[nodiscard]] long long frameId() const;
    /// Setter of the `frameId` attribute.
    void frameId(long long value);
    /// Getter of the `dependencies` attribute.
    [[nodiscard]] jsbind::TypedArray<long long> dependencies() const;
    /// Setter of the `dependencies` attribute.
    void dependencies(jsbind::TypedArray<long long> value);
    /// Getter of the `width` attribute.
    [[nodiscard]] unsigned short width() const;
    /// Setter of the `width` attribute.
    void width(unsigned short value);
    /// Getter of the `height` attribute.
    [[nodiscard]] unsigned short height() const;
    /// Setter of the `height` attribute.
    void height(unsigned short value);
    /// Getter of the `spatialIndex` attribute.
    [[nodiscard]] unsigned long spatialIndex() const;
    /// Setter of the `spatialIndex` attribute.
    void spatialIndex(unsigned long value);
    /// Getter of the `temporalIndex` attribute.
    [[nodiscard]] unsigned long temporalIndex() const;
    /// Setter of the `temporalIndex` attribute.
    void temporalIndex(unsigned long value);
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] long long timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(long long value);
};

} // namespace webbind