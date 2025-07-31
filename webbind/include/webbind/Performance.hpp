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
    [[nodiscard]] MemoryMeasurement clone() const noexcept;
    [[nodiscard]] long long bytes() const;
    void bytes(long long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> breakdown() const;
    void breakdown(const jsbind::TypedArray<jsbind::Any>& value);
};

class PerformanceMarkOptions : public emlite::Val {
  explicit PerformanceMarkOptions(Handle h) noexcept;
public:
    static PerformanceMarkOptions take_ownership(Handle h) noexcept;
    explicit PerformanceMarkOptions(const emlite::Val &val) noexcept;
    PerformanceMarkOptions() noexcept;
    [[nodiscard]] PerformanceMarkOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any detail() const;
    void detail(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any startTime() const;
    void startTime(const jsbind::Any& value);
};

/// The Performance class.
/// [`Performance`](https://developer.mozilla.org/en-US/docs/Web/API/Performance)
class Performance : public EventTarget {
    explicit Performance(Handle h) noexcept;

public:
    explicit Performance(const emlite::Val &val) noexcept;
    static Performance take_ownership(Handle h) noexcept;

    [[nodiscard]] Performance clone() const noexcept;
    /// The now method.
    /// [`Performance.now`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/now)
    jsbind::Any now();
    /// Getter of the `timeOrigin` attribute.
    /// [`Performance.timeOrigin`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/timeOrigin)
    [[nodiscard]] jsbind::Any timeOrigin() const;
    /// The toJSON method.
    /// [`Performance.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `eventCounts` attribute.
    /// [`Performance.eventCounts`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/eventCounts)
    [[nodiscard]] EventCounts eventCounts() const;
    /// Getter of the `interactionCount` attribute.
    /// [`Performance.interactionCount`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/interactionCount)
    [[nodiscard]] long long interactionCount() const;
    /// Getter of the `timing` attribute.
    /// [`Performance.timing`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/timing)
    [[nodiscard]] PerformanceTiming timing() const;
    /// Getter of the `navigation` attribute.
    /// [`Performance.navigation`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/navigation)
    [[nodiscard]] PerformanceNavigation navigation() const;
    /// The measureUserAgentSpecificMemory method.
    /// [`Performance.measureUserAgentSpecificMemory`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/measureUserAgentSpecificMemory)
    jsbind::Promise<MemoryMeasurement> measureUserAgentSpecificMemory();
    /// The getEntries method.
    /// [`Performance.getEntries`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/getEntries)
    jsbind::Any getEntries();
    /// The getEntriesByType method.
    /// [`Performance.getEntriesByType`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/getEntriesByType)
    jsbind::Any getEntriesByType(const jsbind::String& type);
    /// The getEntriesByName method.
    /// [`Performance.getEntriesByName`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/getEntriesByName)
    jsbind::Any getEntriesByName(const jsbind::String& name);
    /// The getEntriesByName method.
    /// [`Performance.getEntriesByName`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/getEntriesByName)
    jsbind::Any getEntriesByName(const jsbind::String& name, const jsbind::String& type);
    /// The clearResourceTimings method.
    /// [`Performance.clearResourceTimings`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/clearResourceTimings)
    jsbind::Undefined clearResourceTimings();
    /// The setResourceTimingBufferSize method.
    /// [`Performance.setResourceTimingBufferSize`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/setResourceTimingBufferSize)
    jsbind::Undefined setResourceTimingBufferSize(unsigned long maxSize);
    /// Getter of the `onresourcetimingbufferfull` attribute.
    /// [`Performance.onresourcetimingbufferfull`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/onresourcetimingbufferfull)
    [[nodiscard]] jsbind::Any onresourcetimingbufferfull() const;
    /// Setter of the `onresourcetimingbufferfull` attribute.
    /// [`Performance.onresourcetimingbufferfull`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/onresourcetimingbufferfull)
    void onresourcetimingbufferfull(const jsbind::Any& value);
    /// The mark method.
    /// [`Performance.mark`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/mark)
    PerformanceMark mark(const jsbind::String& markName);
    /// The mark method.
    /// [`Performance.mark`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/mark)
    PerformanceMark mark(const jsbind::String& markName, const PerformanceMarkOptions& markOptions);
    /// The clearMarks method.
    /// [`Performance.clearMarks`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/clearMarks)
    jsbind::Undefined clearMarks();
    /// The clearMarks method.
    /// [`Performance.clearMarks`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/clearMarks)
    jsbind::Undefined clearMarks(const jsbind::String& markName);
    /// The measure method.
    /// [`Performance.measure`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/measure)
    PerformanceMeasure measure(const jsbind::String& measureName);
    /// The measure method.
    /// [`Performance.measure`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/measure)
    PerformanceMeasure measure(const jsbind::String& measureName, const jsbind::Any& startOrMeasureOptions);
    /// The measure method.
    /// [`Performance.measure`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/measure)
    PerformanceMeasure measure(const jsbind::String& measureName, const jsbind::Any& startOrMeasureOptions, const jsbind::String& endMark);
    /// The clearMeasures method.
    /// [`Performance.clearMeasures`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/clearMeasures)
    jsbind::Undefined clearMeasures();
    /// The clearMeasures method.
    /// [`Performance.clearMeasures`](https://developer.mozilla.org/en-US/docs/Web/API/Performance/clearMeasures)
    jsbind::Undefined clearMeasures(const jsbind::String& measureName);
};

