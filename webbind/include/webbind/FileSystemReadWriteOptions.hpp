#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemReadWriteOptions
class FileSystemReadWriteOptions : public emlite::Val {
  explicit FileSystemReadWriteOptions(Handle h) noexcept;
public:
    static FileSystemReadWriteOptions take_ownership(Handle h) noexcept;
    explicit FileSystemReadWriteOptions(const emlite::Val &val) noexcept;
    FileSystemReadWriteOptions() noexcept;
    [[nodiscard]] FileSystemReadWriteOptions clone() const noexcept;
    /// Getter of the `at` attribute.
    [[nodiscard]] long long at() const;
    /// Setter of the `at` attribute.
    void at(long long value);
};

} // namespace webbind