#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemCreateWritableOptions
/// [`FileSystemCreateWritableOptions`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemCreateWritableOptions)
class FileSystemCreateWritableOptions : public emlite::Val {
  explicit FileSystemCreateWritableOptions(Handle h) noexcept;
public:
    static FileSystemCreateWritableOptions take_ownership(Handle h) noexcept;
    explicit FileSystemCreateWritableOptions(const emlite::Val &val) noexcept;
    FileSystemCreateWritableOptions() noexcept;
    [[nodiscard]] FileSystemCreateWritableOptions clone() const noexcept;
    [[nodiscard]] bool keepExistingData() const;
    void keepExistingData(bool value);
};

} // namespace webbind