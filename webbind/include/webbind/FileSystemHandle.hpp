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
    FileSystemHandlePermissionDescriptor clone() const noexcept;
    FileSystemPermissionMode mode() const;
    void mode(const FileSystemPermissionMode& value);
};

class FileSystemHandle : public emlite::Val {
    explicit FileSystemHandle(Handle h) noexcept;

public:
    explicit FileSystemHandle(const emlite::Val &val) noexcept;
    static FileSystemHandle take_ownership(Handle h) noexcept;

    FileSystemHandle clone() const noexcept;
    FileSystemHandleKind kind() const;
    jsbind::USVString name() const;
    jsbind::Promise<bool> isSameEntry(const FileSystemHandle& other);
    jsbind::Promise<PermissionState> queryPermission();
    jsbind::Promise<PermissionState> queryPermission(const FileSystemHandlePermissionDescriptor& descriptor);
    jsbind::Promise<PermissionState> requestPermission();
    jsbind::Promise<PermissionState> requestPermission(const FileSystemHandlePermissionDescriptor& descriptor);
};

