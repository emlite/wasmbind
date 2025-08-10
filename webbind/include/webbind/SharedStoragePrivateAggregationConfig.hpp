#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type SharedStoragePrivateAggregationConfig
/// [`SharedStoragePrivateAggregationConfig`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStoragePrivateAggregationConfig)
class SharedStoragePrivateAggregationConfig : public emlite::Val {
  explicit SharedStoragePrivateAggregationConfig(Handle h) noexcept;
public:
    static SharedStoragePrivateAggregationConfig take_ownership(Handle h) noexcept;
    explicit SharedStoragePrivateAggregationConfig(const emlite::Val &val) noexcept;
    SharedStoragePrivateAggregationConfig() noexcept;
    [[nodiscard]] SharedStoragePrivateAggregationConfig clone() const noexcept;
    [[nodiscard]] jsbind::String aggregationCoordinatorOrigin() const;
    void aggregationCoordinatorOrigin(const jsbind::String& value);
    [[nodiscard]] jsbind::String contextId() const;
    void contextId(const jsbind::String& value);
    [[nodiscard]] long long filteringIdMaxBytes() const;
    void filteringIdMaxBytes(long long value);
    [[nodiscard]] long long maxContributions() const;
    void maxContributions(long long value);
};

} // namespace webbind