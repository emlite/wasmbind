#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PerformanceMarkOptions
class PerformanceMarkOptions : public emlite::Val {
  explicit PerformanceMarkOptions(Handle h) noexcept;
public:
    static PerformanceMarkOptions take_ownership(Handle h) noexcept;
    explicit PerformanceMarkOptions(const emlite::Val &val) noexcept;
    PerformanceMarkOptions() noexcept;
    [[nodiscard]] PerformanceMarkOptions clone() const noexcept;
    /// Getter of the `detail` attribute.
    [[nodiscard]] jsbind::Any detail() const;
    /// Setter of the `detail` attribute.
    void detail(const jsbind::Any& value);
    /// Getter of the `startTime` attribute.
    [[nodiscard]] jsbind::Any startTime() const;
    /// Setter of the `startTime` attribute.
    void startTime(const jsbind::Any& value);
};

} // namespace webbind