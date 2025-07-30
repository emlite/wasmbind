#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class TaskAttributionTiming;


class PerformanceLongTaskTiming : public PerformanceEntry {
    explicit PerformanceLongTaskTiming(Handle h) noexcept;

public:
    explicit PerformanceLongTaskTiming(const emlite::Val &val) noexcept;
    static PerformanceLongTaskTiming take_ownership(Handle h) noexcept;

    PerformanceLongTaskTiming clone() const noexcept;
    jsbind::Any startTime() const;
    jsbind::Any duration() const;
    jsbind::String name() const;
    jsbind::String entryType() const;
    jsbind::TypedArray<TaskAttributionTiming> attribution() const;
    jsbind::Object toJSON();
};

