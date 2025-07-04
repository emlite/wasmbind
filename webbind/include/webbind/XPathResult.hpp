#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


class XPathResult : public emlite::Val {
    explicit XPathResult(Handle h) noexcept;

public:
    explicit XPathResult(const emlite::Val &val) noexcept;
    static XPathResult take_ownership(Handle h) noexcept;

    XPathResult clone() const noexcept;
    unsigned short resultType() const;
    double numberValue() const;
    jsbind::DOMString stringValue() const;
    bool booleanValue() const;
    Node singleNodeValue() const;
    bool invalidIteratorState() const;
    unsigned long snapshotLength() const;
    Node iterateNext();
    Node snapshotItem(unsigned long index);
};

