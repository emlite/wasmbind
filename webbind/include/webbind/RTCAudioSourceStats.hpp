#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCMediaSourceStats.hpp"

namespace webbind {

/// Dictionary type RTCAudioSourceStats
/// [`RTCAudioSourceStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCAudioSourceStats)
class RTCAudioSourceStats : public RTCMediaSourceStats {
  explicit RTCAudioSourceStats(Handle h) noexcept;
public:
    static RTCAudioSourceStats take_ownership(Handle h) noexcept;
    explicit RTCAudioSourceStats(const emlite::Val &val) noexcept;
    RTCAudioSourceStats() noexcept;
    [[nodiscard]] RTCAudioSourceStats clone() const noexcept;
    [[nodiscard]] double audioLevel() const;
    void audioLevel(double value);
    [[nodiscard]] double totalAudioEnergy() const;
    void totalAudioEnergy(double value);
    [[nodiscard]] double totalSamplesDuration() const;
    void totalSamplesDuration(double value);
    [[nodiscard]] double echoReturnLoss() const;
    void echoReturnLoss(double value);
    [[nodiscard]] double echoReturnLossEnhancement() const;
    void echoReturnLossEnhancement(double value);
};

} // namespace webbind