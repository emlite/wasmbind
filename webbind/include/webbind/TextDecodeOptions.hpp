#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextDecodeOptions
/// [`TextDecodeOptions`](https://developer.mozilla.org/en-US/docs/Web/API/TextDecodeOptions)
class TextDecodeOptions : public emlite::Val {
  explicit TextDecodeOptions(Handle h) noexcept;
public:
    static TextDecodeOptions take_ownership(Handle h) noexcept;
    explicit TextDecodeOptions(const emlite::Val &val) noexcept;
    TextDecodeOptions() noexcept;
    [[nodiscard]] TextDecodeOptions clone() const noexcept;
    [[nodiscard]] bool stream() const;
    void stream(bool value);
};

} // namespace webbind