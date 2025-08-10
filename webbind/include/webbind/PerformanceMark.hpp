#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PerformanceEntry.hpp"

namespace webbind {

class PerformanceMarkOptions;

/// Interface PerformanceMark
/// [`PerformanceMark`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMark)
class PerformanceMark : public PerformanceEntry {
    explicit PerformanceMark(Handle h) noexcept;
public:
    explicit PerformanceMark(const emlite::Val &val) noexcept;
    static PerformanceMark take_ownership(Handle h) noexcept;
    [[nodiscard]] PerformanceMark clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new PerformanceMark(..)` constructor, creating a new PerformanceMark instance
    PerformanceMark(const jsbind::String& markName);
    /// The `new PerformanceMark(..)` constructor, creating a new PerformanceMark instance
    PerformanceMark(const jsbind::String& markName, const PerformanceMarkOptions& markOptions);
    /// [`PerformanceMark.detail`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMark/detail)
    /// [`PerformanceMark.detail`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMark/detail)
    [[nodiscard]] jsbind::Any detail() const;
};

} // namespace webbind