#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProtectedAudiencePrivateAggregationConfig
class ProtectedAudiencePrivateAggregationConfig : public emlite::Val {
  explicit ProtectedAudiencePrivateAggregationConfig(Handle h) noexcept;
public:
    static ProtectedAudiencePrivateAggregationConfig take_ownership(Handle h) noexcept;
    explicit ProtectedAudiencePrivateAggregationConfig(const emlite::Val &val) noexcept;
    ProtectedAudiencePrivateAggregationConfig() noexcept;
    [[nodiscard]] ProtectedAudiencePrivateAggregationConfig clone() const noexcept;
    /// Getter of the `aggregationCoordinatorOrigin` attribute.
    [[nodiscard]] jsbind::String aggregationCoordinatorOrigin() const;
    /// Setter of the `aggregationCoordinatorOrigin` attribute.
    void aggregationCoordinatorOrigin(const jsbind::String& value);
};

} // namespace webbind