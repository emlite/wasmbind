#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextFormatInit
class TextFormatInit : public emlite::Val {
  explicit TextFormatInit(Handle h) noexcept;
public:
    static TextFormatInit take_ownership(Handle h) noexcept;
    explicit TextFormatInit(const emlite::Val &val) noexcept;
    TextFormatInit() noexcept;
    [[nodiscard]] TextFormatInit clone() const noexcept;
    /// Getter of the `rangeStart` attribute.
    [[nodiscard]] unsigned long rangeStart() const;
    /// Setter of the `rangeStart` attribute.
    void rangeStart(unsigned long value);
    /// Getter of the `rangeEnd` attribute.
    [[nodiscard]] unsigned long rangeEnd() const;
    /// Setter of the `rangeEnd` attribute.
    void rangeEnd(unsigned long value);
    /// Getter of the `underlineStyle` attribute.
    [[nodiscard]] UnderlineStyle underlineStyle() const;
    /// Setter of the `underlineStyle` attribute.
    void underlineStyle(const UnderlineStyle& value);
    /// Getter of the `underlineThickness` attribute.
    [[nodiscard]] UnderlineThickness underlineThickness() const;
    /// Setter of the `underlineThickness` attribute.
    void underlineThickness(const UnderlineThickness& value);
};

} // namespace webbind