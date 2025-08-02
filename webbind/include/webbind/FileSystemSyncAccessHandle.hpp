#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class FileSystemReadWriteOptions;


class FileSystemReadWriteOptions : public emlite::Val {
  explicit FileSystemReadWriteOptions(Handle h) noexcept;
public:
    static FileSystemReadWriteOptions take_ownership(Handle h) noexcept;
    explicit FileSystemReadWriteOptions(const emlite::Val &val) noexcept;
    FileSystemReadWriteOptions() noexcept;
    [[nodiscard]] FileSystemReadWriteOptions clone() const noexcept;
    [[nodiscard]] long long at() const;
    void at(long long value);
};

/// The FileSystemSyncAccessHandle class.
/// [`FileSystemSyncAccessHandle`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle)
class FileSystemSyncAccessHandle : public emlite::Val {
    explicit FileSystemSyncAccessHandle(Handle h) noexcept;

public:
    explicit FileSystemSyncAccessHandle(const emlite::Val &val) noexcept;
    static FileSystemSyncAccessHandle take_ownership(Handle h) noexcept;

    [[nodiscard]] FileSystemSyncAccessHandle clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The read method.
    /// [`FileSystemSyncAccessHandle.read`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/read)
    long long read(const jsbind::Any& buffer);
    /// The read method.
    /// [`FileSystemSyncAccessHandle.read`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/read)
    long long read(const jsbind::Any& buffer, const FileSystemReadWriteOptions& options);
    /// The write method.
    /// [`FileSystemSyncAccessHandle.write`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/write)
    long long write(const jsbind::Any& buffer);
    /// The write method.
    /// [`FileSystemSyncAccessHandle.write`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/write)
    long long write(const jsbind::Any& buffer, const FileSystemReadWriteOptions& options);
    /// The truncate method.
    /// [`FileSystemSyncAccessHandle.truncate`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/truncate)
    jsbind::Undefined truncate(long long newSize);
    /// The getSize method.
    /// [`FileSystemSyncAccessHandle.getSize`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/getSize)
    long long getSize();
    /// The flush method.
    /// [`FileSystemSyncAccessHandle.flush`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/flush)
    jsbind::Undefined flush();
    /// The close method.
    /// [`FileSystemSyncAccessHandle.close`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemSyncAccessHandle/close)
    jsbind::Undefined close();
};

