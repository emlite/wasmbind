#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "DOMMatrix2DInit.hpp"

namespace webbind {

class DOMMatrix;

/// Interface SVGTransform
/// [`SVGTransform`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform)
class SVGTransform : public emlite::Val {
    explicit SVGTransform(Handle h) noexcept;
public:
    explicit SVGTransform(const emlite::Val &val) noexcept;
    static SVGTransform take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGTransform clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `type` attribute.
    /// [`SVGTransform.type`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/type)
    [[nodiscard]] unsigned short type() const;
    /// Getter of the `matrix` attribute.
    /// [`SVGTransform.matrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/matrix)
    [[nodiscard]] DOMMatrix matrix() const;
    /// Getter of the `angle` attribute.
    /// [`SVGTransform.angle`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/angle)
    [[nodiscard]] float angle() const;
    /// The setMatrix method.
    /// [`SVGTransform.setMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/setMatrix)
    jsbind::Undefined setMatrix();
    /// The setMatrix method.
    /// [`SVGTransform.setMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/setMatrix)
    jsbind::Undefined setMatrix(const DOMMatrix2DInit& matrix);
    /// The setTranslate method.
    /// [`SVGTransform.setTranslate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/setTranslate)
    jsbind::Undefined setTranslate(float tx, float ty);
    /// The setScale method.
    /// [`SVGTransform.setScale`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/setScale)
    jsbind::Undefined setScale(float sx, float sy);
    /// The setRotate method.
    /// [`SVGTransform.setRotate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/setRotate)
    jsbind::Undefined setRotate(float angle, float cx, float cy);
    /// The setSkewX method.
    /// [`SVGTransform.setSkewX`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/setSkewX)
    jsbind::Undefined setSkewX(float angle);
    /// The setSkewY method.
    /// [`SVGTransform.setSkewY`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransform/setSkewY)
    jsbind::Undefined setSkewY(float angle);
};

} // namespace webbind