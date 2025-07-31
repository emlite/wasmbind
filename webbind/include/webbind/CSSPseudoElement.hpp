#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class Element;
class CSSPseudoElement;
class DOMQuad;
class DOMRectReadOnly;
class DOMPoint;


/// The CSSPseudoElement class.
/// [`CSSPseudoElement`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement)
class CSSPseudoElement : public EventTarget {
    explicit CSSPseudoElement(Handle h) noexcept;

public:
    explicit CSSPseudoElement(const emlite::Val &val) noexcept;
    static CSSPseudoElement take_ownership(Handle h) noexcept;

    [[nodiscard]] CSSPseudoElement clone() const noexcept;
    /// Getter of the `type` attribute.
    /// [`CSSPseudoElement.type`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/type)
    [[nodiscard]] jsbind::String type() const;
    /// Getter of the `element` attribute.
    /// [`CSSPseudoElement.element`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/element)
    [[nodiscard]] Element element() const;
    /// Getter of the `parent` attribute.
    /// [`CSSPseudoElement.parent`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/parent)
    [[nodiscard]] jsbind::Any parent() const;
    /// The pseudo method.
    /// [`CSSPseudoElement.pseudo`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/pseudo)
    CSSPseudoElement pseudo(const jsbind::String& type);
    /// The getBoxQuads method.
    /// [`CSSPseudoElement.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads();
    /// The getBoxQuads method.
    /// [`CSSPseudoElement.getBoxQuads`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/getBoxQuads)
    jsbind::TypedArray<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
    /// The convertQuadFromNode method.
    /// [`CSSPseudoElement.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from);
    /// The convertQuadFromNode method.
    /// [`CSSPseudoElement.convertQuadFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/convertQuadFromNode)
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertRectFromNode method.
    /// [`CSSPseudoElement.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from);
    /// The convertRectFromNode method.
    /// [`CSSPseudoElement.convertRectFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/convertRectFromNode)
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    /// The convertPointFromNode method.
    /// [`CSSPseudoElement.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from);
    /// The convertPointFromNode method.
    /// [`CSSPseudoElement.convertPointFromNode`](https://developer.mozilla.org/en-US/docs/Web/API/CSSPseudoElement/convertPointFromNode)
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options);
};

