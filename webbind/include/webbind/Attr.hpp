#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Node.hpp"
#include "enums.hpp"

class Element;


class Attr : public Node {
    explicit Attr(Handle h) noexcept;

public:
    explicit Attr(const emlite::Val &val) noexcept;
    static Attr take_ownership(Handle h) noexcept;

    Attr clone() const noexcept;
    jsbind::DOMString namespaceURI() const;
    jsbind::DOMString prefix() const;
    jsbind::DOMString localName() const;
    jsbind::DOMString name() const;
    jsbind::DOMString value() const;
    void value(const jsbind::DOMString& value);
    Element ownerElement() const;
    bool specified() const;
};

