#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class Node;


class TreeWalker : public emlite::Val {
    explicit TreeWalker(Handle h) noexcept;

public:
    explicit TreeWalker(const emlite::Val &val) noexcept;
    static TreeWalker take_ownership(Handle h) noexcept;

    TreeWalker clone() const noexcept;
    Node root() const;
    unsigned long whatToShow() const;
    jsbind::Function filter() const;
    Node currentNode() const;
    void currentNode(const Node& value);
    Node parentNode();
    Node firstChild();
    Node lastChild();
    Node previousSibling();
    Node nextSibling();
    Node previousNode();
    Node nextNode();
};

