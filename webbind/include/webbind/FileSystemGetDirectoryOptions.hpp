#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemGetDirectoryOptions
/// [`FileSystemGetDirectoryOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemGetDirectoryOptions)
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

} // namespace webbind