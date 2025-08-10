#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type PAHistogramContribution
/// [`PAHistogramContribution`](https://developer.mozilla.org/en-US/docs/Web/API/PAHistogramContribution)
class PAHistogramContribution : public emlite::Val {
  explicit PAHistogramContribution(Handle h) noexcept;
public:
    static PAHistogramContribution take_ownership(Handle h) noexcept;
    explicit PAHistogramContribution(const emlite::Val &val) noexcept;
    PAHistogramContribution() noexcept;
    [[nodiscard]] PAHistogramContribution clone() const noexcept;
    [[nodiscard]] long long bucket() const;
    void bucket(long long value);
    [[nodiscard]] long value() const;
    void value(long value);
    [[nodiscard]] long long filteringId() const;
    void filteringId(long long value);
};

} // namespace webbind