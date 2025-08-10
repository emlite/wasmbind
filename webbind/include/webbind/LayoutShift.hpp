#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

class LayoutShiftAttribution;

/// Interface LayoutShift
/// [`LayoutShift`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift)
class LayoutShift : public PerformanceEntry {
    explicit LayoutShift(Handle h) noexcept;
public:
    explicit LayoutShift(const emlite::Val &val) noexcept;
    static LayoutShift take_ownership(Handle h) noexcept;
    [[nodiscard]] LayoutShift clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`LayoutShift.value`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/value)
    /// [`LayoutShift.value`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/value)
    [[nodiscard]] double value() const;
    /// [`LayoutShift.hadRecentInput`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/hadRecentInput)
    /// [`LayoutShift.hadRecentInput`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/hadRecentInput)
    [[nodiscard]] bool hadRecentInput() const;
    /// [`LayoutShift.lastInputTime`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/lastInputTime)
    /// [`LayoutShift.lastInputTime`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/lastInputTime)
    [[nodiscard]] jsbind::Any lastInputTime() const;
    /// [`LayoutShift.sources`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/sources)
    /// [`LayoutShift.sources`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/sources)
    [[nodiscard]] jsbind::TypedArray<LayoutShiftAttribution> sources() const;
    /// The toJSON method.
    /// [`LayoutShift.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/toJSON)
    jsbind::Object toJSON();
};

} // namespace webbind