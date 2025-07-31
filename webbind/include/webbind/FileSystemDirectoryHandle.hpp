#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "FileSystemHandle.hpp"
#include "enums.hpp"

class FileSystemFileHandle;
class FileSystemGetFileOptions;
class FileSystemDirectoryHandle;
class FileSystemGetDirectoryOptions;
class FileSystemRemoveOptions;


class FileSystemGetFileOptions : public emlite::Val {
  explicit FileSystemGetFileOptions(Handle h) noexcept;
public:
    static FileSystemGetFileOptions take_ownership(Handle h) noexcept;
    explicit FileSystemGetFileOptions(const emlite::Val &val) noexcept;
    FileSystemGetFileOptions() noexcept;
    [[nodiscard]] FileSystemGetFileOptions clone() const noexcept;
    [[nodiscard]] bool create() const;
    void create(bool value);
};

class FileSystemGetDirectoryOptions : public emlite::Val {
  explicit FileSystemGetDirectoryOptions(Handle h) noexcept;
public:
    static FileSystemGetDirectoryOptions take_ownership(Handle h) noexcept;
    explicit FileSystemGetDirectoryOptions(const emlite::Val &val) noexcept;
    FileSystemGetDirectoryOptions() noexcept;
    [[nodiscard]] FileSystemGetDirectoryOptions clone() const noexcept;
    [[nodiscard]] bool create() const;
    void create(bool value);
};

class FileSystemRemoveOptions : public emlite::Val {
  explicit FileSystemRemoveOptions(Handle h) noexcept;
public:
    static FileSystemRemoveOptions take_ownership(Handle h) noexcept;
    explicit FileSystemRemoveOptions(const emlite::Val &val) noexcept;
    FileSystemRemoveOptions() noexcept;
    [[nodiscard]] FileSystemRemoveOptions clone() const noexcept;
    [[nodiscard]] bool recursive() const;
    void recursive(bool value);
};

/// The FileSystemDirectoryHandle class.
/// [`FileSystemDirectoryHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryHandle)
class FileSystemDirectoryHandle : public FileSystemHandle {
    explicit FileSystemDirectoryHandle(Handle h) noexcept;

public:
    explicit FileSystemDirectoryHandle(const emlite::Val &val) noexcept;
    static FileSystemDirectoryHandle take_ownership(Handle h) noexcept;

    [[nodiscard]] FileSystemDirectoryHandle clone() const noexcept;
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

