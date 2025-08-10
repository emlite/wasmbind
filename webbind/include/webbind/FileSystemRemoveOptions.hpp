#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemRemoveOptions
class FileSystemRemoveOptions : public emlite::Val {
  explicit FileSystemRemoveOptions(Handle h) noexcept;
public:
    static FileSystemRemoveOptions take_ownership(Handle h) noexcept;
    explicit FileSystemRemoveOptions(const emlite::Val &val) noexcept;
    FileSystemRemoveOptions() noexcept;
    [[nodiscard]] FileSystemRemoveOptions clone() const noexcept;
    /// Getter of the `recursive` attribute.
    [[nodiscard]] bool recursive() const;
    /// Setter of the `recursive` attribute.
    void recursive(bool value);
};

} // namespace webbind