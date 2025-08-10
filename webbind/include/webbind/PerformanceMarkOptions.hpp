#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PerformanceMarkOptions
/// [`PerformanceMarkOptions`](https://developer.mozilla.org/en-US/docs/Web/API/PerformanceMarkOptions)
class PerformanceMarkOptions : public emlite::Val {
  explicit PerformanceMarkOptions(Handle h) noexcept;
public:
    static PerformanceMarkOptions take_ownership(Handle h) noexcept;
    explicit PerformanceMarkOptions(const emlite::Val &val) noexcept;
    PerformanceMarkOptions() noexcept;
    [[nodiscard]] PerformanceMarkOptions clone() const noexcept;
    [[nodiscard]] jsbind::Any detail() const;
    void detail(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any startTime() const;
    void startTime(const jsbind::Any& value);
};

} // namespace webbind