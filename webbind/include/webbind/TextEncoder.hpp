#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class TextEncoderEncodeIntoResult;


class TextEncoderEncodeIntoResult : public emlite::Val {
  explicit TextEncoderEncodeIntoResult(Handle h) noexcept;
public:
    static TextEncoderEncodeIntoResult take_ownership(Handle h) noexcept;
    explicit TextEncoderEncodeIntoResult(const emlite::Val &val) noexcept;
    TextEncoderEncodeIntoResult() noexcept;
    [[nodiscard]] TextEncoderEncodeIntoResult clone() const noexcept;
    [[nodiscard]] long long read() const;
    void read(long long value);
    [[nodiscard]] long long written() const;
    void written(long long value);
};

/// The TextEncoder class.
/// [`TextEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder)
class TextEncoder : public emlite::Val {
    explicit TextEncoder(Handle h) noexcept;

public:
    explicit TextEncoder(const emlite::Val &val) noexcept;
    static TextEncoder take_ownership(Handle h) noexcept;

    [[nodiscard]] TextEncoder clone() const noexcept;
    /// The `new TextEncoder(..)` constructor, creating a new TextEncoder instance
    TextEncoder();
    /// The encode method.
    /// [`TextEncoder.encode`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder/encode)
    jsbind::Uint8Array encode();
    /// The encode method.
    /// [`TextEncoder.encode`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder/encode)
    jsbind::Uint8Array encode(const jsbind::String& input);
    /// The encodeInto method.
    /// [`TextEncoder.encodeInto`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder/encodeInto)
    TextEncoderEncodeIntoResult encodeInto(const jsbind::String& source, const jsbind::Uint8Array& destination);
    /// Getter of the `encoding` attribute.
    /// [`TextEncoder.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder/encoding)
    [[nodiscard]] jsbind::String encoding() const;
};

