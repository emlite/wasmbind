#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "StorageManager.hpp"
#include "enums.hpp"

class IDBFactory;
class CacheStorage;
class FileSystemDirectoryHandle;


class StorageBucket : public emlite::Val {
    explicit StorageBucket(Handle h) noexcept;

public:
    explicit StorageBucket(const emlite::Val &val) noexcept;
    static StorageBucket take_ownership(Handle h) noexcept;

    StorageBucket clone() const noexcept;
    jsbind::DOMString name() const;
    jsbind::Promise<bool> persist();
    jsbind::Promise<bool> persisted();
    jsbind::Promise<StorageEstimate> estimate();
    jsbind::Promise<jsbind::Undefined> setExpires(const jsbind::Any& expires);
    jsbind::Promise<jsbind::Any> expires();
    IDBFactory indexedDB() const;
    CacheStorage caches() const;
    jsbind::Promise<FileSystemDirectoryHandle> getDirectory();
};

