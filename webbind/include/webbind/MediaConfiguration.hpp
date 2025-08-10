#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoConfiguration.hpp"
#include "AudioConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaConfiguration
class MediaConfiguration : public emlite::Val {
  explicit MediaConfiguration(Handle h) noexcept;
public:
    static MediaConfiguration take_ownership(Handle h) noexcept;
    explicit MediaConfiguration(const emlite::Val &val) noexcept;
    MediaConfiguration() noexcept;
    [[nodiscard]] MediaConfiguration clone() const noexcept;
    /// Getter of the `video` attribute.
    [[nodiscard]] VideoConfiguration video() const;
    /// Setter of the `video` attribute.
    void video(const VideoConfiguration& value);
    /// Getter of the `audio` attribute.
    [[nodiscard]] AudioConfiguration audio() const;
    /// Setter of the `audio` attribute.
    void audio(const AudioConfiguration& value);
};

} // namespace webbind