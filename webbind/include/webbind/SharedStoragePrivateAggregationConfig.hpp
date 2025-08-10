#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SharedStoragePrivateAggregationConfig
class SharedStoragePrivateAggregationConfig : public emlite::Val {
  explicit SharedStoragePrivateAggregationConfig(Handle h) noexcept;
public:
    static SharedStoragePrivateAggregationConfig take_ownership(Handle h) noexcept;
    explicit SharedStoragePrivateAggregationConfig(const emlite::Val &val) noexcept;
    SharedStoragePrivateAggregationConfig() noexcept;
    [[nodiscard]] SharedStoragePrivateAggregationConfig clone() const noexcept;
    /// Getter of the `aggregationCoordinatorOrigin` attribute.
    [[nodiscard]] jsbind::String aggregationCoordinatorOrigin() const;
    /// Setter of the `aggregationCoordinatorOrigin` attribute.
    void aggregationCoordinatorOrigin(const jsbind::String& value);
    /// Getter of the `contextId` attribute.
    [[nodiscard]] jsbind::String contextId() const;
    /// Setter of the `contextId` attribute.
    void contextId(const jsbind::String& value);
    /// Getter of the `filteringIdMaxBytes` attribute.
    [[nodiscard]] long long filteringIdMaxBytes() const;
    /// Setter of the `filteringIdMaxBytes` attribute.
    void filteringIdMaxBytes(long long value);
    /// Getter of the `maxContributions` attribute.
    [[nodiscard]] long long maxContributions() const;
    /// Setter of the `maxContributions` attribute.
    void maxContributions(long long value);
};

} // namespace webbind