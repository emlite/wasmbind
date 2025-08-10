#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type WaveShaperOptions
/// [`WaveShaperOptions`](https://developer.mozilla.org/en-US/docs/Web/API/WaveShaperOptions)
class WaveShaperOptions : public AudioNodeOptions {
  explicit WaveShaperOptions(Handle h) noexcept;
public:
    static WaveShaperOptions take_ownership(Handle h) noexcept;
    explicit WaveShaperOptions(const emlite::Val &val) noexcept;
    WaveShaperOptions() noexcept;
    [[nodiscard]] WaveShaperOptions clone() const noexcept;
    [[nodiscard]] jsbind::TypedArray<float> curve() const;
    void curve(jsbind::TypedArray<float> value);
    [[nodiscard]] OverSampleType oversample() const;
    void oversample(const OverSampleType& value);
};

} // namespace webbind