#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class TextEncoderEncodeIntoResult;

/// Interface TextEncoder
/// [`TextEncoder`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder)
class TextEncoder : public emlite::Val {
    explicit TextEncoder(Handle h) noexcept;
public:
    explicit TextEncoder(const emlite::Val &val) noexcept;
    static TextEncoder take_ownership(Handle h) noexcept;
    [[nodiscard]] TextEncoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
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
    /// [`TextEncoder.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder/encoding)
    /// [`TextEncoder.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextEncoder/encoding)
    [[nodiscard]] jsbind::String encoding() const;
};

} // namespace webbind