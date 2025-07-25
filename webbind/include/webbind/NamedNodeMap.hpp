#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Attr;


class NamedNodeMap : public emlite::Val {
    explicit NamedNodeMap(Handle h) noexcept;

public:
    explicit NamedNodeMap(const emlite::Val &val) noexcept;
    static NamedNodeMap take_ownership(Handle h) noexcept;

    NamedNodeMap clone() const noexcept;
    unsigned long length() const;
    Attr item(unsigned long index);
    Attr getNamedItem(const jsbind::DOMString& qualifiedName);
    Attr getNamedItemNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName);
    Attr setNamedItem(const Attr& attr);
    Attr setNamedItemNS(const Attr& attr);
    Attr removeNamedItem(const jsbind::DOMString& qualifiedName);
    Attr removeNamedItemNS(const jsbind::DOMString& namespace_, const jsbind::DOMString& localName);
};

