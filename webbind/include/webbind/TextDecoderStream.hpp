#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class ReadableStream;
class WritableStream;


/// The TextDecoderStream class.
/// [`TextDecoderStream`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream)
class TextDecoderStream : public emlite::Val {
    explicit TextDecoderStream(Handle h) noexcept;

public:
    explicit TextDecoderStream(const emlite::Val &val) noexcept;
    static TextDecoderStream take_ownership(Handle h) noexcept;

    [[nodiscard]] TextDecoderStream clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextDecoderStream(..)` constructor, creating a new TextDecoderStream instance
    TextDecoderStream();
    /// The `new TextDecoderStream(..)` constructor, creating a new TextDecoderStream instance
    TextDecoderStream(const jsbind::String& label);
    /// The `new TextDecoderStream(..)` constructor, creating a new TextDecoderStream instance
    TextDecoderStream(const jsbind::String& label, const jsbind::Any& options);
    /// Getter of the `encoding` attribute.
    /// [`TextDecoderStream.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// Getter of the `fatal` attribute.
    /// [`TextDecoderStream.fatal`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/fatal)
    [[nodiscard]] bool fatal() const;
    /// Getter of the `ignoreBOM` attribute.
    /// [`TextDecoderStream.ignoreBOM`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/ignoreBOM)
    [[nodiscard]] bool ignoreBOM() const;
    /// Getter of the `readable` attribute.
    /// [`TextDecoderStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// Getter of the `writable` attribute.
    /// [`TextDecoderStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

