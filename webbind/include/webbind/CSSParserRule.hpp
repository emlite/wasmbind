#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


class CSSParserRule : public emlite::Val {
    explicit CSSParserRule(Handle h) noexcept;

public:
    explicit CSSParserRule(const emlite::Val &val) noexcept;
    static CSSParserRule take_ownership(Handle h) noexcept;

    CSSParserRule clone() const noexcept;
};

