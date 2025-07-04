#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "WritableStream.hpp"
#include "enums.hpp"


class FileSystemWritableFileStream : public WritableStream {
    explicit FileSystemWritableFileStream(Handle h) noexcept;

public:
    explicit FileSystemWritableFileStream(const emlite::Val &val) noexcept;
    static FileSystemWritableFileStream take_ownership(Handle h) noexcept;

    FileSystemWritableFileStream clone() const noexcept;
    jsbind::Promise write(const jsbind::Any& data);
    jsbind::Promise seek(long long position);
    jsbind::Promise truncate(long long size);
};

