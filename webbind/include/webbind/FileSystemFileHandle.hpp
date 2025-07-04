#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "FileSystemHandle.hpp"
#include "enums.hpp"

class File;
class FileSystemWritableFileStream;
class FileSystemCreateWritableOptions;
class FileSystemSyncAccessHandle;


class FileSystemCreateWritableOptions : public emlite::Val {
  explicit FileSystemCreateWritableOptions(Handle h) noexcept;
public:
    static FileSystemCreateWritableOptions take_ownership(Handle h) noexcept;
    explicit FileSystemCreateWritableOptions(const emlite::Val &val) noexcept;
    FileSystemCreateWritableOptions() noexcept;
    FileSystemCreateWritableOptions clone() const noexcept;
    bool keepExistingData() const;
    void keepExistingData(bool value);
};

class FileSystemFileHandle : public FileSystemHandle {
    explicit FileSystemFileHandle(Handle h) noexcept;

public:
    explicit FileSystemFileHandle(const emlite::Val &val) noexcept;
    static FileSystemFileHandle take_ownership(Handle h) noexcept;

    FileSystemFileHandle clone() const noexcept;
    jsbind::Promise getFile();
    jsbind::Promise createWritable(const FileSystemCreateWritableOptions& options);
    jsbind::Promise createSyncAccessHandle();
};

