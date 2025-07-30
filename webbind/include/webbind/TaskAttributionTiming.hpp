#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


class TaskAttributionTiming : public PerformanceEntry {
    explicit TaskAttributionTiming(Handle h) noexcept;

public:
    explicit TaskAttributionTiming(const emlite::Val &val) noexcept;
    static TaskAttributionTiming take_ownership(Handle h) noexcept;

    TaskAttributionTiming clone() const noexcept;
    jsbind::Any startTime() const;
    jsbind::Any duration() const;
    jsbind::String name() const;
    jsbind::String entryType() const;
    jsbind::String containerType() const;
    jsbind::String containerSrc() const;
    jsbind::String containerId() const;
    jsbind::String containerName() const;
    jsbind::Object toJSON();
};

