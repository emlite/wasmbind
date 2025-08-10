#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "SVGGraphicsElement.hpp"
#include "DOMPointInit.hpp"

namespace webbind {

class SVGAnimatedLength;
class SVGAnimatedEnumeration;
class DOMPoint;
class DOMRect;

/// Interface SVGTextContentElement
/// [`SVGTextContentElement`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement)
class SVGTextContentElement : public SVGGraphicsElement {
    explicit SVGTextContentElement(Handle h) noexcept;
public:
    explicit SVGTextContentElement(const emlite::Val &val) noexcept;
    static SVGTextContentElement take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGTextContentElement clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGTextContentElement.textLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/textLength)
    /// [`SVGTextContentElement.textLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/textLength)
    [[nodiscard]] SVGAnimatedLength textLength() const;
    /// [`SVGTextContentElement.lengthAdjust`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/lengthAdjust)
    /// [`SVGTextContentElement.lengthAdjust`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/lengthAdjust)
    [[nodiscard]] SVGAnimatedEnumeration lengthAdjust() const;
    /// The getNumberOfChars method.
    /// [`SVGTextContentElement.getNumberOfChars`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getNumberOfChars)
    long getNumberOfChars();
    /// The getComputedTextLength method.
    /// [`SVGTextContentElement.getComputedTextLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getComputedTextLength)
    float getComputedTextLength();
    /// The getSubStringLength method.
    /// [`SVGTextContentElement.getSubStringLength`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getSubStringLength)
    float getSubStringLength(unsigned long charnum, unsigned long nchars);
    /// The getStartPositionOfChar method.
    /// [`SVGTextContentElement.getStartPositionOfChar`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getStartPositionOfChar)
    DOMPoint getStartPositionOfChar(unsigned long charnum);
    /// The getEndPositionOfChar method.
    /// [`SVGTextContentElement.getEndPositionOfChar`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getEndPositionOfChar)
    DOMPoint getEndPositionOfChar(unsigned long charnum);
    /// The getExtentOfChar method.
    /// [`SVGTextContentElement.getExtentOfChar`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getExtentOfChar)
    DOMRect getExtentOfChar(unsigned long charnum);
    /// The getRotationOfChar method.
    /// [`SVGTextContentElement.getRotationOfChar`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getRotationOfChar)
    float getRotationOfChar(unsigned long charnum);
    /// The getCharNumAtPosition method.
    /// [`SVGTextContentElement.getCharNumAtPosition`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getCharNumAtPosition)
    long getCharNumAtPosition();
    /// The getCharNumAtPosition method.
    /// [`SVGTextContentElement.getCharNumAtPosition`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/getCharNumAtPosition)
    long getCharNumAtPosition(const DOMPointInit& point);
    /// The selectSubString method.
    /// [`SVGTextContentElement.selectSubString`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTextContentElement/selectSubString)
    jsbind::Undefined selectSubString(unsigned long charnum, unsigned long nchars);
};

} // namespace webbind