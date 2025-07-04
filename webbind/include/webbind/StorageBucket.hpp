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
    jsbind::Promise persist();
    jsbind::Promise persisted();
    jsbind::Promise estimate();
    jsbind::Promise setExpires(const jsbind::Any& expires);
    jsbind::Promise expires();
    IDBFactory indexedDB() const;
    CacheStorage caches() const;
    jsbind::Promise getDirectory();
};

