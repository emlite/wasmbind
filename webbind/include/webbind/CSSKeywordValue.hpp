#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


/// The CSSKeywordValue class.
/// [`CSSKeywordValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeywordValue)
class CSSKeywordValue : public CSSStyleValue {
    explicit CSSKeywordValue(Handle h) noexcept;

public:
    explicit CSSKeywordValue(const emlite::Val &val) noexcept;
    static CSSKeywordValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSKeywordValue clone() const noexcept;
    /// The `new CSSKeywordValue(..)` constructor, creating a new CSSKeywordValue instance
    CSSKeywordValue(const jsbind::String& value);
    /// Getter of the `value` attribute.
    /// [`CSSKeywordValue.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeywordValue/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`CSSKeywordValue.value`](https://developer.mozilla.org/en-US/docs/Web/API/CSSKeywordValue/value)
    void value(const jsbind::String& value);
};

