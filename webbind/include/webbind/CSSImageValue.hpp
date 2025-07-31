#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


/// The CSSImageValue class.
/// [`CSSImageValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSImageValue)
class CSSImageValue : public CSSStyleValue {
    explicit CSSImageValue(Handle h) noexcept;

public:
    explicit CSSImageValue(const emlite::Val &val) noexcept;
    static CSSImageValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSImageValue clone() const noexcept;
};

