#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class SVGNumber;

/// Interface SVGNumberList
/// [`SVGNumberList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList)
class SVGNumberList : public emlite::Val {
    explicit SVGNumberList(Handle h) noexcept;
public:
    explicit SVGNumberList(const emlite::Val &val) noexcept;
    static SVGNumberList take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGNumberList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`SVGNumberList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/length)
    /// [`SVGNumberList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/length)
    [[nodiscard]] unsigned long length() const;
    /// [`SVGNumberList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/numberOfItems)
    /// [`SVGNumberList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/numberOfItems)
    [[nodiscard]] unsigned long numberOfItems() const;
    /// The clear method.
    /// [`SVGNumberList.clear`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/clear)
    jsbind::Undefined clear();
    /// The initialize method.
    /// [`SVGNumberList.initialize`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/initialize)
    SVGNumber initialize(const SVGNumber& newItem);
    /// The getItem method.
    /// [`SVGNumberList.getItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/getItem)
    SVGNumber getItem(unsigned long index);
    /// The insertItemBefore method.
    /// [`SVGNumberList.insertItemBefore`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/insertItemBefore)
    SVGNumber insertItemBefore(const SVGNumber& newItem, unsigned long index);
    /// The replaceItem method.
    /// [`SVGNumberList.replaceItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/replaceItem)
    SVGNumber replaceItem(const SVGNumber& newItem, unsigned long index);
    /// The removeItem method.
    /// [`SVGNumberList.removeItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/removeItem)
    SVGNumber removeItem(unsigned long index);
    /// The appendItem method.
    /// [`SVGNumberList.appendItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGNumberList/appendItem)
    SVGNumber appendItem(const SVGNumber& newItem);
};

} // namespace webbind