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


class CSSPseudoElement : public EventTarget {
    explicit CSSPseudoElement(Handle h) noexcept;

public:
    explicit CSSPseudoElement(const emlite::Val &val) noexcept;
    static CSSPseudoElement take_ownership(Handle h) noexcept;

    CSSPseudoElement clone() const noexcept;
    jsbind::String type() const;
    Element element() const;
    jsbind::Any parent() const;
    CSSPseudoElement pseudo(const jsbind::String& type);
    jsbind::TypedArray<DOMQuad> getBoxQuads();
    jsbind::TypedArray<DOMQuad> getBoxQuads(const BoxQuadOptions& options);
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from);
    DOMQuad convertQuadFromNode(const DOMQuadInit& quad, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from);
    DOMQuad convertRectFromNode(const DOMRectReadOnly& rect, const jsbind::Any& from, const ConvertCoordinateOptions& options);
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from);
    DOMPoint convertPointFromNode(const DOMPointInit& point, const jsbind::Any& from, const ConvertCoordinateOptions& options);
};

