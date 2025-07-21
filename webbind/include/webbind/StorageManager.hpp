#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class StorageEstimate;
class FileSystemDirectoryHandle;


class StorageEstimate : public emlite::Val {
  explicit StorageEstimate(Handle h) noexcept;
public:
    static StorageEstimate take_ownership(Handle h) noexcept;
    explicit StorageEstimate(const emlite::Val &val) noexcept;
    StorageEstimate() noexcept;
    StorageEstimate clone() const noexcept;
    long long usage() const;
    void usage(long long value);
    long long quota() const;
    void quota(long long value);
};

class StorageManager : public emlite::Val {
    explicit StorageManager(Handle h) noexcept;

public:
    explicit StorageManager(const emlite::Val &val) noexcept;
    static StorageManager take_ownership(Handle h) noexcept;

    StorageManager clone() const noexcept;
    jsbind::Promise<bool> persisted();
    jsbind::Promise<bool> persist();
    jsbind::Promise<StorageEstimate> estimate();
    jsbind::Promise<FileSystemDirectoryHandle> getDirectory();
};

