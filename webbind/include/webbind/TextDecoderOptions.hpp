#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextDecoderOptions
/// [`TextDecoderOptions`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecoderOptions)
class TextDecoderOptions : public emlite::Val {
  explicit TextDecoderOptions(Handle h) noexcept;
public:
    static TextDecoderOptions take_ownership(Handle h) noexcept;
    explicit TextDecoderOptions(const emlite::Val &val) noexcept;
    TextDecoderOptions() noexcept;
    [[nodiscard]] TextDecoderOptions clone() const noexcept;
    [[nodiscard]] bool fatal() const;
    void fatal(bool value);
    [[nodiscard]] bool ignoreBOM() const;
    void ignoreBOM(bool value);
};

} // namespace webbind