#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkletGlobalScope.hpp"

namespace webbind {

class SharedStorage;
class PrivateAggregation;
class StorageInterestGroup;
class SharedStorageWorkletNavigator;

/// Interface SharedStorageWorkletGlobalScope
/// [`SharedStorageWorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope)
class SharedStorageWorkletGlobalScope : public WorkletGlobalScope {
    explicit SharedStorageWorkletGlobalScope(Handle h) noexcept;
public:
    explicit SharedStorageWorkletGlobalScope(const emlite::Val &val) noexcept;
    static SharedStorageWorkletGlobalScope take_ownership(Handle h) noexcept;
    [[nodiscard]] SharedStorageWorkletGlobalScope clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The register method.
    /// [`SharedStorageWorkletGlobalScope.register`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/register)
    jsbind::Undefined register_(const jsbind::String& name, const jsbind::Function& operationCtor);
    /// [`SharedStorageWorkletGlobalScope.sharedStorage`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/sharedStorage)
    /// [`SharedStorageWorkletGlobalScope.sharedStorage`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/sharedStorage)
    [[nodiscard]] SharedStorage sharedStorage() const;
    /// [`SharedStorageWorkletGlobalScope.privateAggregation`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/privateAggregation)
    /// [`SharedStorageWorkletGlobalScope.privateAggregation`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/privateAggregation)
    [[nodiscard]] PrivateAggregation privateAggregation() const;
    /// The interestGroups method.
    /// [`SharedStorageWorkletGlobalScope.interestGroups`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/interestGroups)
    jsbind::Promise<jsbind::TypedArray<StorageInterestGroup>> interestGroups();
    /// [`SharedStorageWorkletGlobalScope.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/navigator)
    /// [`SharedStorageWorkletGlobalScope.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/navigator)
    [[nodiscard]] SharedStorageWorkletNavigator navigator() const;
};

} // namespace webbind