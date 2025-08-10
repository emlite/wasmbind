#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"
#include "enums.hpp"

namespace webbind {

class Window;

/// Interface PerformanceScriptTiming
/// [`PerformanceScriptTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming)
class PerformanceScriptTiming : public PerformanceEntry {
    explicit PerformanceScriptTiming(Handle h) noexcept;
public:
    explicit PerformanceScriptTiming(const emlite::Val &val) noexcept;
    static PerformanceScriptTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceScriptTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceScriptTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/startTime)
    /// [`PerformanceScriptTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// [`PerformanceScriptTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/duration)
    /// [`PerformanceScriptTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// [`PerformanceScriptTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/name)
    /// [`PerformanceScriptTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`PerformanceScriptTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/entryType)
    /// [`PerformanceScriptTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// [`PerformanceScriptTiming.invokerType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/invokerType)
    /// [`PerformanceScriptTiming.invokerType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/invokerType)
    [[nodiscard]] ScriptInvokerType invokerType() const;
    /// [`PerformanceScriptTiming.invoker`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/invoker)
    /// [`PerformanceScriptTiming.invoker`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/invoker)
    [[nodiscard]] jsbind::String invoker() const;
    /// [`PerformanceScriptTiming.executionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/executionStart)
    /// [`PerformanceScriptTiming.executionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/executionStart)
    [[nodiscard]] jsbind::Any executionStart() const;
    /// [`PerformanceScriptTiming.sourceURL`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceURL)
    /// [`PerformanceScriptTiming.sourceURL`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceURL)
    [[nodiscard]] jsbind::String sourceURL() const;
    /// [`PerformanceScriptTiming.sourceFunctionName`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceFunctionName)
    /// [`PerformanceScriptTiming.sourceFunctionName`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceFunctionName)
    [[nodiscard]] jsbind::String sourceFunctionName() const;
    /// [`PerformanceScriptTiming.sourceCharPosition`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceCharPosition)
    /// [`PerformanceScriptTiming.sourceCharPosition`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceCharPosition)
    [[nodiscard]] long long sourceCharPosition() const;
    /// [`PerformanceScriptTiming.pauseDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/pauseDuration)
    /// [`PerformanceScriptTiming.pauseDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/pauseDuration)
    [[nodiscard]] jsbind::Any pauseDuration() const;
    /// [`PerformanceScriptTiming.forcedStyleAndLayoutDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/forcedStyleAndLayoutDuration)
    /// [`PerformanceScriptTiming.forcedStyleAndLayoutDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/forcedStyleAndLayoutDuration)
    [[nodiscard]] jsbind::Any forcedStyleAndLayoutDuration() const;
    /// [`PerformanceScriptTiming.window`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/window)
    /// [`PerformanceScriptTiming.window`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/window)
    [[nodiscard]] Window window() const;
    /// [`PerformanceScriptTiming.windowAttribution`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/windowAttribution)
    /// [`PerformanceScriptTiming.windowAttribution`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/windowAttribution)
    [[nodiscard]] ScriptWindowAttribution windowAttribution() const;
    /// The toJSON method.
    /// [`PerformanceScriptTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind