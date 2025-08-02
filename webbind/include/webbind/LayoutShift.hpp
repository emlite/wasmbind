#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"

class LayoutShiftAttribution;


/// The LayoutShift class.
/// [`LayoutShift`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift)
class LayoutShift : public PerformanceEntry {
    explicit LayoutShift(Handle h) noexcept;

public:
    explicit LayoutShift(const emlite::Val &val) noexcept;
    static LayoutShift take_ownership(Handle h) noexcept;

    [[nodiscard]] LayoutShift clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `value` attribute.
    /// [`LayoutShift.value`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/value)
    [[nodiscard]] double value() const;
    /// Getter of the `hadRecentInput` attribute.
    /// [`LayoutShift.hadRecentInput`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/hadRecentInput)
    [[nodiscard]] bool hadRecentInput() const;
    /// Getter of the `lastInputTime` attribute.
    /// [`LayoutShift.lastInputTime`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/lastInputTime)
    [[nodiscard]] jsbind::Any lastInputTime() const;
    /// Getter of the `sources` attribute.
    /// [`LayoutShift.sources`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/sources)
    [[nodiscard]] jsbind::TypedArray<LayoutShiftAttribution> sources() const;
    /// The toJSON method.
    /// [`LayoutShift.toJSON`](https://developer.mozilla.org/en-US/docs/Web/API/LayoutShift/toJSON)
    jsbind::Object toJSON();
};

