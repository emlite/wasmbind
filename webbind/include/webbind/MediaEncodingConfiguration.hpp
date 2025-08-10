#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaEncodingConfiguration
class MediaEncodingConfiguration : public MediaConfiguration {
  explicit MediaEncodingConfiguration(Handle h) noexcept;
public:
    static MediaEncodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaEncodingConfiguration(const emlite::Val &val) noexcept;
    MediaEncodingConfiguration() noexcept;
    [[nodiscard]] MediaEncodingConfiguration clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] MediaEncodingType type() const;
    /// Setter of the `type` attribute.
    void type(const MediaEncodingType& value);
};

} // namespace webbind