#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSSkewY : public CSSTransformComponent {
    explicit CSSSkewY(Handle h) noexcept;

public:
    explicit CSSSkewY(const emlite::Val &val) noexcept;
    static CSSSkewY take_ownership(Handle h) noexcept;

    CSSSkewY clone() const noexcept;
    CSSSkewY(const CSSNumericValue& ay);
    CSSNumericValue ay() const;
    void ay(const CSSNumericValue& value);
};

