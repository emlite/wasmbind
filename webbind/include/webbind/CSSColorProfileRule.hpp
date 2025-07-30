#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSRule.hpp"
#include "enums.hpp"


class CSSColorProfileRule : public CSSRule {
    explicit CSSColorProfileRule(Handle h) noexcept;

public:
    explicit CSSColorProfileRule(const emlite::Val &val) noexcept;
    static CSSColorProfileRule take_ownership(Handle h) noexcept;

    CSSColorProfileRule clone() const noexcept;
    jsbind::String name() const;
    jsbind::String src() const;
    jsbind::String renderingIntent() const;
    jsbind::String components() const;
};

