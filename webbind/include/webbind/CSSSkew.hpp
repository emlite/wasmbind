#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSSkew : public CSSTransformComponent {
    explicit CSSSkew(Handle h) noexcept;

public:
    explicit CSSSkew(const emlite::Val &val) noexcept;
    static CSSSkew take_ownership(Handle h) noexcept;

    CSSSkew clone() const noexcept;
    CSSSkew(const CSSNumericValue& ax, const CSSNumericValue& ay);
    CSSNumericValue ax() const;
    void ax(const CSSNumericValue& value);
    CSSNumericValue ay() const;
    void ay(const CSSNumericValue& value);
};

