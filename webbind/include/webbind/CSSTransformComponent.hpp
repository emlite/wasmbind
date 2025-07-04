#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class DOMMatrix;


class CSSTransformComponent : public emlite::Val {
    explicit CSSTransformComponent(Handle h) noexcept;

public:
    explicit CSSTransformComponent(const emlite::Val &val) noexcept;
    static CSSTransformComponent take_ownership(Handle h) noexcept;

    CSSTransformComponent clone() const noexcept;
    bool is2D() const;
    void is2D(bool value);
    DOMMatrix toMatrix();
};

