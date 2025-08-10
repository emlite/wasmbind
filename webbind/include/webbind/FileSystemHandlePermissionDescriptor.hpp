#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemHandlePermissionDescriptor
/// [`FileSystemHandlePermissionDescriptor`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemHandlePermissionDescriptor)
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

} // namespace webbind