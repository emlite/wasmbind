#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "FileSystemHandle.hpp"

namespace webbind {

class FileSystemFileHandle;
class FileSystemGetFileOptions;
class FileSystemDirectoryHandle;
class FileSystemGetDirectoryOptions;
class FileSystemRemoveOptions;

/// Interface FileSystemDirectoryHandle
/// [`FileSystemDirectoryHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle)
class FileSystemDirectoryHandle : public FileSystemHandle {
    explicit FileSystemDirectoryHandle(Handle h) noexcept;
public:
    explicit FileSystemDirectoryHandle(const emlite::Val &val) noexcept;
    static FileSystemDirectoryHandle take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemDirectoryHandle clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The getFileHandle method.
    /// [`FileSystemDirectoryHandle.getFileHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle/getFileHandle)
    jsbind::Promise<FileSystemFileHandle> getFileHandle(const jsbind::String& name);
    /// The getFileHandle method.
    /// [`FileSystemDirectoryHandle.getFileHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle/getFileHandle)
    jsbind::Promise<FileSystemFileHandle> getFileHandle(const jsbind::String& name, const FileSystemGetFileOptions& options);
    /// The getDirectoryHandle method.
    /// [`FileSystemDirectoryHandle.getDirectoryHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle/getDirectoryHandle)
    jsbind::Promise<FileSystemDirectoryHandle> getDirectoryHandle(const jsbind::String& name);
    /// The getDirectoryHandle method.
    /// [`FileSystemDirectoryHandle.getDirectoryHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle/getDirectoryHandle)
    jsbind::Promise<FileSystemDirectoryHandle> getDirectoryHandle(const jsbind::String& name, const FileSystemGetDirectoryOptions& options);
    /// The removeEntry method.
    /// [`FileSystemDirectoryHandle.removeEntry`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle/removeEntry)
    jsbind::Promise<jsbind::Undefined> removeEntry(const jsbind::String& name);
    /// The removeEntry method.
    /// [`FileSystemDirectoryHandle.removeEntry`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle/removeEntry)
    jsbind::Promise<jsbind::Undefined> removeEntry(const jsbind::String& name, const FileSystemRemoveOptions& options);
    /// The resolve method.
    /// [`FileSystemDirectoryHandle.resolve`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle/resolve)
    jsbind::Promise<jsbind::TypedArray<jsbind::String>> resolve(const FileSystemHandle& possibleDescendant);
};

} // namespace webbind