#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type DynamicsCompressorOptions
class DynamicsCompressorOptions : public AudioNodeOptions {
  explicit DynamicsCompressorOptions(Handle h) noexcept;
public:
    static DynamicsCompressorOptions take_ownership(Handle h) noexcept;
    explicit DynamicsCompressorOptions(const emlite::Val &val) noexcept;
    DynamicsCompressorOptions() noexcept;
    [[nodiscard]] DynamicsCompressorOptions clone() const noexcept;
    /// Getter of the `attack` attribute.
    [[nodiscard]] float attack() const;
    /// Setter of the `attack` attribute.
    void attack(float value);
    /// Getter of the `knee` attribute.
    [[nodiscard]] float knee() const;
    /// Setter of the `knee` attribute.
    void knee(float value);
    /// Getter of the `ratio` attribute.
    [[nodiscard]] float ratio() const;
    /// Setter of the `ratio` attribute.
    void ratio(float value);
    /// Getter of the `release` attribute.
    [[nodiscard]] float release() const;
    /// Setter of the `release` attribute.
    void release(float value);
    /// Getter of the `threshold` attribute.
    [[nodiscard]] float threshold() const;
    /// Setter of the `threshold` attribute.
    void threshold(float value);
};

} // namespace webbind