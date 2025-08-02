#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "PerformanceEntry.hpp"
#include "enums.hpp"


/// The PerformanceMeasure class.
/// [`PerformanceMeasure`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMeasure)
class PerformanceMeasure : public PerformanceEntry {
    explicit PerformanceMeasure(Handle h) noexcept;

public:
    explicit PerformanceMeasure(const emlite::Val &val) noexcept;
    static PerformanceMeasure take_ownership(Handle h) noexcept;

    [[nodiscard]] PerformanceMeasure clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `detail` attribute.
    /// [`PerformanceMeasure.detail`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMeasure/detail)
    [[nodiscard]] jsbind::Any detail() const;
};

