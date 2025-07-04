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
    StorageInterestGroup clone() const noexcept;
    long long joinCount() const;
    void joinCount(long long value);
    long long bidCount() const;
    void bidCount(long long value);
    jsbind::Sequence<jsbind::Any> prevWinsMs() const;
    void prevWinsMs(const jsbind::Sequence<jsbind::Any>& value);
    jsbind::USVString joiningOrigin() const;
    void joiningOrigin(const jsbind::USVString& value);
    long long timeSinceGroupJoinedMs() const;
    void timeSinceGroupJoinedMs(long long value);
    long long lifetimeRemainingMs() const;
    void lifetimeRemainingMs(long long value);
    long long timeSinceLastUpdateMs() const;
    void timeSinceLastUpdateMs(long long value);
    long long timeUntilNextUpdateMs() const;
    void timeUntilNextUpdateMs(long long value);
    long long estimatedSize() const;
    void estimatedSize(long long value);
};

class SharedStorageWorkletGlobalScope : public WorkletGlobalScope {
    explicit SharedStorageWorkletGlobalScope(Handle h) noexcept;

public:
    explicit SharedStorageWorkletGlobalScope(const emlite::Val &val) noexcept;
    static SharedStorageWorkletGlobalScope take_ownership(Handle h) noexcept;

    SharedStorageWorkletGlobalScope clone() const noexcept;
    jsbind::Undefined register_(const jsbind::DOMString& name, const jsbind::Function& operationCtor);
    SharedStorage sharedStorage() const;
    PrivateAggregation privateAggregation() const;
    jsbind::Promise interestGroups();
    SharedStorageWorkletNavigator navigator() const;
};

