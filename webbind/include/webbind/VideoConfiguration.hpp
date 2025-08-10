#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoConfiguration
/// [`VideoConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/VideoConfiguration)
class VideoConfiguration : public emlite::Val {
  explicit VideoConfiguration(Handle h) noexcept;
public:
    static VideoConfiguration take_ownership(Handle h) noexcept;
    explicit VideoConfiguration(const emlite::Val &val) noexcept;
    VideoConfiguration() noexcept;
    [[nodiscard]] VideoConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::String contentType() const;
    void contentType(const jsbind::String& value);
    [[nodiscard]] unsigned long width() const;
    void width(unsigned long value);
    [[nodiscard]] unsigned long height() const;
    void height(unsigned long value);
    [[nodiscard]] long long bitrate() const;
    void bitrate(long long value);
    [[nodiscard]] double framerate() const;
    void framerate(double value);
    [[nodiscard]] bool hasAlphaChannel() const;
    void hasAlphaChannel(bool value);
    [[nodiscard]] HdrMetadataType hdrMetadataType() const;
    void hdrMetadataType(const HdrMetadataType& value);
    [[nodiscard]] ColorGamut colorGamut() const;
    void colorGamut(const ColorGamut& value);
    [[nodiscard]] TransferFunction transferFunction() const;
    void transferFunction(const TransferFunction& value);
    [[nodiscard]] jsbind::String scalabilityMode() const;
    void scalabilityMode(const jsbind::String& value);
    [[nodiscard]] bool spatialScalability() const;
    void spatialScalability(bool value);
};

} // namespace webbind