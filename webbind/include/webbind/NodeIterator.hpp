#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


class NodeIterator : public emlite::Val {
    explicit NodeIterator(Handle h) noexcept;

public:
    explicit NodeIterator(const emlite::Val &val) noexcept;
    static NodeIterator take_ownership(Handle h) noexcept;

    NodeIterator clone() const noexcept;
    Node root() const;
    Node referenceNode() const;
    bool pointerBeforeReferenceNode() const;
    unsigned long whatToShow() const;
    jsbind::Function filter() const;
    Node nextNode();
    Node previousNode();
    jsbind::Undefined detach();
};

