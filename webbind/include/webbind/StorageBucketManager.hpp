#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class StorageBucket;
class StorageBucketOptions;

/// Interface StorageBucketManager
/// [`StorageBucketManager`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucketManager)
class StorageBucketManager : public emlite::Val {
    explicit StorageBucketManager(Handle h) noexcept;
public:
    explicit StorageBucketManager(const emlite::Val &val) noexcept;
    static StorageBucketManager take_ownership(Handle h) noexcept;
    [[nodiscard]] StorageBucketManager clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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

} // namespace webbind