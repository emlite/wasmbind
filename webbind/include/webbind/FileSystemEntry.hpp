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
    /// [`FileSystemEntry.isFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/isFile)
    /// [`FileSystemEntry.isFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/isFile)
    [[nodiscard]] bool isFile() const;
    /// [`FileSystemEntry.isDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/isDirectory)
    /// [`FileSystemEntry.isDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/isDirectory)
    [[nodiscard]] bool isDirectory() const;
    /// [`FileSystemEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/name)
    /// [`FileSystemEntry.name`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`FileSystemEntry.fullPath`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/fullPath)
    /// [`FileSystemEntry.fullPath`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/fullPath)
    [[nodiscard]] jsbind::String fullPath() const;
    /// [`FileSystemEntry.filesystem`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemEntry/filesystem)
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