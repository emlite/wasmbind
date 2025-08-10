#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class Attr;

/// Interface NamedNodeMap
/// [`NamedNodeMap`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap)
class NamedNodeMap : public emlite::Val {
    explicit NamedNodeMap(Handle h) noexcept;
public:
    explicit NamedNodeMap(const emlite::Val &val) noexcept;
    static NamedNodeMap take_ownership(Handle h) noexcept;
    [[nodiscard]] NamedNodeMap clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`NamedNodeMap.length`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/length)
    /// [`NamedNodeMap.length`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/length)
    [[nodiscard]] unsigned long length() const;
    /// The item method.
    /// [`NamedNodeMap.item`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/item)
    Attr item(unsigned long index);
    /// The getNamedItem method.
    /// [`NamedNodeMap.getNamedItem`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/getNamedItem)
    Attr getNamedItem(const jsbind::String& qualifiedName);
    /// The getNamedItemNS method.
    /// [`NamedNodeMap.getNamedItemNS`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/getNamedItemNS)
    Attr getNamedItemNS(const jsbind::String& namespace_, const jsbind::String& localName);
    /// The setNamedItem method.
    /// [`NamedNodeMap.setNamedItem`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/setNamedItem)
    Attr setNamedItem(const Attr& attr);
    /// The setNamedItemNS method.
    /// [`NamedNodeMap.setNamedItemNS`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/setNamedItemNS)
    Attr setNamedItemNS(const Attr& attr);
    /// The removeNamedItem method.
    /// [`NamedNodeMap.removeNamedItem`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/removeNamedItem)
    Attr removeNamedItem(const jsbind::String& qualifiedName);
    /// The removeNamedItemNS method.
    /// [`NamedNodeMap.removeNamedItemNS`](https://developer.mozilla.org/en-US/docs/Web/API/NamedNodeMap/removeNamedItemNS)
    Attr removeNamedItemNS(const jsbind::String& namespace_, const jsbind::String& localName);
};

} // namespace webbind