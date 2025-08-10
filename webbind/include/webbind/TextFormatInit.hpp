#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type TextFormatInit
/// [`TextFormatInit`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormatInit)
class TextFormatInit : public emlite::Val {
  explicit TextFormatInit(Handle h) noexcept;
public:
    static TextFormatInit take_ownership(Handle h) noexcept;
    explicit TextFormatInit(const emlite::Val &val) noexcept;
    TextFormatInit() noexcept;
    [[nodiscard]] TextFormatInit clone() const noexcept;
    [[nodiscard]] unsigned long rangeStart() const;
    void rangeStart(unsigned long value);
    [[nodiscard]] unsigned long rangeEnd() const;
    void rangeEnd(unsigned long value);
    [[nodiscard]] UnderlineStyle underlineStyle() const;
    void underlineStyle(const UnderlineStyle& value);
    [[nodiscard]] UnderlineThickness underlineThickness() const;
    void underlineThickness(const UnderlineThickness& value);
};

} // namespace webbind