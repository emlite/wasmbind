#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


class DecompressionStream : public emlite::Val {
    explicit DecompressionStream(Handle h) noexcept;

public:
    explicit DecompressionStream(const emlite::Val &val) noexcept;
    static DecompressionStream take_ownership(Handle h) noexcept;

    DecompressionStream clone() const noexcept;
    DecompressionStream(const CompressionFormat& format);
    ReadableStream readable() const;
    WritableStream writable() const;
};

