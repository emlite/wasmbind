#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


class CSSImageValue : public CSSStyleValue {
    explicit CSSImageValue(Handle h) noexcept;

public:
    explicit CSSImageValue(const emlite::Val &val) noexcept;
    static CSSImageValue take_ownership(Handle h) noexcept;

    CSSImageValue clone() const noexcept;
};

