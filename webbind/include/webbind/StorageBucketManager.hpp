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
    [[nodiscard]] StorageBucketOptions clone() const noexcept;
    [[nodiscard]] bool persisted() const;
    void persisted(bool value);
    [[nodiscard]] long long quota() const;
    void quota(long long value);
    [[nodiscard]] jsbind::Any expires() const;
    void expires(const jsbind::Any& value);
};

/// The StorageBucketManager class.
/// [`StorageBucketManager`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketManager)
class StorageBucketManager : public emlite::Val {
    explicit StorageBucketManager(Handle h) noexcept;

public:
    explicit StorageBucketManager(const emlite::Val &val) noexcept;
    static StorageBucketManager take_ownership(Handle h) noexcept;

    [[nodiscard]] StorageBucketManager clone() const noexcept;
    /// The open method.
    /// [`StorageBucketManager.open`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketManager/open)
    jsbind::Promise<StorageBucket> open(const jsbind::String& name);
    /// The open method.
    /// [`StorageBucketManager.open`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketManager/open)
    jsbind::Promise<StorageBucket> open(const jsbind::String& name, const StorageBucketOptions& options);
    /// The keys method.
    /// [`StorageBucketManager.keys`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketManager/keys)
    jsbind::Promise<jsbind::TypedArray<jsbind::String>> keys();
    /// The delete method.
    /// [`StorageBucketManager.delete`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketManager/delete)
    jsbind::Promise<jsbind::Undefined> delete_(const jsbind::String& name);
};

