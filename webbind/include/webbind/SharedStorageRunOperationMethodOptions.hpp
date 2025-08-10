#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SharedStoragePrivateAggregationConfig;

/// Dictionary type SharedStorageRunOperationMethodOptions
class SharedStorageRunOperationMethodOptions : public emlite::Val {
  explicit SharedStorageRunOperationMethodOptions(Handle h) noexcept;
public:
    static SharedStorageRunOperationMethodOptions take_ownership(Handle h) noexcept;
    explicit SharedStorageRunOperationMethodOptions(const emlite::Val &val) noexcept;
    SharedStorageRunOperationMethodOptions() noexcept;
    [[nodiscard]] SharedStorageRunOperationMethodOptions clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] jsbind::Object data() const;
    /// Setter of the `data` attribute.
    void data(const jsbind::Object& value);
    /// Getter of the `resolveToConfig` attribute.
    [[nodiscard]] bool resolveToConfig() const;
    /// Setter of the `resolveToConfig` attribute.
    void resolveToConfig(bool value);
    /// Getter of the `keepAlive` attribute.
    [[nodiscard]] bool keepAlive() const;
    /// Setter of the `keepAlive` attribute.
    void keepAlive(bool value);
    /// Getter of the `privateAggregationConfig` attribute.
    [[nodiscard]] SharedStoragePrivateAggregationConfig privateAggregationConfig() const;
    /// Setter of the `privateAggregationConfig` attribute.
    void privateAggregationConfig(const SharedStoragePrivateAggregationConfig& value);
    /// Getter of the `savedQuery` attribute.
    [[nodiscard]] jsbind::String savedQuery() const;
    /// Setter of the `savedQuery` attribute.
    void savedQuery(const jsbind::String& value);
};

} // namespace webbind