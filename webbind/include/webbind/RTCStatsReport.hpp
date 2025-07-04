#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class RTCStatsReport : public emlite::Val {
    explicit RTCStatsReport(Handle h) noexcept;

public:
    explicit RTCStatsReport(const emlite::Val &val) noexcept;
    static RTCStatsReport take_ownership(Handle h) noexcept;

    RTCStatsReport clone() const noexcept;
};

