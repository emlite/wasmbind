#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The CSSParserRule class.
/// [`CSSParserRule`](https://developer.mozilla.org/en-US/docs/Web/API/CSSParserRule)
class CSSParserRule : public emlite::Val {
    explicit CSSParserRule(Handle h) noexcept;

public:
    explicit CSSParserRule(const emlite::Val &val) noexcept;
    static CSSParserRule take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSParserRule clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
};

