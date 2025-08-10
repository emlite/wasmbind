#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type AnalyserOptions
class AnalyserOptions : public AudioNodeOptions {
  explicit AnalyserOptions(Handle h) noexcept;
public:
    static AnalyserOptions take_ownership(Handle h) noexcept;
    explicit AnalyserOptions(const emlite::Val &val) noexcept;
    AnalyserOptions() noexcept;
    [[nodiscard]] AnalyserOptions clone() const noexcept;
    /// Getter of the `fftSize` attribute.
    [[nodiscard]] unsigned long fftSize() const;
    /// Setter of the `fftSize` attribute.
    void fftSize(unsigned long value);
    /// Getter of the `maxDecibels` attribute.
    [[nodiscard]] double maxDecibels() const;
    /// Setter of the `maxDecibels` attribute.
    void maxDecibels(double value);
    /// Getter of the `minDecibels` attribute.
    [[nodiscard]] double minDecibels() const;
    /// Setter of the `minDecibels` attribute.
    void minDecibels(double value);
    /// Getter of the `smoothingTimeConstant` attribute.
    [[nodiscard]] double smoothingTimeConstant() const;
    /// Setter of the `smoothingTimeConstant` attribute.
    void smoothingTimeConstant(double value);
};

} // namespace webbind