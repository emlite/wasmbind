#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemGetDirectoryOptions
class FileSystemGetDirectoryOptions : public emlite::Val {
  explicit FileSystemGetDirectoryOptions(Handle h) noexcept;
public:
    static FileSystemGetDirectoryOptions take_ownership(Handle h) noexcept;
    explicit FileSystemGetDirectoryOptions(const emlite::Val &val) noexcept;
    FileSystemGetDirectoryOptions() noexcept;
    [[nodiscard]] FileSystemGetDirectoryOptions clone() const noexcept;
    /// Getter of the `create` attribute.
    [[nodiscard]] bool create() const;
    /// Setter of the `create` attribute.
    void create(bool value);
};

} // namespace webbind