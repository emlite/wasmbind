#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioContextOptions
/// [`AudioContextOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioContextOptions)
class AudioContextOptions : public emlite::Val {
  explicit AudioContextOptions(Handle h) noexcept;
public:
    static AudioContextOptions take_ownership(Handle h) noexcept;
    explicit AudioContextOptions(const emlite::Val &val) noexcept;
    AudioContextOptions() noexcept;
    [[nodiscard]] AudioContextOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any latencyHint() const;
    void latencyHint(const jsbind::Any& value);
    [[nodiscard]] float sampleRate() const;
    void sampleRate(float value);
    [[nodiscard]] jsbind::Any sinkId() const;
    void sinkId(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any renderSizeHint() const;
    void renderSizeHint(const jsbind::Any& value);
};

} // namespace webbind