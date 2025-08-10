#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCMediaSourceStats.hpp"

namespace webbind {

/// Dictionary type RTCVideoSourceStats
/// [`RTCVideoSourceStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCVideoSourceStats)
class RTCVideoSourceStats : public RTCMediaSourceStats {
  explicit RTCVideoSourceStats(Handle h) noexcept;
public:
    static RTCVideoSourceStats take_ownership(Handle h) noexcept;
    explicit RTCVideoSourceStats(const emlite::Val &val) noexcept;
    RTCVideoSourceStats() noexcept;
    [[nodiscard]] RTCVideoSourceStats clone() const noexcept;
    [[nodiscard]] unsigned long width() const;
    void width(unsigned long value);
    [[nodiscard]] unsigned long height() const;
    void height(unsigned long value);
    [[nodiscard]] unsigned long frames() const;
    void frames(unsigned long value);
    [[nodiscard]] double framesPerSecond() const;
    void framesPerSecond(double value);
};

} // namespace webbind