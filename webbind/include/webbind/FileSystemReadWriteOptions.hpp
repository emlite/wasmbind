#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemReadWriteOptions
/// [`FileSystemReadWriteOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemReadWriteOptions)
class FileSystemReadWriteOptions : public emlite::Val {
  explicit FileSystemReadWriteOptions(Handle h) noexcept;
public:
    static FileSystemReadWriteOptions take_ownership(Handle h) noexcept;
    explicit FileSystemReadWriteOptions(const emlite::Val &val) noexcept;
    FileSystemReadWriteOptions() noexcept;
    [[nodiscard]] FileSystemReadWriteOptions clone() const noexcept;
    [[nodiscard]] long long at() const;
    void at(long long value);
};

} // namespace webbind