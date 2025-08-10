#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

class PerformanceScriptTiming;

/// Interface PerformanceLongAnimationFrameTiming
/// [`PerformanceLongAnimationFrameTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming)
class PerformanceLongAnimationFrameTiming : public PerformanceEntry {
    explicit PerformanceLongAnimationFrameTiming(Handle h) noexcept;
public:
    explicit PerformanceLongAnimationFrameTiming(const emlite::Val &val) noexcept;
    static PerformanceLongAnimationFrameTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceLongAnimationFrameTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`PerformanceLongAnimationFrameTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/startTime)
    /// [`PerformanceLongAnimationFrameTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// [`PerformanceLongAnimationFrameTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/duration)
    /// [`PerformanceLongAnimationFrameTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// [`PerformanceLongAnimationFrameTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/name)
    /// [`PerformanceLongAnimationFrameTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`PerformanceLongAnimationFrameTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/entryType)
    /// [`PerformanceLongAnimationFrameTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// [`PerformanceLongAnimationFrameTiming.renderStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/renderStart)
    /// [`PerformanceLongAnimationFrameTiming.renderStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/renderStart)
    [[nodiscard]] jsbind::Any renderStart() const;
    /// [`PerformanceLongAnimationFrameTiming.styleAndLayoutStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/styleAndLayoutStart)
    /// [`PerformanceLongAnimationFrameTiming.styleAndLayoutStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/styleAndLayoutStart)
    [[nodiscard]] jsbind::Any styleAndLayoutStart() const;
    /// [`PerformanceLongAnimationFrameTiming.blockingDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/blockingDuration)
    /// [`PerformanceLongAnimationFrameTiming.blockingDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/blockingDuration)
    [[nodiscard]] jsbind::Any blockingDuration() const;
    /// [`PerformanceLongAnimationFrameTiming.firstUIEventTimestamp`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/firstUIEventTimestamp)
    /// [`PerformanceLongAnimationFrameTiming.firstUIEventTimestamp`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/firstUIEventTimestamp)
    [[nodiscard]] jsbind::Any firstUIEventTimestamp() const;
    /// [`PerformanceLongAnimationFrameTiming.scripts`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/scripts)
    /// [`PerformanceLongAnimationFrameTiming.scripts`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/scripts)
    [[nodiscard]] jsbind::TypedArray<PerformanceScriptTiming> scripts() const;
    /// The toJSON method.
    /// [`PerformanceLongAnimationFrameTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/toJSON)
    jsbind::Object toJSON();
    /// [`PerformanceLongAnimationFrameTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/paintTime)
    /// [`PerformanceLongAnimationFrameTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// [`PerformanceLongAnimationFrameTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/presentationTime)
    /// [`PerformanceLongAnimationFrameTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

} // namespace webbind