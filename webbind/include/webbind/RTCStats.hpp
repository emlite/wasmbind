#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCStats
/// [`RTCStats`](https://developer.mozilla.org/en-US/docs/Web/API/RTCStats)
class RTCStats : public emlite::Val {
  explicit RTCStats(Handle h) noexcept;
public:
    static RTCStats take_ownership(Handle h) noexcept;
    explicit RTCStats(const emlite::Val &val) noexcept;
    RTCStats() noexcept;
    [[nodiscard]] RTCStats clone() const noexcept;
    [[nodiscard]] jsbind::Any timestamp() const;
    void timestamp(const jsbind::Any& value);
    [[nodiscard]] RTCStatsType type() const;
    void type(const RTCStatsType& value);
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
};

} // namespace webbind