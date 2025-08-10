#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class FileSystem;

/// Interface FileSystemEntry
/// [`FileSystemEntry`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry)
class FileSystemEntry : public emlite::Val {
    explicit FileSystemEntry(Handle h) noexcept;
public:
    explicit FileSystemEntry(const emlite::Val &val) noexcept;
    static FileSystemEntry take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `isFile` attribute.
    /// [`FileSystemEntry.isFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/isFile)
    [[nodiscard]] bool isFile() const;
    /// Getter of the `isDirectory` attribute.
    /// [`FileSystemEntry.isDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/isDirectory)
    [[nodiscard]] bool isDirectory() const;
    /// Getter of the `name` attribute.
    /// [`FileSystemEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `fullPath` attribute.
    /// [`FileSystemEntry.fullPath`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/fullPath)
    [[nodiscard]] jsbind::String fullPath() const;
    /// Getter of the `filesystem` attribute.
    /// [`FileSystemEntry.filesystem`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/filesystem)
    [[nodiscard]] FileSystem filesystem() const;
    /// The getParent method.
    /// [`FileSystemEntry.getParent`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/getParent)
    jsbind::Undefined getParent();
    /// The getParent method.
    /// [`FileSystemEntry.getParent`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/getParent)
    jsbind::Undefined getParent(const jsbind::Function& successCallback);
    /// The getParent method.
    /// [`FileSystemEntry.getParent`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/getParent)
    jsbind::Undefined getParent(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

} // namespace webbind