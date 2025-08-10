#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OfflineAudioContextOptions
class OfflineAudioContextOptions : public emlite::Val {
  explicit OfflineAudioContextOptions(Handle h) noexcept;
public:
    static OfflineAudioContextOptions take_ownership(Handle h) noexcept;
    explicit OfflineAudioContextOptions(const emlite::Val &val) noexcept;
    OfflineAudioContextOptions() noexcept;
    [[nodiscard]] OfflineAudioContextOptions clone() const noexcept;
    /// Getter of the `numberOfChannels` attribute.
    [[nodiscard]] unsigned long numberOfChannels() const;
    /// Setter of the `numberOfChannels` attribute.
    void numberOfChannels(unsigned long value);
    /// Getter of the `length` attribute.
    [[nodiscard]] unsigned long length() const;
    /// Setter of the `length` attribute.
    void length(unsigned long value);
    /// Getter of the `sampleRate` attribute.
    [[nodiscard]] float sampleRate() const;
    /// Setter of the `sampleRate` attribute.
    void sampleRate(float value);
    /// Getter of the `renderSizeHint` attribute.
    [[nodiscard]] jsbind::Any renderSizeHint() const;
    /// Setter of the `renderSizeHint` attribute.
    void renderSizeHint(const jsbind::Any& value);
};

} // namespace webbind