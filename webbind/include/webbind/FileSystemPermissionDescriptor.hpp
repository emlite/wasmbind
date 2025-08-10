#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "PermissionDescriptor.hpp"

namespace webbind {

class FileSystemHandle;

/// Dictionary type FileSystemPermissionDescriptor
class FileSystemPermissionDescriptor : public PermissionDescriptor {
  explicit FileSystemPermissionDescriptor(Handle h) noexcept;
public:
    static FileSystemPermissionDescriptor take_ownership(Handle h) noexcept;
    explicit FileSystemPermissionDescriptor(const emlite::Val &val) noexcept;
    FileSystemPermissionDescriptor() noexcept;
    [[nodiscard]] FileSystemPermissionDescriptor clone() const noexcept;
    /// Getter of the `handle` attribute.
    [[nodiscard]] FileSystemHandle handle() const;
    /// Setter of the `handle` attribute.
    void handle(const FileSystemHandle& value);
    /// Getter of the `mode` attribute.
    [[nodiscard]] FileSystemPermissionMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const FileSystemPermissionMode& value);
};

} // namespace webbind