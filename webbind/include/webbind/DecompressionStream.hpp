#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class ReadableStream;
class WritableStream;

/// Interface DecompressionStream
/// [`DecompressionStream`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream)
class DecompressionStream : public emlite::Val {
    explicit DecompressionStream(Handle h) noexcept;
public:
    explicit DecompressionStream(const emlite::Val &val) noexcept;
    static DecompressionStream take_ownership(Handle h) noexcept;
    [[nodiscard]] DecompressionStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new DecompressionStream(..)` constructor, creating a new DecompressionStream instance
    DecompressionStream(const CompressionFormat& format);
    /// [`DecompressionStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream/readable)
    /// [`DecompressionStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// [`DecompressionStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream/writable)
    /// [`DecompressionStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/DecompressionStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

} // namespace webbind