#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class PerformanceScriptTiming;


/// The PerformanceLongAnimationFrameTiming class.
/// [`PerformanceLongAnimationFrameTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming)
class PerformanceLongAnimationFrameTiming : public PerformanceEntry {
    explicit PerformanceLongAnimationFrameTiming(Handle h) noexcept;

public:
    explicit PerformanceLongAnimationFrameTiming(const emlite::Val &val) noexcept;
    static PerformanceLongAnimationFrameTiming take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceLongAnimationFrameTiming clone() const noexcept;
    /// Getter of the `startTime` attribute.
    /// [`PerformanceLongAnimationFrameTiming.startTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/startTime)
    [[nodiscard]] jsbind::Any startTime() const;
    /// Getter of the `duration` attribute.
    /// [`PerformanceLongAnimationFrameTiming.duration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/duration)
    [[nodiscard]] jsbind::Any duration() const;
    /// Getter of the `name` attribute.
    /// [`PerformanceLongAnimationFrameTiming.name`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `entryType` attribute.
    /// [`PerformanceLongAnimationFrameTiming.entryType`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/entryType)
    [[nodiscard]] jsbind::String entryType() const;
    /// Getter of the `renderStart` attribute.
    /// [`PerformanceLongAnimationFrameTiming.renderStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/renderStart)
    [[nodiscard]] jsbind::Any renderStart() const;
    /// Getter of the `styleAndLayoutStart` attribute.
    /// [`PerformanceLongAnimationFrameTiming.styleAndLayoutStart`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/styleAndLayoutStart)
    [[nodiscard]] jsbind::Any styleAndLayoutStart() const;
    /// Getter of the `blockingDuration` attribute.
    /// [`PerformanceLongAnimationFrameTiming.blockingDuration`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/blockingDuration)
    [[nodiscard]] jsbind::Any blockingDuration() const;
    /// Getter of the `firstUIEventTimestamp` attribute.
    /// [`PerformanceLongAnimationFrameTiming.firstUIEventTimestamp`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/firstUIEventTimestamp)
    [[nodiscard]] jsbind::Any firstUIEventTimestamp() const;
    /// Getter of the `scripts` attribute.
    /// [`PerformanceLongAnimationFrameTiming.scripts`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/scripts)
    [[nodiscard]] jsbind::TypedArray<PerformanceScriptTiming> scripts() const;
    /// The toJSON method.
    /// [`PerformanceLongAnimationFrameTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `paintTime` attribute.
    /// [`PerformanceLongAnimationFrameTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// Getter of the `presentationTime` attribute.
    /// [`PerformanceLongAnimationFrameTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceLongAnimationFrameTiming/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

