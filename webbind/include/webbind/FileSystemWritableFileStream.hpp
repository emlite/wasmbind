#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WritableStream.hpp"
#include "enums.hpp"


/// The FileSystemWritableFileStream class.
/// [`FileSystemWritableFileStream`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemWritableFileStream)
class FileSystemWritableFileStream : public WritableStream {
    explicit FileSystemWritableFileStream(Handle h) noexcept;

public:
    explicit FileSystemWritableFileStream(const emlite::Val &val) noexcept;
    static FileSystemWritableFileStream take_ownership(Handle h) noexcept;

    [[nodiscard]] FileSystemWritableFileStream clone() const noexcept;
    /// The write method.
    /// [`FileSystemWritableFileStream.write`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemWritableFileStream/write)
    jsbind::Promise<jsbind::Undefined> write(const jsbind::Any& data);
    /// The seek method.
    /// [`FileSystemWritableFileStream.seek`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemWritableFileStream/seek)
    jsbind::Promise<jsbind::Undefined> seek(long long position);
    /// The truncate method.
    /// [`FileSystemWritableFileStream.truncate`](https://developer.mozilla.org/en-US/docs/Web/API/FileSystemWritableFileStream/truncate)
    jsbind::Promise<jsbind::Undefined> truncate(long long size);
};

