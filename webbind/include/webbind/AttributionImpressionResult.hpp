#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionImpressionResult
/// [`AttributionImpressionResult`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionImpressionResult)
class AttributionImpressionResult : public emlite::Val {
  explicit AttributionImpressionResult(Handle h) noexcept;
public:
    static AttributionImpressionResult take_ownership(Handle h) noexcept;
    explicit AttributionImpressionResult(const emlite::Val &val) noexcept;
    AttributionImpressionResult() noexcept;
    [[nodiscard]] AttributionImpressionResult clone() const noexcept;
};

} // namespace webbind