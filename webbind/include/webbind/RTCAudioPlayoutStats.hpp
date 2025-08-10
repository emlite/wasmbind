#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCAudioPlayoutStats
/// [`RTCAudioPlayoutStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCAudioPlayoutStats)
class RTCAudioPlayoutStats : public RTCStats {
  explicit RTCAudioPlayoutStats(Handle h) noexcept;
public:
    static RTCAudioPlayoutStats take_ownership(Handle h) noexcept;
    explicit RTCAudioPlayoutStats(const emlite::Val &val) noexcept;
    RTCAudioPlayoutStats() noexcept;
    [[nodiscard]] RTCAudioPlayoutStats clone() const noexcept;
    [[nodiscard]] jsbind::String kind() const;
    void kind(const jsbind::String& value);
    [[nodiscard]] double synthesizedSamplesDuration() const;
    void synthesizedSamplesDuration(double value);
    [[nodiscard]] unsigned long synthesizedSamplesEvents() const;
    void synthesizedSamplesEvents(unsigned long value);
    [[nodiscard]] double totalSamplesDuration() const;
    void totalSamplesDuration(double value);
    [[nodiscard]] double totalPlayoutDelay() const;
    void totalPlayoutDelay(double value);
    [[nodiscard]] long long totalSamplesCount() const;
    void totalSamplesCount(long long value);
};

} // namespace webbind