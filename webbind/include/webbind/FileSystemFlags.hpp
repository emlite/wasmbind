#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemFlags
/// [`FileSystemFlags`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFlags)
class FileSystemFlags : public emlite::Val {
  explicit FileSystemFlags(Handle h) noexcept;
public:
    static FileSystemFlags take_ownership(Handle h) noexcept;
    explicit FileSystemFlags(const emlite::Val &val) noexcept;
    FileSystemFlags() noexcept;
    [[nodiscard]] FileSystemFlags clone() const noexcept;
    [[nodiscard]] bool create() const;
    void create(bool value);
    [[nodiscard]] bool exclusive() const;
    void exclusive(bool value);
};

} // namespace webbind