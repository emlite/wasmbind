#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "StorageManager.hpp"
#include "enums.hpp"

class Storage;
class IDBFactory;
class LockManager;
class CacheStorage;
class FileSystemDirectoryHandle;
class BroadcastChannel;
class SharedWorker;


class StorageAccessHandle : public emlite::Val {
    explicit StorageAccessHandle(Handle h) noexcept;

public:
    explicit StorageAccessHandle(const emlite::Val &val) noexcept;
    static StorageAccessHandle take_ownership(Handle h) noexcept;

    StorageAccessHandle clone() const noexcept;
    Storage sessionStorage() const;
    Storage localStorage() const;
    IDBFactory indexedDB() const;
    LockManager locks() const;
    CacheStorage caches() const;
    jsbind::Promise getDirectory();
    jsbind::Promise estimate();
    jsbind::DOMString createObjectURL(const jsbind::Any& obj);
    jsbind::Undefined revokeObjectURL(const jsbind::DOMString& url);
    BroadcastChannel BroadcastChannel_(const jsbind::DOMString& name);
    SharedWorker SharedWorker_(const jsbind::USVString& scriptURL);
    SharedWorker SharedWorker_(const jsbind::USVString& scriptURL, const jsbind::Any& options);
};

