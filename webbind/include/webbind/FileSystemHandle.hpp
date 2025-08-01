#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FileSystemHandle;
class FileSystemHandlePermissionDescriptor;


class FileSystemHandlePermissionDescriptor : public emlite::Val {
  explicit FileSystemHandlePermissionDescriptor(Handle h) noexcept;
public:
    static FileSystemHandlePermissionDescriptor take_ownership(Handle h) noexcept;
    explicit FileSystemHandlePermissionDescriptor(const emlite::Val &val) noexcept;
    FileSystemHandlePermissionDescriptor() noexcept;
    [[nodiscard]] FileSystemHandlePermissionDescriptor clone() const noexcept;
    [[nodiscard]] FileSystemPermissionMode mode() const;
    void mode(const FileSystemPermissionMode& value);
};

/// The FileSystemHandle class.
/// [`FileSystemHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle)
class FileSystemHandle : public emlite::Val {
    explicit FileSystemHandle(Handle h) noexcept;

public:
    explicit FileSystemHandle(const emlite::Val &val) noexcept;
    static FileSystemHandle take_ownership(Handle h) noexcept;

    [[nodiscard]] FileSystemHandle clone() const noexcept;
    /// Getter of the `kind` attribute.
    /// [`FileSystemHandle.kind`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle/kind)
    [[nodiscard]] FileSystemHandleKind kind() const;
    /// Getter of the `name` attribute.
    /// [`FileSystemHandle.name`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle/name)
    [[nodiscard]] jsbind::String name() const;
    /// The isSameEntry method.
    /// [`FileSystemHandle.isSameEntry`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle/isSameEntry)
    jsbind::Promise<bool> isSameEntry(const FileSystemHandle& other);
    /// The queryPermission method.
    /// [`FileSystemHandle.queryPermission`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle/queryPermission)
    jsbind::Promise<PermissionState> queryPermission();
    /// The queryPermission method.
    /// [`FileSystemHandle.queryPermission`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle/queryPermission)
    jsbind::Promise<PermissionState> queryPermission(const FileSystemHandlePermissionDescriptor& descriptor);
    /// The requestPermission method.
    /// [`FileSystemHandle.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle/requestPermission)
    jsbind::Promise<PermissionState> requestPermission();
    /// The requestPermission method.
    /// [`FileSystemHandle.requestPermission`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandle/requestPermission)
    jsbind::Promise<PermissionState> requestPermission(const FileSystemHandlePermissionDescriptor& descriptor);
};

