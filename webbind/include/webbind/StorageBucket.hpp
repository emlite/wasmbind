#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StorageEstimate.hpp"

namespace webbind {

class IDBFactory;
class CacheStorage;
class FileSystemDirectoryHandle;

/// Interface StorageBucket
/// [`StorageBucket`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket)
class StorageBucket : public emlite::Val {
    explicit StorageBucket(Handle h) noexcept;
public:
    explicit StorageBucket(const emlite::Val &val) noexcept;
    static StorageBucket take_ownership(Handle h) noexcept;
    [[nodiscard]] StorageBucket clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`StorageBucket.name`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/name)
    [[nodiscard]] jsbind::String name() const;
    /// The persist method.
    /// [`StorageBucket.persist`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/persist)
    jsbind::Promise<bool> persist();
    /// The persisted method.
    /// [`StorageBucket.persisted`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/persisted)
    jsbind::Promise<bool> persisted();
    /// The estimate method.
    /// [`StorageBucket.estimate`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/estimate)
    jsbind::Promise<StorageEstimate> estimate();
    /// The setExpires method.
    /// [`StorageBucket.setExpires`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/setExpires)
    jsbind::Promise<jsbind::Undefined> setExpires(const jsbind::Any& expires);
    /// The expires method.
    /// [`StorageBucket.expires`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/expires)
    jsbind::Promise<jsbind::Any> expires();
    /// Getter of the `indexedDB` attribute.
    /// [`StorageBucket.indexedDB`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/indexedDB)
    [[nodiscard]] IDBFactory indexedDB() const;
    /// Getter of the `caches` attribute.
    /// [`StorageBucket.caches`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/caches)
    [[nodiscard]] CacheStorage caches() const;
    /// The getDirectory method.
    /// [`StorageBucket.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/StorageBucket/getDirectory)
    jsbind::Promise<FileSystemDirectoryHandle> getDirectory();
};

} // namespace webbind