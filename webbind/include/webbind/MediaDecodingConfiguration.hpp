#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaConfiguration.hpp"
#include "MediaCapabilitiesKeySystemConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaDecodingConfiguration
/// [`MediaDecodingConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaDecodingConfiguration)
class MediaDecodingConfiguration : public MediaConfiguration {
  explicit MediaDecodingConfiguration(Handle h) noexcept;
public:
    static MediaDecodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaDecodingConfiguration(const emlite::Val &val) noexcept;
    MediaDecodingConfiguration() noexcept;
    [[nodiscard]] MediaDecodingConfiguration clone() const noexcept;
    [[nodiscard]] MediaDecodingType type() const;
    void type(const MediaDecodingType& value);
    [[nodiscard]] MediaCapabilitiesKeySystemConfiguration keySystemConfiguration() const;
    void keySystemConfiguration(const MediaCapabilitiesKeySystemConfiguration& value);
};

} // namespace webbind