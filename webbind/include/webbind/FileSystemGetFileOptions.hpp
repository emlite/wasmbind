#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemGetFileOptions
class FileSystemGetFileOptions : public emlite::Val {
  explicit FileSystemGetFileOptions(Handle h) noexcept;
public:
    static FileSystemGetFileOptions take_ownership(Handle h) noexcept;
    explicit FileSystemGetFileOptions(const emlite::Val &val) noexcept;
    FileSystemGetFileOptions() noexcept;
    [[nodiscard]] FileSystemGetFileOptions clone() const noexcept;
    /// Getter of the `create` attribute.
    [[nodiscard]] bool create() const;
    /// Setter of the `create` attribute.
    void create(bool value);
};

} // namespace webbind