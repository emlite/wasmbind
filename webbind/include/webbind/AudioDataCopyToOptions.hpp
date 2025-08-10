#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AudioDataCopyToOptions
class AudioDataCopyToOptions : public emlite::Val {
  explicit AudioDataCopyToOptions(Handle h) noexcept;
public:
    static AudioDataCopyToOptions take_ownership(Handle h) noexcept;
    explicit AudioDataCopyToOptions(const emlite::Val &val) noexcept;
    AudioDataCopyToOptions() noexcept;
    [[nodiscard]] AudioDataCopyToOptions clone() const noexcept;
    /// Getter of the `planeIndex` attribute.
    [[nodiscard]] unsigned long planeIndex() const;
    /// Setter of the `planeIndex` attribute.
    void planeIndex(unsigned long value);
    /// Getter of the `frameOffset` attribute.
    [[nodiscard]] unsigned long frameOffset() const;
    /// Setter of the `frameOffset` attribute.
    void frameOffset(unsigned long value);
    /// Getter of the `frameCount` attribute.
    [[nodiscard]] unsigned long frameCount() const;
    /// Setter of the `frameCount` attribute.
    void frameCount(unsigned long value);
    /// Getter of the `format` attribute.
    [[nodiscard]] AudioSampleFormat format() const;
    /// Setter of the `format` attribute.
    void format(const AudioSampleFormat& value);
};

} // namespace webbind