#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class DOMPoint;

/// Interface SVGPointList
/// [`SVGPointList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList)
class SVGPointList : public emlite::Val {
    explicit SVGPointList(Handle h) noexcept;
public:
    explicit SVGPointList(const emlite::Val &val) noexcept;
    static SVGPointList take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGPointList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGPointList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/length)
    /// [`SVGPointList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/length)
    [[nodiscard]] unsigned long length() const;
    /// [`SVGPointList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/numberOfItems)
    /// [`SVGPointList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/numberOfItems)
    [[nodiscard]] unsigned long numberOfItems() const;
    /// The clear method.
    /// [`SVGPointList.clear`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/clear)
    jsbind::Undefined clear();
    /// The initialize method.
    /// [`SVGPointList.initialize`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/initialize)
    DOMPoint initialize(const DOMPoint& newItem);
    /// The getItem method.
    /// [`SVGPointList.getItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/getItem)
    DOMPoint getItem(unsigned long index);
    /// The insertItemBefore method.
    /// [`SVGPointList.insertItemBefore`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/insertItemBefore)
    DOMPoint insertItemBefore(const DOMPoint& newItem, unsigned long index);
    /// The replaceItem method.
    /// [`SVGPointList.replaceItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/replaceItem)
    DOMPoint replaceItem(const DOMPoint& newItem, unsigned long index);
    /// The removeItem method.
    /// [`SVGPointList.removeItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/removeItem)
    DOMPoint removeItem(unsigned long index);
    /// The appendItem method.
    /// [`SVGPointList.appendItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGPointList/appendItem)
    DOMPoint appendItem(const DOMPoint& newItem);
};

} // namespace webbind