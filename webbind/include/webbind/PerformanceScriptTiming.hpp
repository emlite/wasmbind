#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class Window;


class PerformanceScriptTiming : public PerformanceEntry {
    explicit PerformanceScriptTiming(Handle h) noexcept;

public:
    explicit PerformanceScriptTiming(const emlite::Val &val) noexcept;
    static PerformanceScriptTiming take_ownership(Handle h) noexcept;

    PerformanceScriptTiming clone() const noexcept;
    jsbind::Any startTime() const;
    jsbind::Any duration() const;
    jsbind::String name() const;
    jsbind::String entryType() const;
    ScriptInvokerType invokerType() const;
    jsbind::String invoker() const;
    jsbind::Any executionStart() const;
    jsbind::String sourceURL() const;
    jsbind::String sourceFunctionName() const;
    long long sourceCharPosition() const;
    jsbind::Any pauseDuration() const;
    jsbind::Any forcedStyleAndLayoutDuration() const;
    Window window() const;
    ScriptWindowAttribution windowAttribution() const;
    jsbind::Object toJSON();
};

