#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "Node.hpp"

namespace webbind {

class Element;

/// Interface Attr
/// [`Attr`](https://developer.mozilla.org/en-US/docs/Web/API/Attr)
class Attr : public Node {
    explicit Attr(Handle h) noexcept;
public:
    explicit Attr(const emlite::Val &val) noexcept;
    static Attr take_ownership(Handle h) noexcept;
    [[nodiscard]] Attr clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Attr.namespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/namespaceURI)
    /// [`Attr.namespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/namespaceURI)
    [[nodiscard]] jsbind::String namespaceURI() const;
    /// [`Attr.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/prefix)
    /// [`Attr.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/prefix)
    [[nodiscard]] jsbind::String prefix() const;
    /// [`Attr.localName`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/localName)
    /// [`Attr.localName`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/localName)
    [[nodiscard]] jsbind::String localName() const;
    /// [`Attr.name`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/name)
    /// [`Attr.name`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/name)
    [[nodiscard]] jsbind::String name() const;
    /// [`Attr.value`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/value)
    /// [`Attr.value`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`Attr.value`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/value)
    void value(const jsbind::String& value);
    /// [`Attr.ownerElement`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/ownerElement)
    /// [`Attr.ownerElement`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/ownerElement)
    [[nodiscard]] Element ownerElement() const;
    /// [`Attr.specified`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/specified)
    /// [`Attr.specified`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/specified)
    [[nodiscard]] bool specified() const;
};

} // namespace webbind