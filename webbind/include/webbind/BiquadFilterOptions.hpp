#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type BiquadFilterOptions
class BiquadFilterOptions : public AudioNodeOptions {
  explicit BiquadFilterOptions(Handle h) noexcept;
public:
    static BiquadFilterOptions take_ownership(Handle h) noexcept;
    explicit BiquadFilterOptions(const emlite::Val &val) noexcept;
    BiquadFilterOptions() noexcept;
    [[nodiscard]] BiquadFilterOptions clone() const noexcept;
    /// Getter of the `type` attribute.
    [[nodiscard]] BiquadFilterType type() const;
    /// Setter of the `type` attribute.
    void type(const BiquadFilterType& value);
    /// Getter of the `Q` attribute.
    [[nodiscard]] float Q() const;
    /// Setter of the `Q` attribute.
    void Q(float value);
    /// Getter of the `detune` attribute.
    [[nodiscard]] float detune() const;
    /// Setter of the `detune` attribute.
    void detune(float value);
    /// Getter of the `frequency` attribute.
    [[nodiscard]] float frequency() const;
    /// Setter of the `frequency` attribute.
    void frequency(float value);
    /// Getter of the `gain` attribute.
    [[nodiscard]] float gain() const;
    /// Setter of the `gain` attribute.
    void gain(float value);
};

} // namespace webbind