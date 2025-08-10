#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface RTCStatsReport
/// [`RTCStatsReport`](https://developer.mozilla.org/en-US/docs/Web/API/RTCStatsReport)
class RTCStatsReport : public emlite::Val {
    explicit RTCStatsReport(Handle h) noexcept;
public:
    explicit RTCStatsReport(const emlite::Val &val) noexcept;
    static RTCStatsReport take_ownership(Handle h) noexcept;
    [[nodiscard]] RTCStatsReport clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind