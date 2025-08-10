#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioConfiguration
class AudioConfiguration : public emlite::Val {
  explicit AudioConfiguration(Handle h) noexcept;
public:
    static AudioConfiguration take_ownership(Handle h) noexcept;
    explicit AudioConfiguration(const emlite::Val &val) noexcept;
    AudioConfiguration() noexcept;
    [[nodiscard]] AudioConfiguration clone() const noexcept;
    /// Getter of the `contentType` attribute.
    [[nodiscard]] jsbind::String contentType() const;
    /// Setter of the `contentType` attribute.
    void contentType(const jsbind::String& value);
    /// Getter of the `channels` attribute.
    [[nodiscard]] jsbind::String channels() const;
    /// Setter of the `channels` attribute.
    void channels(const jsbind::String& value);
    /// Getter of the `bitrate` attribute.
    [[nodiscard]] long long bitrate() const;
    /// Setter of the `bitrate` attribute.
    void bitrate(long long value);
    /// Getter of the `samplerate` attribute.
    [[nodiscard]] unsigned long samplerate() const;
    /// Setter of the `samplerate` attribute.
    void samplerate(unsigned long value);
    /// Getter of the `spatialRendering` attribute.
    [[nodiscard]] bool spatialRendering() const;
    /// Setter of the `spatialRendering` attribute.
    void spatialRendering(bool value);
};

} // namespace webbind