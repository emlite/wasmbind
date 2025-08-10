#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type AudioWorkletNodeOptions
class AudioWorkletNodeOptions : public AudioNodeOptions {
  explicit AudioWorkletNodeOptions(Handle h) noexcept;
public:
    static AudioWorkletNodeOptions take_ownership(Handle h) noexcept;
    explicit AudioWorkletNodeOptions(const emlite::Val &val) noexcept;
    AudioWorkletNodeOptions() noexcept;
    [[nodiscard]] AudioWorkletNodeOptions clone() const noexcept;
    /// Getter of the `numberOfInputs` attribute.
    [[nodiscard]] unsigned long numberOfInputs() const;
    /// Setter of the `numberOfInputs` attribute.
    void numberOfInputs(unsigned long value);
    /// Getter of the `numberOfOutputs` attribute.
    [[nodiscard]] unsigned long numberOfOutputs() const;
    /// Setter of the `numberOfOutputs` attribute.
    void numberOfOutputs(unsigned long value);
    /// Getter of the `outputChannelCount` attribute.
    [[nodiscard]] jsbind::TypedArray<unsigned long> outputChannelCount() const;
    /// Setter of the `outputChannelCount` attribute.
    void outputChannelCount(jsbind::TypedArray<unsigned long> value);
    /// Getter of the `parameterData` attribute.
    [[nodiscard]] jsbind::Record<jsbind::String, double> parameterData() const;
    /// Setter of the `parameterData` attribute.
    void parameterData(jsbind::Record<jsbind::String, double> value);
    /// Getter of the `processorOptions` attribute.
    [[nodiscard]] jsbind::Object processorOptions() const;
    /// Setter of the `processorOptions` attribute.
    void processorOptions(const jsbind::Object& value);
};

} // namespace webbind