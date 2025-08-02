#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "FileSystemEntry.hpp"
#include "enums.hpp"


/// The FileSystemFileEntry class.
/// [`FileSystemFileEntry`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileEntry)
class FileSystemFileEntry : public FileSystemEntry {
    explicit FileSystemFileEntry(Handle h) noexcept;

public:
    explicit FileSystemFileEntry(const emlite::Val &val) noexcept;
    static FileSystemFileEntry take_ownership(Handle h) noexcept;

    [[nodiscard]] FileSystemFileEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The file method.
    /// [`FileSystemFileEntry.file`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileEntry/file)
    jsbind::Undefined file(const jsbind::Function& successCallback);
    /// The file method.
    /// [`FileSystemFileEntry.file`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemFileEntry/file)
    jsbind::Undefined file(const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

