#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class CSSStyleValue;


/// The CSSStyleValue class.
/// [`CSSStyleValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleValue)
class CSSStyleValue : public emlite::Val {
    explicit CSSStyleValue(Handle h) noexcept;

public:
    explicit CSSStyleValue(const emlite::Val &val) noexcept;
    static CSSStyleValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSStyleValue clone() const noexcept;
    /// The parse method.
    /// [`CSSStyleValue.parse`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleValue/parse)
    static CSSStyleValue parse(const jsbind::String& property, const jsbind::String& cssText);
    /// The parseAll method.
    /// [`CSSStyleValue.parseAll`](https://developer.mozilla.org/en-US/docs/Web/API/CSSStyleValue/parseAll)
    static jsbind::TypedArray<CSSStyleValue> parseAll(const jsbind::String& property, const jsbind::String& cssText);
};

