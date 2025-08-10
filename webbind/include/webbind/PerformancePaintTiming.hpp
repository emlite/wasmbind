#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

/// Interface PerformancePaintTiming
/// [`PerformancePaintTiming`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming)
class PerformancePaintTiming : public PerformanceEntry {
    explicit PerformancePaintTiming(Handle h) noexcept;
public:
    explicit PerformancePaintTiming(const emlite::Val &val) noexcept;
    static PerformancePaintTiming take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformancePaintTiming clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The toJSON method.
    /// [`PerformancePaintTiming.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/toJSON)
    jsbind::Object toJSON();
    /// [`PerformancePaintTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/paintTime)
    /// [`PerformancePaintTiming.paintTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/paintTime)
    [[nodiscard]] jsbind::Any paintTime() const;
    /// [`PerformancePaintTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/presentationTime)
    /// [`PerformancePaintTiming.presentationTime`](https://developer.mozilla.org/en-US/docs/Web/API/PerformancePaintTiming/presentationTime)
    [[nodiscard]] jsbind::Any presentationTime() const;
};

} // namespace webbind