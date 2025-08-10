#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface AttributionAggregationServices
/// [`AttributionAggregationServices`](https://developer.mozilla.org/en-US/docs/Web/API/AttributionAggregationServices)
class AttributionAggregationServices : public emlite::Val {
    explicit AttributionAggregationServices(Handle h) noexcept;
public:
    explicit AttributionAggregationServices(const emlite::Val &val) noexcept;
    static AttributionAggregationServices take_ownership(Handle h) noexcept;
    [[nodiscard]] AttributionAggregationServices clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

} // namespace webbind