#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type OfflineAudioContextOptions
/// [`OfflineAudioContextOptions`](https://developer.mozilla.org/en-US/docs/Web/API/OfflineAudioContextOptions)
class OfflineAudioContextOptions : public emlite::Val {
  explicit OfflineAudioContextOptions(Handle h) noexcept;
public:
    static OfflineAudioContextOptions take_ownership(Handle h) noexcept;
    explicit OfflineAudioContextOptions(const emlite::Val &val) noexcept;
    OfflineAudioContextOptions() noexcept;
    [[nodiscard]] OfflineAudioContextOptions clone() const noexcept;
    [[nodiscard]] unsigned long numberOfChannels() const;
    void numberOfChannels(unsigned long value);
    [[nodiscard]] unsigned long length() const;
    void length(unsigned long value);
    [[nodiscard]] float sampleRate() const;
    void sampleRate(float value);
    [[nodiscard]] jsbind::Any renderSizeHint() const;
    void renderSizeHint(const jsbind::Any& value);
};

} // namespace webbind