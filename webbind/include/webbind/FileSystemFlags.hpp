#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type FileSystemFlags
class FileSystemFlags : public emlite::Val {
  explicit FileSystemFlags(Handle h) noexcept;
public:
    static FileSystemFlags take_ownership(Handle h) noexcept;
    explicit FileSystemFlags(const emlite::Val &val) noexcept;
    FileSystemFlags() noexcept;
    [[nodiscard]] FileSystemFlags clone() const noexcept;
    /// Getter of the `create` attribute.
    [[nodiscard]] bool create() const;
    /// Setter of the `create` attribute.
    void create(bool value);
    /// Getter of the `exclusive` attribute.
    [[nodiscard]] bool exclusive() const;
    /// Setter of the `exclusive` attribute.
    void exclusive(bool value);
};

} // namespace webbind