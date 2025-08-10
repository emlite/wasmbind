#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type BiquadFilterOptions
/// [`BiquadFilterOptions`](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterOptions)
class BiquadFilterOptions : public AudioNodeOptions {
  explicit BiquadFilterOptions(Handle h) noexcept;
public:
    static BiquadFilterOptions take_ownership(Handle h) noexcept;
    explicit BiquadFilterOptions(const emlite::Val &val) noexcept;
    BiquadFilterOptions() noexcept;
    [[nodiscard]] BiquadFilterOptions clone() const noexcept;
    [[nodiscard]] BiquadFilterType type() const;
    void type(const BiquadFilterType& value);
    [[nodiscard]] float Q() const;
    void Q(float value);
    [[nodiscard]] float detune() const;
    void detune(float value);
    [[nodiscard]] float frequency() const;
    void frequency(float value);
    [[nodiscard]] float gain() const;
    void gain(float value);
};

} // namespace webbind