#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemRemoveOptions
/// [`FileSystemRemoveOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemRemoveOptions)
class FileSystemRemoveOptions : public emlite::Val {
  explicit FileSystemRemoveOptions(Handle h) noexcept;
public:
    static FileSystemRemoveOptions take_ownership(Handle h) noexcept;
    explicit FileSystemRemoveOptions(const emlite::Val &val) noexcept;
    FileSystemRemoveOptions() noexcept;
    [[nodiscard]] FileSystemRemoveOptions clone() const noexcept;
    [[nodiscard]] bool recursive() const;
    void recursive(bool value);
};

} // namespace webbind