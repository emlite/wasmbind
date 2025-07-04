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
    jsbind::DOMString name() const;
    jsbind::DOMString entryType() const;
    jsbind::DOMString containerType() const;
    jsbind::DOMString containerSrc() const;
    jsbind::DOMString containerId() const;
    jsbind::DOMString containerName() const;
    jsbind::Object toJSON();
};

