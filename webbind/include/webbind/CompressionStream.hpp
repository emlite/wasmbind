#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


class CompressionStream : public emlite::Val {
    explicit CompressionStream(Handle h) noexcept;

public:
    explicit CompressionStream(const emlite::Val &val) noexcept;
    static CompressionStream take_ownership(Handle h) noexcept;

    CompressionStream clone() const noexcept;
    CompressionStream(const CompressionFormat& format);
    ReadableStream readable() const;
    WritableStream writable() const;
};

