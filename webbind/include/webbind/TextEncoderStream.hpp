#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class ReadableStream;
class WritableStream;

/// Interface TextEncoderStream
/// [`TextEncoderStream`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream)
class TextEncoderStream : public emlite::Val {
    explicit TextEncoderStream(Handle h) noexcept;
public:
    explicit TextEncoderStream(const emlite::Val &val) noexcept;
    static TextEncoderStream take_ownership(Handle h) noexcept;
    [[nodiscard]] TextEncoderStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextEncoderStream(..)` constructor, creating a new TextEncoderStream instance
    TextEncoderStream();
    /// [`TextEncoderStream.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/encoding)
    /// [`TextEncoderStream.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// [`TextEncoderStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/readable)
    /// [`TextEncoderStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// [`TextEncoderStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/writable)
    /// [`TextEncoderStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

} // namespace webbind