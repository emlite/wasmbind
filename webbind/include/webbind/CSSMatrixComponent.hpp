#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "CSSTransformComponent.hpp"
#include "CSSMatrixComponentOptions.hpp"

namespace webbind {

class DOMMatrixReadOnly;
class DOMMatrix;

/// Interface CSSMatrixComponent
/// [`CSSMatrixComponent`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMatrixComponent)
class CSSMatrixComponent : public CSSTransformComponent {
    explicit CSSMatrixComponent(Handle h) noexcept;
public:
    explicit CSSMatrixComponent(const emlite::Val &val) noexcept;
    static CSSMatrixComponent take_ownership(Handle h) noexcept;
    [[nodiscard]] CSSMatrixComponent clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new CSSMatrixComponent(..)` constructor, creating a new CSSMatrixComponent instance
    CSSMatrixComponent(const DOMMatrixReadOnly& matrix);
    /// The `new CSSMatrixComponent(..)` constructor, creating a new CSSMatrixComponent instance
    CSSMatrixComponent(const DOMMatrixReadOnly& matrix, const CSSMatrixComponentOptions& options);
    /// Getter of the `matrix` attribute.
    /// [`CSSMatrixComponent.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMatrixComponent/matrix)
    [[nodiscard]] DOMMatrix matrix() const;
    /// Setter of the `matrix` attribute.
    /// [`CSSMatrixComponent.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/CSSMatrixComponent/matrix)
    void matrix(const DOMMatrix& value);
};

} // namespace webbind