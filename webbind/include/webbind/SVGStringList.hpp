#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Interface SVGStringList
/// [`SVGStringList`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList)
class SVGStringList : public emlite::Val {
    explicit SVGStringList(Handle h) noexcept;
public:
    explicit SVGStringList(const emlite::Val &val) noexcept;
    static SVGStringList take_ownership(Handle h) noexcept;
    [[nodiscard]] SVGStringList clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `length` attribute.
    /// [`SVGStringList.length`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/length)
    [[nodiscard]] unsigned long length() const;
    /// Getter of the `numberOfItems` attribute.
    /// [`SVGStringList.numberOfItems`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/numberOfItems)
    [[nodiscard]] unsigned long numberOfItems() const;
    /// The clear method.
    /// [`SVGStringList.clear`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/clear)
    jsbind::Undefined clear();
    /// The initialize method.
    /// [`SVGStringList.initialize`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/initialize)
    jsbind::String initialize(const jsbind::String& newItem);
    /// The getItem method.
    /// [`SVGStringList.getItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/getItem)
    jsbind::String getItem(unsigned long index);
    /// The insertItemBefore method.
    /// [`SVGStringList.insertItemBefore`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/insertItemBefore)
    jsbind::String insertItemBefore(const jsbind::String& newItem, unsigned long index);
    /// The replaceItem method.
    /// [`SVGStringList.replaceItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/replaceItem)
    jsbind::String replaceItem(const jsbind::String& newItem, unsigned long index);
    /// The removeItem method.
    /// [`SVGStringList.removeItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/removeItem)
    jsbind::String removeItem(unsigned long index);
    /// The appendItem method.
    /// [`SVGStringList.appendItem`](https://developer.mozilla.org/en-US/docs/Web/API/SVGStringList/appendItem)
    jsbind::String appendItem(const jsbind::String& newItem);
};

} // namespace webbind