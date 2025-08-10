#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "AudioNodeOptions.hpp"

namespace webbind {

/// Dictionary type AnalyserOptions
/// [`AnalyserOptions`](https://developer.mozilla.org/en-US/docs/Web/API/AnalyserOptions)
class AnalyserOptions : public AudioNodeOptions {
  explicit AnalyserOptions(Handle h) noexcept;
public:
    static AnalyserOptions take_ownership(Handle h) noexcept;
    explicit AnalyserOptions(const emlite::Val &val) noexcept;
    AnalyserOptions() noexcept;
    [[nodiscard]] AnalyserOptions clone() const noexcept;
    [[nodiscard]] unsigned long fftSize() const;
    void fftSize(unsigned long value);
    [[nodiscard]] double maxDecibels() const;
    void maxDecibels(double value);
    [[nodiscard]] double minDecibels() const;
    void minDecibels(double value);
    [[nodiscard]] double smoothingTimeConstant() const;
    void smoothingTimeConstant(double value);
};

} // namespace webbind