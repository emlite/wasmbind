#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class PerformanceScriptTiming;


class PerformanceLongAnimationFrameTiming : public PerformanceEntry {
    explicit PerformanceLongAnimationFrameTiming(Handle h) noexcept;

public:
    explicit PerformanceLongAnimationFrameTiming(const emlite::Val &val) noexcept;
    static PerformanceLongAnimationFrameTiming take_ownership(Handle h) noexcept;

    PerformanceLongAnimationFrameTiming clone() const noexcept;
    jsbind::Any startTime() const;
    jsbind::Any duration() const;
    jsbind::DOMString name() const;
    jsbind::DOMString entryType() const;
    jsbind::Any renderStart() const;
    jsbind::Any styleAndLayoutStart() const;
    jsbind::Any blockingDuration() const;
    jsbind::Any firstUIEventTimestamp() const;
    jsbind::FrozenArray<PerformanceScriptTiming> scripts() const;
    jsbind::Object toJSON();
    jsbind::Any paintTime() const;
    jsbind::Any presentationTime() const;
};

