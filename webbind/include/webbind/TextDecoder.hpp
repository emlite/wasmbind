#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class TextDecoderOptions;
class TextDecodeOptions;

/// Interface TextDecoder
/// [`TextDecoder`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder)
class TextDecoder : public emlite::Val {
    explicit TextDecoder(Handle h) noexcept;
public:
    explicit TextDecoder(const emlite::Val &val) noexcept;
    static TextDecoder take_ownership(Handle h) noexcept;
    [[nodiscard]] TextDecoder clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextDecoder(..)` constructor, creating a new TextDecoder instance
    TextDecoder();
    /// The `new TextDecoder(..)` constructor, creating a new TextDecoder instance
    TextDecoder(const jsbind::String& label);
    /// The `new TextDecoder(..)` constructor, creating a new TextDecoder instance
    TextDecoder(const jsbind::String& label, const TextDecoderOptions& options);
    /// The decode method.
    /// [`TextDecoder.decode`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/decode)
    jsbind::String decode();
    /// The decode method.
    /// [`TextDecoder.decode`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/decode)
    jsbind::String decode(const jsbind::Any& input);
    /// The decode method.
    /// [`TextDecoder.decode`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/decode)
    jsbind::String decode(const jsbind::Any& input, const TextDecodeOptions& options);
    /// [`TextDecoder.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/encoding)
    /// [`TextDecoder.encoding`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/encoding)
    [[nodiscard]] jsbind::String encoding() const;
    /// [`TextDecoder.fatal`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/fatal)
    /// [`TextDecoder.fatal`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/fatal)
    [[nodiscard]] bool fatal() const;
    /// [`TextDecoder.ignoreBOM`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/ignoreBOM)
    /// [`TextDecoder.ignoreBOM`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoder/ignoreBOM)
    [[nodiscard]] bool ignoreBOM() const;
};

} // namespace webbind