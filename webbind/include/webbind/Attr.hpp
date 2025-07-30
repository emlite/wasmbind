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
    jsbind::String namespaceURI() const;
    jsbind::String prefix() const;
    jsbind::String localName() const;
    jsbind::String name() const;
    jsbind::String value() const;
    void value(const jsbind::String& value);
    Element ownerElement() const;
    bool specified() const;
};

