#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type WaveShaperOptions
class WaveShaperOptions : public AudioNodeOptions {
  explicit WaveShaperOptions(Handle h) noexcept;
public:
    static WaveShaperOptions take_ownership(Handle h) noexcept;
    explicit WaveShaperOptions(const emlite::Val &val) noexcept;
    WaveShaperOptions() noexcept;
    [[nodiscard]] WaveShaperOptions clone() const noexcept;
    /// Getter of the `curve` attribute.
    [[nodiscard]] jsbind::TypedArray<float> curve() const;
    /// Setter of the `curve` attribute.
    void curve(jsbind::TypedArray<float> value);
    /// Getter of the `oversample` attribute.
    [[nodiscard]] OverSampleType oversample() const;
    /// Setter of the `oversample` attribute.
    void oversample(const OverSampleType& value);
};

} // namespace webbind