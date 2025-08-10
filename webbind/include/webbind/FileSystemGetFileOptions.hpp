#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemGetFileOptions
/// [`FileSystemGetFileOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemGetFileOptions)
class FileSystemGetFileOptions : public emlite::Val {
  explicit FileSystemGetFileOptions(Handle h) noexcept;
public:
    static FileSystemGetFileOptions take_ownership(Handle h) noexcept;
    explicit FileSystemGetFileOptions(const emlite::Val &val) noexcept;
    FileSystemGetFileOptions() noexcept;
    [[nodiscard]] FileSystemGetFileOptions clone() const noexcept;
    [[nodiscard]] bool create() const;
    void create(bool value);
};

} // namespace webbind