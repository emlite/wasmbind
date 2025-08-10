#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemCreateWritableOptions
class FileSystemCreateWritableOptions : public emlite::Val {
  explicit FileSystemCreateWritableOptions(Handle h) noexcept;
public:
    static FileSystemCreateWritableOptions take_ownership(Handle h) noexcept;
    explicit FileSystemCreateWritableOptions(const emlite::Val &val) noexcept;
    FileSystemCreateWritableOptions() noexcept;
    [[nodiscard]] FileSystemCreateWritableOptions clone() const noexcept;
    /// Getter of the `keepExistingData` attribute.
    [[nodiscard]] bool keepExistingData() const;
    /// Setter of the `keepExistingData` attribute.
    void keepExistingData(bool value);
};

} // namespace webbind