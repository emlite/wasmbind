#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class EventCounts;
class PerformanceTiming;
class PerformanceNavigation;
class MemoryMeasurement;
class PerformanceMark;
class PerformanceMarkOptions;
class PerformanceMeasure;


class MemoryMeasurement : public emlite::Val {
  explicit MemoryMeasurement(Handle h) noexcept;
public:
    static MemoryMeasurement take_ownership(Handle h) noexcept;
    explicit MemoryMeasurement(const emlite::Val &val) noexcept;
    MemoryMeasurement() noexcept;
    MemoryMeasurement clone() const noexcept;
    long long bytes() const;
    void bytes(long long value);
    jsbind::TypedArray<jsbind::Any> breakdown() const;
    void breakdown(const jsbind::TypedArray<jsbind::Any>& value);
};

class PerformanceMarkOptions : public emlite::Val {
  explicit PerformanceMarkOptions(Handle h) noexcept;
public:
    static PerformanceMarkOptions take_ownership(Handle h) noexcept;
    explicit PerformanceMarkOptions(const emlite::Val &val) noexcept;
    PerformanceMarkOptions() noexcept;
    PerformanceMarkOptions clone() const noexcept;
    jsbind::Any detail() const;
    void detail(const jsbind::Any& value);
    jsbind::Any startTime() const;
    void startTime(const jsbind::Any& value);
};

class Performance : public EventTarget {
    explicit Performance(Handle h) noexcept;

public:
    explicit Performance(const emlite::Val &val) noexcept;
    static Performance take_ownership(Handle h) noexcept;

    Performance clone() const noexcept;
    jsbind::Any now();
    jsbind::Any timeOrigin() const;
    jsbind::Object toJSON();
    EventCounts eventCounts() const;
    long long interactionCount() const;
    PerformanceTiming timing() const;
    PerformanceNavigation navigation() const;
    jsbind::Promise<MemoryMeasurement> measureUserAgentSpecificMemory();
    jsbind::Any getEntries();
    jsbind::Any getEntriesByType(const jsbind::String& type);
    jsbind::Any getEntriesByName(const jsbind::String& name);
    jsbind::Any getEntriesByName(const jsbind::String& name, const jsbind::String& type);
    jsbind::Undefined clearResourceTimings();
    jsbind::Undefined setResourceTimingBufferSize(unsigned long maxSize);
    jsbind::Any onresourcetimingbufferfull() const;
    void onresourcetimingbufferfull(const jsbind::Any& value);
    PerformanceMark mark(const jsbind::String& markName);
    PerformanceMark mark(const jsbind::String& markName, const PerformanceMarkOptions& markOptions);
    jsbind::Undefined clearMarks();
    jsbind::Undefined clearMarks(const jsbind::String& markName);
    PerformanceMeasure measure(const jsbind::String& measureName);
    PerformanceMeasure measure(const jsbind::String& measureName, const jsbind::Any& startOrMeasureOptions);
    PerformanceMeasure measure(const jsbind::String& measureName, const jsbind::Any& startOrMeasureOptions, const jsbind::String& endMark);
    jsbind::Undefined clearMeasures();
    jsbind::Undefined clearMeasures(const jsbind::String& measureName);
};

