#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RealTimeContribution
/// [`RealTimeContribution`](https://developer.mozilla.org/en-US/docs/Web/API/RealTimeContribution)
class RealTimeContribution : public emlite::Val {
  explicit RealTimeContribution(Handle h) noexcept;
public:
    static RealTimeContribution take_ownership(Handle h) noexcept;
    explicit RealTimeContribution(const emlite::Val &val) noexcept;
    RealTimeContribution() noexcept;
    [[nodiscard]] RealTimeContribution clone() const noexcept;
    [[nodiscard]] long bucket() const;
    void bucket(long value);
    [[nodiscard]] double priorityWeight() const;
    void priorityWeight(double value);
    [[nodiscard]] long latencyThreshold() const;
    void latencyThreshold(long value);
};

} // namespace webbind