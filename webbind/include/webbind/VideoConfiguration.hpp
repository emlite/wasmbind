#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type VideoConfiguration
class VideoConfiguration : public emlite::Val {
  explicit VideoConfiguration(Handle h) noexcept;
public:
    static VideoConfiguration take_ownership(Handle h) noexcept;
    explicit VideoConfiguration(const emlite::Val &val) noexcept;
    VideoConfiguration() noexcept;
    [[nodiscard]] VideoConfiguration clone() const noexcept;
    /// Getter of the `contentType` attribute.
    [[nodiscard]] jsbind::String contentType() const;
    /// Setter of the `contentType` attribute.
    void contentType(const jsbind::String& value);
    /// Getter of the `width` attribute.
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    void height(unsigned long value);
    /// Getter of the `bitrate` attribute.
    [[nodiscard]] long long bitrate() const;
    /// Setter of the `bitrate` attribute.
    void bitrate(long long value);
    /// Getter of the `framerate` attribute.
    [[nodiscard]] double framerate() const;
    /// Setter of the `framerate` attribute.
    void framerate(double value);
    /// Getter of the `hasAlphaChannel` attribute.
    [[nodiscard]] bool hasAlphaChannel() const;
    /// Setter of the `hasAlphaChannel` attribute.
    void hasAlphaChannel(bool value);
    /// Getter of the `hdrMetadataType` attribute.
    [[nodiscard]] HdrMetadataType hdrMetadataType() const;
    /// Setter of the `hdrMetadataType` attribute.
    void hdrMetadataType(const HdrMetadataType& value);
    /// Getter of the `colorGamut` attribute.
    [[nodiscard]] ColorGamut colorGamut() const;
    /// Setter of the `colorGamut` attribute.
    void colorGamut(const ColorGamut& value);
    /// Getter of the `transferFunction` attribute.
    [[nodiscard]] TransferFunction transferFunction() const;
    /// Setter of the `transferFunction` attribute.
    void transferFunction(const TransferFunction& value);
    /// Getter of the `scalabilityMode` attribute.
    [[nodiscard]] jsbind::String scalabilityMode() const;
    /// Setter of the `scalabilityMode` attribute.
    void scalabilityMode(const jsbind::String& value);
    /// Getter of the `spatialScalability` attribute.
    [[nodiscard]] bool spatialScalability() const;
    /// Setter of the `spatialScalability` attribute.
    void spatialScalability(bool value);
};

} // namespace webbind