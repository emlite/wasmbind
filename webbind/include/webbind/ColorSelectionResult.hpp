#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ColorSelectionResult
/// [`ColorSelectionResult`](https://developer.mozilla.org/en-US/docs/Web/API/ColorSelectionResult)
class ColorSelectionResult : public emlite::Val {
  explicit ColorSelectionResult(Handle h) noexcept;
public:
    static ColorSelectionResult take_ownership(Handle h) noexcept;
    explicit ColorSelectionResult(const emlite::Val &val) noexcept;
    ColorSelectionResult() noexcept;
    [[nodiscard]] ColorSelectionResult clone() const noexcept;
    [[nodiscard]] jsbind::String sRGBHex() const;
    void sRGBHex(const jsbind::String& value);
};

} // namespace webbind