#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SVGLength;

/// Interface SVGLengthList
/// [`SVGLengthList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList)
class SVGLengthList : public emlite::Val {
    explicit SVGLengthList(Handle h) noexcept;
public:
    explicit SVGLengthList(const emlite::Val &val) noexcept;
    static SVGLengthList take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGLengthList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGLengthList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/length)
    /// [`SVGLengthList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/length)
    [[nodiscard]] unsigned long length() const;
    /// [`SVGLengthList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/numberOfItems)
    /// [`SVGLengthList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/numberOfItems)
    [[nodiscard]] unsigned long numberOfItems() const;
    /// The clear method.
    /// [`SVGLengthList.clear`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/clear)
    jsbind::Undefined clear();
    /// The initialize method.
    /// [`SVGLengthList.initialize`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/initialize)
    SVGLength initialize(const SVGLength& newItem);
    /// The getItem method.
    /// [`SVGLengthList.getItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/getItem)
    SVGLength getItem(unsigned long index);
    /// The insertItemBefore method.
    /// [`SVGLengthList.insertItemBefore`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/insertItemBefore)
    SVGLength insertItemBefore(const SVGLength& newItem, unsigned long index);
    /// The replaceItem method.
    /// [`SVGLengthList.replaceItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/replaceItem)
    SVGLength replaceItem(const SVGLength& newItem, unsigned long index);
    /// The removeItem method.
    /// [`SVGLengthList.removeItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/removeItem)
    SVGLength removeItem(unsigned long index);
    /// The appendItem method.
    /// [`SVGLengthList.appendItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGLengthList/appendItem)
    SVGLength appendItem(const SVGLength& newItem);
};

} // namespace webbind