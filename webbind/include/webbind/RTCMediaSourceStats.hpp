#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "RTCStats.hpp"

namespace webbind {

/// Dictionary type RTCMediaSourceStats
/// [`RTCMediaSourceStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCMediaSourceStats)
class RTCMediaSourceStats : public RTCStats {
  explicit RTCMediaSourceStats(Handle h) noexcept;
public:
    static RTCMediaSourceStats take_ownership(Handle h) noexcept;
    explicit RTCMediaSourceStats(const emlite::Val &val) noexcept;
    RTCMediaSourceStats() noexcept;
    [[nodiscard]] RTCMediaSourceStats clone() const noexcept;
    [[nodiscard]] jsbind::String trackIdentifier() const;
    void trackIdentifier(const jsbind::String& value);
    [[nodiscard]] jsbind::String kind() const;
    void kind(const jsbind::String& value);
};

} // namespace webbind