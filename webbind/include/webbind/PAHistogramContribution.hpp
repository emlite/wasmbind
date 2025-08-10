#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PAHistogramContribution
class PAHistogramContribution : public emlite::Val {
  explicit PAHistogramContribution(Handle h) noexcept;
public:
    static PAHistogramContribution take_ownership(Handle h) noexcept;
    explicit PAHistogramContribution(const emlite::Val &val) noexcept;
    PAHistogramContribution() noexcept;
    [[nodiscard]] PAHistogramContribution clone() const noexcept;
    /// Getter of the `bucket` attribute.
    [[nodiscard]] long long bucket() const;
    /// Setter of the `bucket` attribute.
    void bucket(long long value);
    /// Getter of the `value` attribute.
    [[nodiscard]] long value() const;
    /// Setter of the `value` attribute.
    void value(long value);
    /// Getter of the `filteringId` attribute.
    [[nodiscard]] long long filteringId() const;
    /// Setter of the `filteringId` attribute.
    void filteringId(long long value);
};

} // namespace webbind