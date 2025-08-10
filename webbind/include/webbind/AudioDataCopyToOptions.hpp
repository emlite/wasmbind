#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDataCopyToOptions
/// [`AudioDataCopyToOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioDataCopyToOptions)
class AudioDataCopyToOptions : public emlite::Val {
  explicit AudioDataCopyToOptions(Handle h) noexcept;
public:
    static AudioDataCopyToOptions take_ownership(Handle h) noexcept;
    explicit AudioDataCopyToOptions(const emlite::Val &val) noexcept;
    AudioDataCopyToOptions() noexcept;
    [[nodiscard]] AudioDataCopyToOptions clone() const noexcept;
    [[nodiscard]] unsigned long planeIndex() const;
    void planeIndex(unsigned long value);
    [[nodiscard]] unsigned long frameOffset() const;
    void frameOffset(unsigned long value);
    [[nodiscard]] unsigned long frameCount() const;
    void frameCount(unsigned long value);
    [[nodiscard]] AudioSampleFormat format() const;
    void format(const AudioSampleFormat& value);
};

} // namespace webbind