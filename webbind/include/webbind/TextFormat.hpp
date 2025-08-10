#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "enums.hpp"

namespace webbind {

class TextFormatInit;

/// Interface TextFormat
/// [`TextFormat`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat)
class TextFormat : public emlite::Val {
    explicit TextFormat(Handle h) noexcept;
public:
    explicit TextFormat(const emlite::Val &val) noexcept;
    static TextFormat take_ownership(Handle h) noexcept;
    [[nodiscard]] TextFormat clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new TextFormat(..)` constructor, creating a new TextFormat instance
    TextFormat();
    /// The `new TextFormat(..)` constructor, creating a new TextFormat instance
    TextFormat(const TextFormatInit& options);
    /// [`TextFormat.rangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/rangeStart)
    /// [`TextFormat.rangeStart`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/rangeStart)
    [[nodiscard]] unsigned long rangeStart() const;
    /// [`TextFormat.rangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/rangeEnd)
    /// [`TextFormat.rangeEnd`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/rangeEnd)
    [[nodiscard]] unsigned long rangeEnd() const;
    /// [`TextFormat.underlineStyle`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/underlineStyle)
    /// [`TextFormat.underlineStyle`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/underlineStyle)
    [[nodiscard]] UnderlineStyle underlineStyle() const;
    /// [`TextFormat.underlineThickness`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/underlineThickness)
    /// [`TextFormat.underlineThickness`](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat/underlineThickness)
    [[nodiscard]] UnderlineThickness underlineThickness() const;
};

} // namespace webbind