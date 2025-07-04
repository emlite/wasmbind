#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"


class CSSPerspective : public CSSTransformComponent {
    explicit CSSPerspective(Handle h) noexcept;

public:
    explicit CSSPerspective(const emlite::Val &val) noexcept;
    static CSSPerspective take_ownership(Handle h) noexcept;

    CSSPerspective clone() const noexcept;
    CSSPerspective(const jsbind::Any& length);
    jsbind::Any length() const;
    void length(const jsbind::Any& value);
};

