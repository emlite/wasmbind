#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


/// The DecompressionStream class.
/// [`DecompressionStream`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream)
class DecompressionStream : public emlite::Val {
    explicit DecompressionStream(Handle h) noexcept;

public:
    explicit DecompressionStream(const emlite::Val &val) noexcept;
    static DecompressionStream take_ownership(Handle h) noexcept;

    [[nodiscard]] DecompressionStream clone() const noexcept;
    /// The `new DecompressionStream(..)` constructor, creating a new DecompressionStream instance
    DecompressionStream(const CompressionFormat& format);
    /// Getter of the `readable` attribute.
    /// [`DecompressionStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`DecompressionStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

