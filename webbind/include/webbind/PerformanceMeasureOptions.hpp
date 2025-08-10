#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PerformanceMeasureOptions
/// [`PerformanceMeasureOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMeasureOptions)
class PerformanceMeasureOptions : public emlite::Val {
  explicit PerformanceMeasureOptions(Handle h) noexcept;
public:
    static PerformanceMeasureOptions take_ownership(Handle h) noexcept;
    explicit PerformanceMeasureOptions(const emlite::Val &val) noexcept;
    PerformanceMeasureOptions() noexcept;
    [[nodiscard]] PerformanceMeasureOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any detail() const;
    void detail(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any start() const;
    void start(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any duration() const;
    void duration(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any end() const;
    void end(const jsbind::Any& value);
};

} // namespace webbind