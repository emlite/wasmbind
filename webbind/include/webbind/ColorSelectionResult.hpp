#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ColorSelectionResult
class ColorSelectionResult : public emlite::Val {
  explicit ColorSelectionResult(Handle h) noexcept;
public:
    static ColorSelectionResult take_ownership(Handle h) noexcept;
    explicit ColorSelectionResult(const emlite::Val &val) noexcept;
    ColorSelectionResult() noexcept;
    [[nodiscard]] ColorSelectionResult clone() const noexcept;
    /// Getter of the `sRGBHex` attribute.
    [[nodiscard]] jsbind::String sRGBHex() const;
    /// Setter of the `sRGBHex` attribute.
    void sRGBHex(const jsbind::String& value);
};

} // namespace webbind