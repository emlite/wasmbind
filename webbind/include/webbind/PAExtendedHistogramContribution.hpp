#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PAExtendedHistogramContribution
/// [`PAExtendedHistogramContribution`](https://developer.mozilla.org/en-US/docs/Web/API/PAExtendedHistogramContribution)
class PAExtendedHistogramContribution : public emlite::Val {
  explicit PAExtendedHistogramContribution(Handle h) noexcept;
public:
    static PAExtendedHistogramContribution take_ownership(Handle h) noexcept;
    explicit PAExtendedHistogramContribution(const emlite::Val &val) noexcept;
    PAExtendedHistogramContribution() noexcept;
    [[nodiscard]] PAExtendedHistogramContribution clone() const noexcept;
    [[nodiscard]] jsbind::Any bucket() const;
    void bucket(const jsbind::Any& value);
    [[nodiscard]] jsbind::Any value() const;
    void value(const jsbind::Any& value);
    [[nodiscard]] long long filteringId() const;
    void filteringId(long long value);
};

} // namespace webbind