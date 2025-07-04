#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"


class CSSScale : public CSSTransformComponent {
    explicit CSSScale(Handle h) noexcept;

public:
    explicit CSSScale(const emlite::Val &val) noexcept;
    static CSSScale take_ownership(Handle h) noexcept;

    CSSScale clone() const noexcept;
    CSSScale(const jsbind::Any& x, const jsbind::Any& y, const jsbind::Any& z);
    jsbind::Any x() const;
    void x(const jsbind::Any& value);
    jsbind::Any y() const;
    void y(const jsbind::Any& value);
    jsbind::Any z() const;
    void z(const jsbind::Any& value);
};

