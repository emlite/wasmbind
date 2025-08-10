#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCMediaSourceStats
class RTCMediaSourceStats : public RTCStats {
  explicit RTCMediaSourceStats(Handle h) noexcept;
public:
    static RTCMediaSourceStats take_ownership(Handle h) noexcept;
    explicit RTCMediaSourceStats(const emlite::Val &val) noexcept;
    RTCMediaSourceStats() noexcept;
    [[nodiscard]] RTCMediaSourceStats clone() const noexcept;
    /// Getter of the `trackIdentifier` attribute.
    [[nodiscard]] jsbind::String trackIdentifier() const;
    /// Setter of the `trackIdentifier` attribute.
    void trackIdentifier(const jsbind::String& value);
    /// Getter of the `kind` attribute.
    [[nodiscard]] jsbind::String kind() const;
    /// Setter of the `kind` attribute.
    void kind(const jsbind::String& value);
};

} // namespace webbind