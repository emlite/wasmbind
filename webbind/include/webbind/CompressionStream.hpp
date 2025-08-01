#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


/// The CompressionStream class.
/// [`CompressionStream`](https://developer.mozilla.org/en-US/docs/Web/API/CompressionStream)
class CompressionStream : public emlite::Val {
    explicit CompressionStream(Handle h) noexcept;

public:
    explicit CompressionStream(const emlite::Val &val) noexcept;
    static CompressionStream take_ownership(Handle h) noexcept;

    [[nodiscard]] CompressionStream clone() const noexcept;
    /// The `new CompressionStream(..)` constructor, creating a new CompressionStream instance
    CompressionStream(const CompressionFormat& format);
    /// Getter of the `readable` attribute.
    /// [`CompressionStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/CompressionStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`CompressionStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/CompressionStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

