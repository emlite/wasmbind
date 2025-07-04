#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class CSSNumericValue;


class CSSRotate : public CSSTransformComponent {
    explicit CSSRotate(Handle h) noexcept;

public:
    explicit CSSRotate(const emlite::Val &val) noexcept;
    static CSSRotate take_ownership(Handle h) noexcept;

    CSSRotate clone() const noexcept;
    CSSRotate(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z, const CSSNumericValue& angle);
    jsbind::Any x() const;
    void x(const jsbind::Any& value);
    jsbind::Any y() const;
    void y(const jsbind::Any& value);
    jsbind::Any z() const;
    void z(const jsbind::Any& value);
    CSSNumericValue angle() const;
    void angle(const CSSNumericValue& value);
};

