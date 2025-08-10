#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCMediaSourceStats.hpp"

namespace webbind {

/// Dictionary type RTCVideoSourceStats
class RTCVideoSourceStats : public RTCMediaSourceStats {
  explicit RTCVideoSourceStats(Handle h) noexcept;
public:
    static RTCVideoSourceStats take_ownership(Handle h) noexcept;
    explicit RTCVideoSourceStats(const emlite::Val &val) noexcept;
    RTCVideoSourceStats() noexcept;
    [[nodiscard]] RTCVideoSourceStats clone() const noexcept;
    /// Getter of the `width` attribute.
    [[nodiscard]] unsigned long width() const;
    /// Setter of the `width` attribute.
    void width(unsigned long value);
    /// Getter of the `height` attribute.
    [[nodiscard]] unsigned long height() const;
    /// Setter of the `height` attribute.
    void height(unsigned long value);
    /// Getter of the `frames` attribute.
    [[nodiscard]] unsigned long frames() const;
    /// Setter of the `frames` attribute.
    void frames(unsigned long value);
    /// Getter of the `framesPerSecond` attribute.
    [[nodiscard]] double framesPerSecond() const;
    /// Setter of the `framesPerSecond` attribute.
    void framesPerSecond(double value);
};

} // namespace webbind