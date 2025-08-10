#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DirectoryPickerOptions
class DirectoryPickerOptions : public emlite::Val {
  explicit DirectoryPickerOptions(Handle h) noexcept;
public:
    static DirectoryPickerOptions take_ownership(Handle h) noexcept;
    explicit DirectoryPickerOptions(const emlite::Val &val) noexcept;
    DirectoryPickerOptions() noexcept;
    [[nodiscard]] DirectoryPickerOptions clone() const noexcept;
    /// Getter of the `id` attribute.
    [[nodiscard]] jsbind::String id() const;
    /// Setter of the `id` attribute.
    void id(const jsbind::String& value);
    /// Getter of the `startIn` attribute.
    [[nodiscard]] jsbind::Any startIn() const;
    /// Setter of the `startIn` attribute.
    void startIn(const jsbind::Any& value);
    /// Getter of the `mode` attribute.
    [[nodiscard]] FileSystemPermissionMode mode() const;
    /// Setter of the `mode` attribute.
    void mode(const FileSystemPermissionMode& value);
};

} // namespace webbind