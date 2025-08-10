#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type AttributionAggregationService
class AttributionAggregationService : public emlite::Val {
  explicit AttributionAggregationService(Handle h) noexcept;
public:
    static AttributionAggregationService take_ownership(Handle h) noexcept;
    explicit AttributionAggregationService(const emlite::Val &val) noexcept;
    AttributionAggregationService() noexcept;
    [[nodiscard]] AttributionAggregationService clone() const noexcept;
    /// Getter of the `protocol` attribute.
    [[nodiscard]] jsbind::String protocol() const;
    /// Setter of the `protocol` attribute.
    void protocol(const jsbind::String& value);
};

} // namespace webbind