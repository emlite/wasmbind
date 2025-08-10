#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaConfiguration.hpp"

namespace webbind {

class MediaCapabilitiesKeySystemConfiguration;

/// Dictionary type MediaDecodingConfiguration
class MediaDecodingConfiguration : public MediaConfiguration {
  explicit MediaDecodingConfiguration(Handle h) noexcept;
public:
    static MediaDecodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaDecodingConfiguration(const emlite::Val &val) noexcept;
    MediaDecodingConfiguration() noexcept;
    [[nodiscard]] MediaDecodingConfiguration clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] MediaDecodingType type() const;
    /// Setter of the `type` attribute.
    void type(const MediaDecodingType& value);
    /// Getter of the `keySystemConfiguration` attribute.
    [[nodiscard]] MediaCapabilitiesKeySystemConfiguration keySystemConfiguration() const;
    /// Setter of the `keySystemConfiguration` attribute.
    void keySystemConfiguration(const MediaCapabilitiesKeySystemConfiguration& value);
};

} // namespace webbind