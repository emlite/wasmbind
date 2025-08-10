#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class FileSystemDirectoryEntry;

/// Interface FileSystem
/// [`FileSystem`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystem)
class FileSystem : public emlite::Val {
    explicit FileSystem(Handle h) noexcept;
public:
    explicit FileSystem(const emlite::Val &val) noexcept;
    static FileSystem take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystem clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `name` attribute.
    /// [`FileSystem.name`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystem/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `root` attribute.
    /// [`FileSystem.root`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystem/root)
    [[nodiscard]] FileSystemDirectoryEntry root() const;
};

} // namespace webbind