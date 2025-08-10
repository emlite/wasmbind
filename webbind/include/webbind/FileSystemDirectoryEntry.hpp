#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "FileSystemEntry.hpp"
#include "FileSystemFlags.hpp"

namespace webbind {

class FileSystemDirectoryReader;

/// Interface FileSystemDirectoryEntry
/// [`FileSystemDirectoryEntry`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry)
class FileSystemDirectoryEntry : public FileSystemEntry {
    explicit FileSystemDirectoryEntry(Handle h) noexcept;
public:
    explicit FileSystemDirectoryEntry(const emlite::Val &val) noexcept;
    static FileSystemDirectoryEntry take_ownership(Handle h) noexcept;
    [[nodiscard]] FileSystemDirectoryEntry clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The createReader method.
    /// [`FileSystemDirectoryEntry.createReader`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/createReader)
    FileSystemDirectoryReader createReader();
    /// The getFile method.
    /// [`FileSystemDirectoryEntry.getFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getFile)
    jsbind::Undefined getFile();
    /// The getFile method.
    /// [`FileSystemDirectoryEntry.getFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getFile)
    jsbind::Undefined getFile(const jsbind::String& path);
    /// The getFile method.
    /// [`FileSystemDirectoryEntry.getFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getFile)
    jsbind::Undefined getFile(const jsbind::String& path, const FileSystemFlags& options);
    /// The getFile method.
    /// [`FileSystemDirectoryEntry.getFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getFile)
    jsbind::Undefined getFile(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback);
    /// The getFile method.
    /// [`FileSystemDirectoryEntry.getFile`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getFile)
    jsbind::Undefined getFile(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
    /// The getDirectory method.
    /// [`FileSystemDirectoryEntry.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getDirectory)
    jsbind::Undefined getDirectory();
    /// The getDirectory method.
    /// [`FileSystemDirectoryEntry.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getDirectory)
    jsbind::Undefined getDirectory(const jsbind::String& path);
    /// The getDirectory method.
    /// [`FileSystemDirectoryEntry.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getDirectory)
    jsbind::Undefined getDirectory(const jsbind::String& path, const FileSystemFlags& options);
    /// The getDirectory method.
    /// [`FileSystemDirectoryEntry.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getDirectory)
    jsbind::Undefined getDirectory(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback);
    /// The getDirectory method.
    /// [`FileSystemDirectoryEntry.getDirectory`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemDirectoryEntry/getDirectory)
    jsbind::Undefined getDirectory(const jsbind::String& path, const FileSystemFlags& options, const jsbind::Function& successCallback, const jsbind::Function& errorCallback);
};

} // namespace webbind