#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type DirectoryPickerOptions
/// [`DirectoryPickerOptions`](https://developer.mozilla.org/en-US/docs/Web/API/DirectoryPickerOptions)
class DirectoryPickerOptions : public emlite::Val {
  explicit DirectoryPickerOptions(Handle h) noexcept;
public:
    static DirectoryPickerOptions take_ownership(Handle h) noexcept;
    explicit DirectoryPickerOptions(const emlite::Val &val) noexcept;
    DirectoryPickerOptions() noexcept;
    [[nodiscard]] DirectoryPickerOptions clone() const noexcept;
    [[nodiscard]] jsbind::String id() const;
    void id(const jsbind::String& value);
    [[nodiscard]] jsbind::Any startIn() const;
    void startIn(const jsbind::Any& value);
    [[nodiscard]] FileSystemPermissionMode mode() const;
    void mode(const FileSystemPermissionMode& value);
};

} // namespace webbind