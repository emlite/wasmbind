#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


/// The TextEncoderStream class.
/// [`TextEncoderStream`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream)
class TextEncoderStream : public emlite::Val {
    explicit TextEncoderStream(Handle h) noexcept;

public:
    explicit TextEncoderStream(const emlite::Val &val) noexcept;
    static TextEncoderStream take_ownership(Handle h) noexcept;

    [[nodiscard]] TextEncoderStream clone() const noexcept;
    /// The `new TextEncoderStream(..)` constructor, creating a new TextEncoderStream instance
    TextEncoderStream();
    /// Getter of the `encoding` attribute.
    /// [`TextEncoderStream.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// Getter of the `readable` attribute.
    /// [`TextEncoderStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`TextEncoderStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoderStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

