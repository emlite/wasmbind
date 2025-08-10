#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ProtectedAudiencePrivateAggregationConfig
/// [`ProtectedAudiencePrivateAggregationConfig`](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudiencePrivateAggregationConfig)
class ProtectedAudiencePrivateAggregationConfig : public emlite::Val {
  explicit ProtectedAudiencePrivateAggregationConfig(Handle h) noexcept;
public:
    static ProtectedAudiencePrivateAggregationConfig take_ownership(Handle h) noexcept;
    explicit ProtectedAudiencePrivateAggregationConfig(const emlite::Val &val) noexcept;
    ProtectedAudiencePrivateAggregationConfig() noexcept;
    [[nodiscard]] ProtectedAudiencePrivateAggregationConfig clone() const noexcept;
    [[nodiscard]] jsbind::String aggregationCoordinatorOrigin() const;
    void aggregationCoordinatorOrigin(const jsbind::String& value);
};

} // namespace webbind