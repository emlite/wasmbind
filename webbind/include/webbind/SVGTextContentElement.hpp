#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGGraphicsElement.hpp"
#include "SVGGeometryElement.hpp"
#include "enums.hpp"

class SVGAnimatedLength;
class SVGAnimatedEnumeration;
class DOMPoint;
class DOMRect;


class SVGTextContentElement : public SVGGraphicsElement {
    explicit SVGTextContentElement(Handle h) noexcept;

public:
    explicit SVGTextContentElement(const emlite::Val &val) noexcept;
    static SVGTextContentElement take_ownership(Handle h) noexcept;

    SVGTextContentElement clone() const noexcept;
    SVGAnimatedLength textLength() const;
    SVGAnimatedEnumeration lengthAdjust() const;
    long getNumberOfChars();
    float getComputedTextLength();
    float getSubStringLength(unsigned long charnum, unsigned long nchars);
    DOMPoint getStartPositionOfChar(unsigned long charnum);
    DOMPoint getEndPositionOfChar(unsigned long charnum);
    DOMRect getExtentOfChar(unsigned long charnum);
    float getRotationOfChar(unsigned long charnum);
    long getCharNumAtPosition();
    long getCharNumAtPosition(const DOMPointInit& point);
    jsbind::Undefined selectSubString(unsigned long charnum, unsigned long nchars);
};

