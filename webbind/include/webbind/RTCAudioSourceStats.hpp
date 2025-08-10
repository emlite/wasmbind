#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCMediaSourceStats.hpp"

namespace webbind {

/// Dictionary type RTCAudioSourceStats
class RTCAudioSourceStats : public RTCMediaSourceStats {
  explicit RTCAudioSourceStats(Handle h) noexcept;
public:
    static RTCAudioSourceStats take_ownership(Handle h) noexcept;
    explicit RTCAudioSourceStats(const emlite::Val &val) noexcept;
    RTCAudioSourceStats() noexcept;
    [[nodiscard]] RTCAudioSourceStats clone() const noexcept;
    /// Getter of the `audioLevel` attribute.
    [[nodiscard]] double audioLevel() const;
    /// Setter of the `audioLevel` attribute.
    void audioLevel(double value);
    /// Getter of the `totalAudioEnergy` attribute.
    [[nodiscard]] double totalAudioEnergy() const;
    /// Setter of the `totalAudioEnergy` attribute.
    void totalAudioEnergy(double value);
    /// Getter of the `totalSamplesDuration` attribute.
    [[nodiscard]] double totalSamplesDuration() const;
    /// Setter of the `totalSamplesDuration` attribute.
    void totalSamplesDuration(double value);
    /// Getter of the `echoReturnLoss` attribute.
    [[nodiscard]] double echoReturnLoss() const;
    /// Setter of the `echoReturnLoss` attribute.
    void echoReturnLoss(double value);
    /// Getter of the `echoReturnLossEnhancement` attribute.
    [[nodiscard]] double echoReturnLossEnhancement() const;
    /// Setter of the `echoReturnLossEnhancement` attribute.
    void echoReturnLossEnhancement(double value);
};

} // namespace webbind