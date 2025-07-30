#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Animation.hpp"
#include "enums.hpp"


class CSSTransition : public Animation {
    explicit CSSTransition(Handle h) noexcept;

public:
    explicit CSSTransition(const emlite::Val &val) noexcept;
    static CSSTransition take_ownership(Handle h) noexcept;

    CSSTransition clone() const noexcept;
    jsbind::String transitionProperty() const;
};

