#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"


class CSSColorValue : public CSSStyleValue {
    explicit CSSColorValue(Handle h) noexcept;

public:
    explicit CSSColorValue(const emlite::Val &val) noexcept;
    static CSSColorValue take_ownership(Handle h) noexcept;

    CSSColorValue clone() const noexcept;
    static jsbind::Any parse(const jsbind::String& cssText);
};

