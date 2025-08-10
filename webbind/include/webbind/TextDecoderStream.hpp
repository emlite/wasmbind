#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class TextDecoderOptions;
class ReadableStream;
class WritableStream;

/// Interface TextDecoderStream
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
    TextDecoderStream(const jsbind::String& label, const TextDecoderOptions& options);
    /// [`TextDecoderStream.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/encoding)
    /// [`TextDecoderStream.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// [`TextDecoderStream.fatal`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/fatal)
    /// [`TextDecoderStream.fatal`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/fatal)
    [[nodiscard]] bool fatal() const;
    /// [`TextDecoderStream.ignoreBOM`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/ignoreBOM)
    /// [`TextDecoderStream.ignoreBOM`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/ignoreBOM)
    [[nodiscard]] bool ignoreBOM() const;
    /// [`TextDecoderStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/readable)
    /// [`TextDecoderStream.readable`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/readable)
    [[nodiscard]] ReadableStream readable() const;
    /// [`TextDecoderStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/writable)
    /// [`TextDecoderStream.writable`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderStream/writable)
    [[nodiscard]] WritableStream writable() const;
};

} // namespace webbind