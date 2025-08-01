#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


/// The PerformancePaintTiming class.
/// [`PerformancePaintTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming)
class PerformancePaintTiming : public PerformanceEntry {
    explicit PerformancePaintTiming(Handle h) noexcept;

public:
    explicit PerformancePaintTiming(const emlite::Val &val) noexcept;
    static PerformancePaintTiming take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformancePaintTiming clone() const noexcept;
    /// The toJSON method.
    /// [`PerformancePaintTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/toJSON)
    jsbind::Object toJSON();
    /// Getter of the `paintTime` attribute.
    /// [`PerformancePaintTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// Getter of the `presentationTime` attribute.
    /// [`PerformancePaintTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

