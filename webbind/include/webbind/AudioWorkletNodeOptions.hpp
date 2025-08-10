#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type AudioWorkletNodeOptions
/// [`AudioWorkletNodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletNodeOptions)
class AudioWorkletNodeOptions : public AudioNodeOptions {
  explicit AudioWorkletNodeOptions(Handle h) noexcept;
public:
    static AudioWorkletNodeOptions take_ownership(Handle h) noexcept;
    explicit AudioWorkletNodeOptions(const emlite::Val &val) noexcept;
    AudioWorkletNodeOptions() noexcept;
    [[nodiscard]] AudioWorkletNodeOptions clone() const noexcept;
    [[nodiscard]] unsigned long numberOfInputs() const;
    void numberOfInputs(unsigned long value);
    [[nodiscard]] unsigned long numberOfOutputs() const;
    void numberOfOutputs(unsigned long value);
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputChannelCount() const;
    void outputChannelCount(jsbind::TypedArray<unsigned long> value);
    [[nodiscard]] jsbind::Record<jsbind::String, double> parameterData() const;
    void parameterData(jsbind::Record<jsbind::String, double> value);
    [[nodiscard]] jsbind::Object processorOptions() const;
    void processorOptions(const jsbind::Object& value);
};

} // namespace webbind