#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCAudioPlayoutStats
class RTCAudioPlayoutStats : public RTCStats {
  explicit RTCAudioPlayoutStats(Handle h) noexcept;
public:
    static RTCAudioPlayoutStats take_ownership(Handle h) noexcept;
    explicit RTCAudioPlayoutStats(const emlite::Val &val) noexcept;
    RTCAudioPlayoutStats() noexcept;
    [[nodiscard]] RTCAudioPlayoutStats clone() const noexcept;
    /// Getter of the `kind` attribute.
    [[nodiscard]] jsbind::String kind() const;
    /// Setter of the `kind` attribute.
    void kind(const jsbind::String& value);
    /// Getter of the `synthesizedSamplesDuration` attribute.
    [[nodiscard]] double synthesizedSamplesDuration() const;
    /// Setter of the `synthesizedSamplesDuration` attribute.
    void synthesizedSamplesDuration(double value);
    /// Getter of the `synthesizedSamplesEvents` attribute.
    [[nodiscard]] unsigned long synthesizedSamplesEvents() const;
    /// Setter of the `synthesizedSamplesEvents` attribute.
    void synthesizedSamplesEvents(unsigned long value);
    /// Getter of the `totalSamplesDuration` attribute.
    [[nodiscard]] double totalSamplesDuration() const;
    /// Setter of the `totalSamplesDuration` attribute.
    void totalSamplesDuration(double value);
    /// Getter of the `totalPlayoutDelay` attribute.
    [[nodiscard]] double totalPlayoutDelay() const;
    /// Setter of the `totalPlayoutDelay` attribute.
    void totalPlayoutDelay(double value);
    /// Getter of the `totalSamplesCount` attribute.
    [[nodiscard]] long long totalSamplesCount() const;
    /// Setter of the `totalSamplesCount` attribute.
    void totalSamplesCount(long long value);
};

} // namespace webbind