#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Node.hpp"
#include "enums.hpp"

class Element;


/// The Attr class.
/// [`Attr`](https://developer.mozilla.org/en-US/docs/Web/API/Attr)
class Attr : public Node {
    explicit Attr(Handle h) noexcept;

public:
    explicit Attr(const emlite::Val &val) noexcept;
    static Attr take_ownership(Handle h) noexcept;

    [[nodiscard]] Attr clone() const noexcept;
    /// Getter of the `namespaceURI` attribute.
    /// [`Attr.namespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/namespaceURI)
    [[nodiscard]] jsbind::String namespaceURI() const;
    /// Getter of the `prefix` attribute.
    /// [`Attr.prefix`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/prefix)
    [[nodiscard]] jsbind::String prefix() const;
    /// Getter of the `localName` attribute.
    /// [`Attr.localName`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/localName)
    [[nodiscard]] jsbind::String localName() const;
    /// Getter of the `name` attribute.
    /// [`Attr.name`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/name)
    [[nodiscard]] jsbind::String name() const;
    /// Getter of the `value` attribute.
    /// [`Attr.value`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/value)
    [[nodiscard]] jsbind::String value() const;
    /// Setter of the `value` attribute.
    /// [`Attr.value`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/value)
    void value(const jsbind::String& value);
    /// Getter of the `ownerElement` attribute.
    /// [`Attr.ownerElement`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/ownerElement)
    [[nodiscard]] Element ownerElement() const;
    /// Getter of the `specified` attribute.
    /// [`Attr.specified`](https://developer.mozilla.org/en-US/docs/Web/API/Attr/specified)
    [[nodiscard]] bool specified() const;
};

