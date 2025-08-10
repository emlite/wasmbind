#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

class PeriodicWave;

/// Dictionary type OscillatorOptions
/// [`OscillatorOptions`](https://developer.mozilla.org/en-US/docs/Web/API/OscillatorOptions)
class OscillatorOptions : public AudioNodeOptions {
  explicit OscillatorOptions(Handle h) noexcept;
public:
    static OscillatorOptions take_ownership(Handle h) noexcept;
    explicit OscillatorOptions(const emlite::Val &val) noexcept;
    OscillatorOptions() noexcept;
    [[nodiscard]] OscillatorOptions clone() const noexcept;
    [[nodiscard]] OscillatorType type() const;
    void type(const OscillatorType& value);
    [[nodiscard]] float frequency() const;
    void frequency(float value);
    [[nodiscard]] float detune() const;
    void detune(float value);
    [[nodiscard]] PeriodicWave periodicWave() const;
    void periodicWave(const PeriodicWave& value);
};

} // namespace webbind