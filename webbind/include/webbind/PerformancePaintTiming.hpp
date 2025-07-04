#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


class PerformancePaintTiming : public PerformanceEntry {
    explicit PerformancePaintTiming(Handle h) noexcept;

public:
    explicit PerformancePaintTiming(const emlite::Val &val) noexcept;
    static PerformancePaintTiming take_ownership(Handle h) noexcept;

    PerformancePaintTiming clone() const noexcept;
    jsbind::Object toJSON();
    jsbind::Any paintTime() const;
    jsbind::Any presentationTime() const;
};

