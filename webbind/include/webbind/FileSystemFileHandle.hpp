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
    [[nodiscard]] FileSystemCreateWritableOptions clone() const noexcept;
    [[nodiscard]] bool keepExistingData() const;
    void keepExistingData(bool value);
};

/// The FileSystemFileHandle class.
/// [`FileSystemFileHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileHandle)
class FileSystemFileHandle : public FileSystemHandle {
    explicit FileSystemFileHandle(Handle h) noexcept;

public:
    explicit FileSystemFileHandle(const emlite::Val &val) noexcept;
    static FileSystemFileHandle take_ownership(Handle h) noexcept;

    [[nodiscard]] FileSystemFileHandle clone() const noexcept;
    /// The getFile method.
    /// [`FileSystemFileHandle.getFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileHandle/getFile)
    jsbind::Promise<File> getFile();
    /// The createWritable method.
    /// [`FileSystemFileHandle.createWritable`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileHandle/createWritable)
    jsbind::Promise<FileSystemWritableFileStream> createWritable();
    /// The createWritable method.
    /// [`FileSystemFileHandle.createWritable`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileHandle/createWritable)
    jsbind::Promise<FileSystemWritableFileStream> createWritable(const FileSystemCreateWritableOptions& options);
    /// The createSyncAccessHandle method.
    /// [`FileSystemFileHandle.createSyncAccessHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileHandle/createSyncAccessHandle)
    jsbind::Promise<FileSystemSyncAccessHandle> createSyncAccessHandle();
};

