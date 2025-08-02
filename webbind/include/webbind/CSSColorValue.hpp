#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


/// The CSSColorValue class.
/// [`CSSColorValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorValue)
class CSSColorValue : public CSSStyleValue {
    explicit CSSColorValue(Handle h) noexcept;

public:
    explicit CSSColorValue(const emlite::Val &val) noexcept;
    static CSSColorValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSColorValue clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The parse method.
    /// [`CSSColorValue.parse`](https://developer.mozilla.org/en-US/docs/Web/API/CSSColorValue/parse)
    static jsbind::Any parse(const jsbind::String& cssText);
};

