#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PAExtendedHistogramContribution
class PAExtendedHistogramContribution : public emlite::Val {
  explicit PAExtendedHistogramContribution(Handle h) noexcept;
public:
    static PAExtendedHistogramContribution take_ownership(Handle h) noexcept;
    explicit PAExtendedHistogramContribution(const emlite::Val &val) noexcept;
    PAExtendedHistogramContribution() noexcept;
    [[nodiscard]] PAExtendedHistogramContribution clone() const noexcept;
    /// Getter of the `bucket` attribute.
    [[nodiscard]] jsbind::Any bucket() const;
    /// Setter of the `bucket` attribute.
    void bucket(const jsbind::Any& value);
    /// Getter of the `value` attribute.
    [[nodiscard]] jsbind::Any value() const;
    /// Setter of the `value` attribute.
    void value(const jsbind::Any& value);
    /// Getter of the `filteringId` attribute.
    [[nodiscard]] long long filteringId() const;
    /// Setter of the `filteringId` attribute.
    void filteringId(long long value);
};

} // namespace webbind