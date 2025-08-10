#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RTCStats
class RTCStats : public emlite::Val {
  explicit RTCStats(Handle h) noexcept;
public:
    static RTCStats take_ownership(Handle h) noexcept;
    explicit RTCStats(const emlite::Val &val) noexcept;
    RTCStats() noexcept;
    [[nodiscard]] RTCStats clone() const noexcept;
    /// Getter of the `timestamp` attribute.
    [[nodiscard]] jsbind::Any timestamp() const;
    /// Setter of the `timestamp` attribute.
    void timestamp(const jsbind::Any& value);
    /// Getter of the `type` attribute.
    [[nodiscard]] RTCStatsType type() const;
    /// Setter of the `type` attribute.
    void type(const RTCStatsType& value);
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
};

} // namespace webbind