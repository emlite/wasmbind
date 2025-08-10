#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

class FileSystemHandle;

/// Dictionary type FileSystemPermissionDescriptor
/// [`FileSystemPermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemPermissionDescriptor)
class FileSystemPermissionDescriptor : public PermissionDescriptor {
  explicit FileSystemPermissionDescriptor(Handle h) noexcept;
public:
    static FileSystemPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit FileSystemPermissionDescriptor(const emlite::Val &val) noexcept;
    FileSystemPermissionDescriptor() noexcept;
    [[nodiscard]] FileSystemPermissionDescriptor clone() const noexcept;
    [[nodiscard]] FileSystemHandle handle() const;
    void handle(const FileSystemHandle& value);
    [[nodiscard]] FileSystemPermissionMode mode() const;
    void mode(const FileSystemPermissionMode& value);
};

} // namespace webbind