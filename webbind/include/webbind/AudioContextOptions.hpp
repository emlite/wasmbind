#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioContextOptions
class AudioContextOptions : public emlite::Val {
  explicit AudioContextOptions(Handle h) noexcept;
public:
    static AudioContextOptions take_ownership(Handle h) noexcept;
    explicit AudioContextOptions(const emlite::Val &val) noexcept;
    AudioContextOptions() noexcept;
    [[nodiscard]] AudioContextOptions clone() const noexcept;
    /// Getter of the `latencyHint` attribute.
    [[nodiscard]] jsbind::Any latencyHint() const;
    /// Setter of the `latencyHint` attribute.
    void latencyHint(const jsbind::Any& value);
    /// Getter of the `sampleRate` attribute.
    [[nodiscard]] float sampleRate() const;
    /// Setter of the `sampleRate` attribute.
    void sampleRate(float value);
    /// Getter of the `sinkId` attribute.
    [[nodiscard]] jsbind::Any sinkId() const;
    /// Setter of the `sinkId` attribute.
    void sinkId(const jsbind::Any& value);
    /// Getter of the `renderSizeHint` attribute.
    [[nodiscard]] jsbind::Any renderSizeHint() const;
    /// Setter of the `renderSizeHint` attribute.
    void renderSizeHint(const jsbind::Any& value);
};

} // namespace webbind