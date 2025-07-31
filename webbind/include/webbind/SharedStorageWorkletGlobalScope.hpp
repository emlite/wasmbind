#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WorkletGlobalScope.hpp"
#include "enums.hpp"

class SharedStorage;
class PrivateAggregation;
class StorageInterestGroup;
class SharedStorageWorkletNavigator;


class StorageInterestGroup : public emlite::Val {
  explicit StorageInterestGroup(Handle h) noexcept;
public:
    static StorageInterestGroup take_ownership(Handle h) noexcept;
    explicit StorageInterestGroup(const emlite::Val &val) noexcept;
    StorageInterestGroup() noexcept;
    [[nodiscard]] StorageInterestGroup clone() const noexcept;
    [[nodiscard]] long long joinCount() const;
    void joinCount(long long value);
    [[nodiscard]] long long bidCount() const;
    void bidCount(long long value);
    [[nodiscard]] jsbind::TypedArray<jsbind::Any> prevWinsMs() const;
    void prevWinsMs(const jsbind::TypedArray<jsbind::Any>& value);
    [[nodiscard]] jsbind::String joiningOrigin() const;
    void joiningOrigin(const jsbind::String& value);
    [[nodiscard]] long long timeSinceGroupJoinedMs() const;
    void timeSinceGroupJoinedMs(long long value);
    [[nodiscard]] long long lifetimeRemainingMs() const;
    void lifetimeRemainingMs(long long value);
    [[nodiscard]] long long timeSinceLastUpdateMs() const;
    void timeSinceLastUpdateMs(long long value);
    [[nodiscard]] long long timeUntilNextUpdateMs() const;
    void timeUntilNextUpdateMs(long long value);
    [[nodiscard]] long long estimatedSize() const;
    void estimatedSize(long long value);
};

/// The SharedStorageWorkletGlobalScope class.
/// [`SharedStorageWorkletGlobalScope`](https://developer.mozilla.org/en-US/docs/Web/API/SharedStorageWorkletGlobalScope)
class SharedStorageWorkletGlobalScope : public WorkletGlobalScope {
    explicit SharedStorageWorkletGlobalScope(Handle h) noexcept;

public:
    explicit SharedStorageWorkletGlobalScope(const emlite::Val &val) noexcept;
    static SharedStorageWorkletGlobalScope take_ownership(Handle h) noexcept;

    [[nodiscard]] SharedStorageWorkletGlobalScope clone() const noexcept;
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

