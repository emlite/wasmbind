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
    /// Getter of the `startTime` attribute.
    /// [`PerformanceScriptTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// Getter of the `duration` attribute.
    /// [`PerformanceScriptTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// Getter of the `name` attribute.
    /// [`PerformanceScriptTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `entryType` attribute.
    /// [`PerformanceScriptTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// Getter of the `invokerType` attribute.
    /// [`PerformanceScriptTiming.invokerType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/invokerType)
    [[nodiscard]] ScriptInvokerType invokerType() const;
    /// Getter of the `invoker` attribute.
    /// [`PerformanceScriptTiming.invoker`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/invoker)
    [[nodiscard]] jsbind::String invoker() const;
    /// Getter of the `executionStart` attribute.
    /// [`PerformanceScriptTiming.executionStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/executionStart)
    [[nodiscard]] jsbind::Any executionStart() const;
    /// Getter of the `sourceURL` attribute.
    /// [`PerformanceScriptTiming.sourceURL`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceURL)
    [[nodiscard]] jsbind::String sourceURL() const;
    /// Getter of the `sourceFunctionName` attribute.
    /// [`PerformanceScriptTiming.sourceFunctionName`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceFunctionName)
    [[nodiscard]] jsbind::String sourceFunctionName() const;
    /// Getter of the `sourceCharPosition` attribute.
    /// [`PerformanceScriptTiming.sourceCharPosition`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/sourceCharPosition)
    [[nodiscard]] long long sourceCharPosition() const;
    /// Getter of the `pauseDuration` attribute.
    /// [`PerformanceScriptTiming.pauseDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/pauseDuration)
    [[nodiscard]] jsbind::Any pauseDuration() const;
    /// Getter of the `forcedStyleAndLayoutDuration` attribute.
    /// [`PerformanceScriptTiming.forcedStyleAndLayoutDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/forcedStyleAndLayoutDuration)
    [[nodiscard]] jsbind::Any forcedStyleAndLayoutDuration() const;
    /// Getter of the `window` attribute.
    /// [`PerformanceScriptTiming.window`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/window)
    [[nodiscard]] Window window() const;
    /// Getter of the `windowAttribution` attribute.
    /// [`PerformanceScriptTiming.windowAttribution`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/windowAttribution)
    [[nodiscard]] ScriptWindowAttribution windowAttribution() const;
    /// The toJSON method.
    /// [`PerformanceScriptTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceScriptTiming/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind