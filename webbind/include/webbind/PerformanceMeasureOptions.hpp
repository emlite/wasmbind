#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PerformanceMeasureOptions
class PerformanceMeasureOptions : public emlite::Val {
  explicit PerformanceMeasureOptions(Handle h) noexcept;
public:
    static PerformanceMeasureOptions take_ownership(Handle h) noexcept;
    explicit PerformanceMeasureOptions(const emlite::Val &val) noexcept;
    PerformanceMeasureOptions() noexcept;
    [[nodiscard]] PerformanceMeasureOptions clone() const noexcept;
    /// Getter of the `detail` attribute.
    [[nodiscard]] jsbind::Any detail() const;
    /// Setter of the `detail` attribute.
    void detail(const jsbind::Any& value);
    /// Getter of the `start` attribute.
    [[nodiscard]] jsbind::Any start() const;
    /// Setter of the `start` attribute.
    void start(const jsbind::Any& value);
    /// Getter of the `duration` attribute.
    [[nodiscard]] jsbind::Any duration() const;
    /// Setter of the `duration` attribute.
    void duration(const jsbind::Any& value);
    /// Getter of the `end` attribute.
    [[nodiscard]] jsbind::Any end() const;
    /// Setter of the `end` attribute.
    void end(const jsbind::Any& value);
};

} // namespace webbind