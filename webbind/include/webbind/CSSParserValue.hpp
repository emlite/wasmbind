#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The CSSParserValue class.
/// [`CSSParserValue`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserValue)
class CSSParserValue : public emlite::Val {
    explicit CSSParserValue(Handle h) noexcept;

public:
    explicit CSSParserValue(const emlite::Val &val) noexcept;
    static CSSParserValue take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSParserValue clone() const noexcept;
};

