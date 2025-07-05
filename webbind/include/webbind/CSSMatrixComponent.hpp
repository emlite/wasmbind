#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "CSSTransformComponent.hpp"
#include "enums.hpp"

class DOMMatrix;
class DOMMatrixReadOnly;


class CSSMatrixComponent : public CSSTransformComponent {
    explicit CSSMatrixComponent(Handle h) noexcept;

public:
    explicit CSSMatrixComponent(const emlite::Val &val) noexcept;
    static CSSMatrixComponent take_ownership(Handle h) noexcept;

    CSSMatrixComponent clone() const noexcept;
    CSSMatrixComponent(const DOMMatrixReadOnly& matrix);
    CSSMatrixComponent(const DOMMatrixReadOnly& matrix, const jsbind::Any& options);
    DOMMatrix matrix() const;
    void matrix(const DOMMatrix& value);
};

