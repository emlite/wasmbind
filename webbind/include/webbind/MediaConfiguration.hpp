#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "VideoConfiguration.hpp"
#include "AudioConfiguration.hpp"

namespace webbind {

/// Dictionary type MediaConfiguration
/// [`MediaConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/MediaConfiguration)
class MediaConfiguration : public emlite::Val {
  explicit MediaConfiguration(Handle h) noexcept;
public:
    static MediaConfiguration take_ownership(Handle h) noexcept;
    explicit MediaConfiguration(const emlite::Val &val) noexcept;
    MediaConfiguration() noexcept;
    [[nodiscard]] MediaConfiguration clone() const noexcept;
    [[nodiscard]] VideoConfiguration video() const;
    void video(const VideoConfiguration& value);
    [[nodiscard]] AudioConfiguration audio() const;
    void audio(const AudioConfiguration& value);
};

} // namespace webbind