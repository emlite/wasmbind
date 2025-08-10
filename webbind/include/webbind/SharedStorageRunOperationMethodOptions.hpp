#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SharedStoragePrivateAggregationConfig.hpp"

namespace webbind {

/// Dictionary type SharedStorageRunOperationMethodOptions
/// [`SharedStorageRunOperationMethodOptions`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageRunOperationMethodOptions)
class SharedStorageRunOperationMethodOptions : public emlite::Val {
  explicit SharedStorageRunOperationMethodOptions(Handle h) noexcept;
public:
    static SharedStorageRunOperationMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageRunOperationMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageRunOperationMethodOptions() noexcept;
    [[nodiscard]] SharedStorageRunOperationMethodOptions clone() const noexcept;
    [[nodiscard]] jsbind::Object data() const;
    void data(const jsbind::Object& value);
    [[nodiscard]] bool resolveToConfig() const;
    void resolveToConfig(bool value);
    [[nodiscard]] bool keepAlive() const;
    void keepAlive(bool value);
    [[nodiscard]] SharedStoragePrivateAggregationConfig privateAggregationConfig() const;
    void privateAggregationConfig(const SharedStoragePrivateAggregationConfig& value);
    [[nodiscard]] jsbind::String savedQuery() const;
    void savedQuery(const jsbind::String& value);
};

} // namespace webbind