#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type RealTimeContribution
class RealTimeContribution : public emlite::Val {
  explicit RealTimeContribution(Handle h) noexcept;
public:
    static RealTimeContribution take_ownership(Handle h) noexcept;
    explicit RealTimeContribution(const emlite::Val &val) noexcept;
    RealTimeContribution() noexcept;
    [[nodiscard]] RealTimeContribution clone() const noexcept;
    /// Getter of the `bucket` attribute.
    [[nodiscard]] long bucket() const;
    /// Setter of the `bucket` attribute.
    void bucket(long value);
    /// Getter of the `priorityWeight` attribute.
    [[nodiscard]] double priorityWeight() const;
    /// Setter of the `priorityWeight` attribute.
    void priorityWeight(double value);
    /// Getter of the `latencyThreshold` attribute.
    [[nodiscard]] long latencyThreshold() const;
    /// Setter of the `latencyThreshold` attribute.
    void latencyThreshold(long value);
};

} // namespace webbind