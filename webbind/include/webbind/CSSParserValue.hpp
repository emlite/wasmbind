#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class CSSParserValue : public emlite::Val {
    explicit CSSParserValue(Handle h) noexcept;

public:
    explicit CSSParserValue(const emlite::Val &val) noexcept;
    static CSSParserValue take_ownership(Handle h) noexcept;

    CSSParserValue clone() const noexcept;
};

