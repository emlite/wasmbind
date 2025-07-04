#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


class PerformanceMeasure : public PerformanceEntry {
    explicit PerformanceMeasure(Handle h) noexcept;

public:
    explicit PerformanceMeasure(const emlite::Val &val) noexcept;
    static PerformanceMeasure take_ownership(Handle h) noexcept;

    PerformanceMeasure clone() const noexcept;
    jsbind::Any detail() const;
};

