#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "FileSystemHandle.hpp"
#include "FileSystemCreateWritableOptions.hpp"

namespace webbind {

class File;
class FileSystemWritableFileStream;
class FileSystemSyncAccessHandle;

/// Interface FileSystemFileHandle
/// [`FileSystemFileHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileHandle)
class FileSystemFileHandle : public FileSystemHandle {
    explicit FileSystemFileHandle(Handle h) noexcept;
public:
    explicit FileSystemFileHandle(const emlite::Val &val) noexcept;
    static FileSystemFileHandle take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemFileHandle clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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

} // namespace webbind