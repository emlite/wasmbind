#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSSkewX : public CSSTransformComponent {
    explicit CSSSkewX(Handle h) noexcept;

public:
    explicit CSSSkewX(const emlite::Val &val) noexcept;
    static CSSSkewX take_ownership(Handle h) noexcept;

    CSSSkewX clone() const noexcept;
    CSSSkewX(const CSSNumericValue& ax);
    CSSNumericValue ax() const;
    void ax(const CSSNumericValue& value);
};

