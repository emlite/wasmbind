#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "SVGSVGElement.hpp"
#include "enums.hpp"

class SVGTransform;


/// The SVGTransformList class.
/// [`SVGTransformList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList)
class SVGTransformList : public emlite::Val {
    explicit SVGTransformList(Handle h) noexcept;

public:
    explicit SVGTransformList(const emlite::Val &val) noexcept;
    static SVGTransformList take_ownership(Handle h) noexcept;

    [[nodiscard]] SVGTransformList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`SVGTransformList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `numberOfItems` attribute.
    /// [`SVGTransformList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/numberOfItems)
    [[nodiscard]] unsigned long numberOfItems() const;
    /// The clear method.
    /// [`SVGTransformList.clear`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/clear)
    jsbind::Undefined clear();
    /// The initialize method.
    /// [`SVGTransformList.initialize`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/initialize)
    SVGTransform initialize(const SVGTransform& newItem);
    /// The getItem method.
    /// [`SVGTransformList.getItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/getItem)
    SVGTransform getItem(unsigned long index);
    /// The insertItemBefore method.
    /// [`SVGTransformList.insertItemBefore`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/insertItemBefore)
    SVGTransform insertItemBefore(const SVGTransform& newItem, unsigned long index);
    /// The replaceItem method.
    /// [`SVGTransformList.replaceItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/replaceItem)
    SVGTransform replaceItem(const SVGTransform& newItem, unsigned long index);
    /// The removeItem method.
    /// [`SVGTransformList.removeItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/removeItem)
    SVGTransform removeItem(unsigned long index);
    /// The appendItem method.
    /// [`SVGTransformList.appendItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/appendItem)
    SVGTransform appendItem(const SVGTransform& newItem);
    /// The createSVGTransformFromMatrix method.
    /// [`SVGTransformList.createSVGTransformFromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/createSVGTransformFromMatrix)
    SVGTransform createSVGTransformFromMatrix();
    /// The createSVGTransformFromMatrix method.
    /// [`SVGTransformList.createSVGTransformFromMatrix`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/createSVGTransformFromMatrix)
    SVGTransform createSVGTransformFromMatrix(const DOMMatrix2DInit& matrix);
    /// The consolidate method.
    /// [`SVGTransformList.consolidate`](https://developer.mozilla.org/en-US/docs/Web/API/SVGTransformList/consolidate)
    SVGTransform consolidate();
};

