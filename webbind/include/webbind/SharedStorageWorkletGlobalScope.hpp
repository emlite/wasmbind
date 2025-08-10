#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "WorkletGlobalScope.hpp"
#include "StorageInterestGroup.hpp"

namespace webbind {

class SharedStorage;
class PrivateAggregation;
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
    /// Getter of the `sharedStorage` attribute.
    /// [`SharedStorageWorkletGlobalScope.sharedStorage`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/sharedStorage)
    [[nodiscard]] SharedStorage sharedStorage() const;
    /// Getter of the `privateAggregation` attribute.
    /// [`SharedStorageWorkletGlobalScope.privateAggregation`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/privateAggregation)
    [[nodiscard]] PrivateAggregation privateAggregation() const;
    /// The interestGroups method.
    /// [`SharedStorageWorkletGlobalScope.interestGroups`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/interestGroups)
    jsbind::Promise<jsbind::TypedArray<StorageInterestGroup>> interestGroups();
    /// Getter of the `navigator` attribute.
    /// [`SharedStorageWorkletGlobalScope.navigator`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope/navigator)
    [[nodiscard]] SharedStorageWorkletNavigator navigator() const;
};

} // namespace webbind