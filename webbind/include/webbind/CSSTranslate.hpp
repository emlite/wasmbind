#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSTranslate : public CSSTransformComponent {
    explicit CSSTranslate(Handle h) noexcept;

public:
    explicit CSSTranslate(const emlite::Val &val) noexcept;
    static CSSTranslate take_ownership(Handle h) noexcept;

    CSSTranslate clone() const noexcept;
    CSSTranslate(const CSSNumericValue& x, const CSSNumericValue& y, const CSSNumericValue& z);
    CSSNumericValue x() const;
    void x(const CSSNumericValue& value);
    CSSNumericValue y() const;
    void y(const CSSNumericValue& value);
    CSSNumericValue z() const;
    void z(const CSSNumericValue& value);
};

