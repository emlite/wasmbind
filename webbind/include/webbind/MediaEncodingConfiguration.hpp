#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "MediaConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaEncodingConfiguration
/// [`MediaEncodingConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncodingConfiguration)
class MediaEncodingConfiguration : public MediaConfiguration {
  explicit MediaEncodingConfiguration(Handle h) noexcept;
public:
    static MediaEncodingConfiguration take_ownership(Handle h) noexcept;
    explicit MediaEncodingConfiguration(const emlite::Val &val) noexcept;
    MediaEncodingConfiguration() noexcept;
    [[nodiscard]] MediaEncodingConfiguration clone() const noexcept;
    [[nodiscard]] MediaEncodingType type() const;
    void type(const MediaEncodingType& value);
};

} // namespace webbind