#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class AttributionAggregationServices : public emlite::Val {
    explicit AttributionAggregationServices(Handle h) noexcept;

public:
    explicit AttributionAggregationServices(const emlite::Val &val) noexcept;
    static AttributionAggregationServices take_ownership(Handle h) noexcept;

    AttributionAggregationServices clone() const noexcept;
};

