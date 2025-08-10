#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "StorageEstimate.hpp"

namespace webbind {

class Storage;
class IDBFactory;
class LockManager;
class CacheStorage;
class FileSystemDirectoryHandle;
class BroadcastChannel;
class SharedWorker;

/// Interface StorageAccessHandle
/// [`StorageAccessHandle`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle)
class StorageAccessHandle : public emlite::Val {
    explicit StorageAccessHandle(Handle h) noexcept;
public:
    explicit StorageAccessHandle(const emlite::Val &val) noexcept;
    static StorageAccessHandle take_ownership(Handle h) noexcept;
    [[nodiscard]] StorageAccessHandle clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `sessionStorage` attribute.
    /// [`StorageAccessHandle.sessionStorage`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/sessionStorage)
    [[nodiscard]] Storage sessionStorage() const;
    /// Getter of the `localStorage` attribute.
    /// [`StorageAccessHandle.localStorage`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/localStorage)
    [[nodiscard]] Storage localStorage() const;
    /// Getter of the `indexedDB` attribute.
    /// [`StorageAccessHandle.indexedDB`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/indexedDB)
    [[nodiscard]] IDBFactory indexedDB() const;
    /// Getter of the `locks` attribute.
    /// [`StorageAccessHandle.locks`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/locks)
    [[nodiscard]] LockManager locks() const;
    /// Getter of the `caches` attribute.
    /// [`StorageAccessHandle.caches`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/caches)
    [[nodiscard]] CacheStorage caches() const;
    /// The getDirectory method.
    /// [`StorageAccessHandle.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/getDirectory)
    jsbind::Promise<FileSystemDirectoryHandle> getDirectory();
    /// The estimate method.
    /// [`StorageAccessHandle.estimate`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/estimate)
    jsbind::Promise<StorageEstimate> estimate();
    /// The createObjectURL method.
    /// [`StorageAccessHandle.createObjectURL`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/createObjectURL)
    jsbind::String createObjectURL(const jsbind::Any& obj);
    /// The revokeObjectURL method.
    /// [`StorageAccessHandle.revokeObjectURL`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/revokeObjectURL)
    jsbind::Undefined revokeObjectURL(const jsbind::String& url);
    /// The BroadcastChannel method.
    /// [`StorageAccessHandle.BroadcastChannel`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/BroadcastChannel)
    BroadcastChannel BroadcastChannel_(const jsbind::String& name);
    /// The SharedWorker method.
    /// [`StorageAccessHandle.SharedWorker`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/SharedWorker)
    SharedWorker SharedWorker_(const jsbind::String& scriptURL);
    /// The SharedWorker method.
    /// [`StorageAccessHandle.SharedWorker`](https://developer.mozilla.org/en-US/docs/Web/API/StorageAccessHandle/SharedWorker)
    SharedWorker SharedWorker_(const jsbind::String& scriptURL, const jsbind::Any& options);
};

} // namespace webbind