#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class StorageBucket;
class StorageBucketOptions;


class StorageBucketOptions : public emlite::Val {
  explicit StorageBucketOptions(Handle h) noexcept;
public:
    static StorageBucketOptions take_ownership(Handle h) noexcept;
    explicit StorageBucketOptions(const emlite::Val &val) noexcept;
    StorageBucketOptions() noexcept;
    StorageBucketOptions clone() const noexcept;
    bool persisted() const;
    void persisted(bool value);
    long long quota() const;
    void quota(long long value);
    jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
};

class StorageBucketManager : public emlite::Val {
    explicit StorageBucketManager(Handle h) noexcept;

public:
    explicit StorageBucketManager(const emlite::Val &val) noexcept;
    static StorageBucketManager take_ownership(Handle h) noexcept;

    StorageBucketManager clone() const noexcept;
    jsbind::Promise<StorageBucket> open(const jsbind::DOMString& name);
    jsbind::Promise<StorageBucket> open(const jsbind::DOMString& name, const StorageBucketOptions& options);
    jsbind::Promise<jsbind::Sequence<jsbind::DOMString>> keys();
    jsbind::Promise<jsbind::Undefined> delete_(const jsbind::DOMString& name);
};

