#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

class PeriodicWave;

/// Dictionary type OscillatorOptions
class OscillatorOptions : public AudioNodeOptions {
  explicit OscillatorOptions(Handle h) noexcept;
public:
    static OscillatorOptions take_ownership(Handle h) noexcept;
    explicit OscillatorOptions(const emlite::Val &val) noexcept;
    OscillatorOptions() noexcept;
    [[nodiscard]] OscillatorOptions clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] OscillatorType type() const;
    /// Setter of the `type` attribute.
    void type(const OscillatorType& value);
    /// Getter of the `frequency` attribute.
    [[nodiscard]] float frequency() const;
    /// Setter of the `frequency` attribute.
    void frequency(float value);
    /// Getter of the `detune` attribute.
    [[nodiscard]] float detune() const;
    /// Setter of the `detune` attribute.
    void detune(float value);
    /// Getter of the `periodicWave` attribute.
    [[nodiscard]] PeriodicWave periodicWave() const;
    /// Setter of the `periodicWave` attribute.
    void periodicWave(const PeriodicWave& value);
};

} // namespace webbind