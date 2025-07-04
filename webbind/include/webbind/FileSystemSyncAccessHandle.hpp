#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FileSystemReadWriteOptions;


class FileSystemReadWriteOptions : public emlite::Val {
  explicit FileSystemReadWriteOptions(Handle h) noexcept;
public:
    static FileSystemReadWriteOptions take_ownership(Handle h) noexcept;
    explicit FileSystemReadWriteOptions(const emlite::Val &val) noexcept;
    FileSystemReadWriteOptions() noexcept;
    FileSystemReadWriteOptions clone() const noexcept;
    long long at() const;
    void at(long long value);
};

class FileSystemSyncAccessHandle : public emlite::Val {
    explicit FileSystemSyncAccessHandle(Handle h) noexcept;

public:
    explicit FileSystemSyncAccessHandle(const emlite::Val &val) noexcept;
    static FileSystemSyncAccessHandle take_ownership(Handle h) noexcept;

    FileSystemSyncAccessHandle clone() const noexcept;
    long long read(const jsbind::Any& buffer, const FileSystemReadWriteOptions& options);
    long long write(const jsbind::Any& buffer, const FileSystemReadWriteOptions& options);
    jsbind::Undefined truncate(long long newSize);
    long long getSize();
    jsbind::Undefined flush();
    jsbind::Undefined close();
};

