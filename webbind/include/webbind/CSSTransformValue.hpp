#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSStyleValue.hpp"
#include "enums.hpp"

class CSSTransformComponent;
class DOMMatrix;


class CSSTransformValue : public CSSStyleValue {
    explicit CSSTransformValue(Handle h) noexcept;

public:
    explicit CSSTransformValue(const emlite::Val &val) noexcept;
    static CSSTransformValue take_ownership(Handle h) noexcept;

    CSSTransformValue clone() const noexcept;
    CSSTransformValue(const jsbind::Sequence<CSSTransformComponent>& transforms);
    unsigned long length() const;
    bool is2D() const;
    DOMMatrix toMatrix();
};

