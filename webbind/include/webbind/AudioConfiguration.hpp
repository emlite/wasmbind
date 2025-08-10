#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioConfiguration
/// [`AudioConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/AudioConfiguration)
class AudioConfiguration : public emlite::Val {
  explicit AudioConfiguration(Handle h) noexcept;
public:
    static AudioConfiguration take_ownership(Handle h) noexcept;
    explicit AudioConfiguration(const emlite::Val &val) noexcept;
    AudioConfiguration() noexcept;
    [[nodiscard]] AudioConfiguration clone() const noexcept;
    [[nodiscard]] jsbind::String contentType() const;
    void contentType(const jsbind::String& value);
    [[nodiscard]] jsbind::String channels() const;
    void channels(const jsbind::String& value);
    [[nodiscard]] long long bitrate() const;
    void bitrate(long long value);
    [[nodiscard]] unsigned long samplerate() const;
    void samplerate(unsigned long value);
    [[nodiscard]] bool spatialRendering() const;
    void spatialRendering(bool value);
};

} // namespace webbind