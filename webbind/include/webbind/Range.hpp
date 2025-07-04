#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "AbstractRange.hpp"
#include "enums.hpp"

class Node;
class Range;
class DocumentFragment;
class DOMRectList;
class DOMRect;


class Range : public AbstractRange {
    explicit Range(Handle h) noexcept;

public:
    explicit Range(const emlite::Val &val) noexcept;
    static Range take_ownership(Handle h) noexcept;

    Range clone() const noexcept;
    Range();
    Node commonAncestorContainer() const;
    jsbind::Undefined setStart(const Node& node, unsigned long offset);
    jsbind::Undefined setEnd(const Node& node, unsigned long offset);
    jsbind::Undefined setStartBefore(const Node& node);
    jsbind::Undefined setStartAfter(const Node& node);
    jsbind::Undefined setEndBefore(const Node& node);
    jsbind::Undefined setEndAfter(const Node& node);
    jsbind::Undefined collapse(bool toStart);
    jsbind::Undefined selectNode(const Node& node);
    jsbind::Undefined selectNodeContents(const Node& node);
    short compareBoundaryPoints(unsigned short how, const Range& sourceRange);
    jsbind::Undefined deleteContents();
    DocumentFragment extractContents();
    DocumentFragment cloneContents();
    jsbind::Undefined insertNode(const Node& node);
    jsbind::Undefined surroundContents(const Node& newParent);
    Range cloneRange();
    jsbind::Undefined detach();
    bool isPointInRange(const Node& node, unsigned long offset);
    short comparePoint(const Node& node, unsigned long offset);
    bool intersectsNode(const Node& node);
    DOMRectList getClientRects();
    DOMRect getBoundingClientRect();
    DocumentFragment createContextualFragment(const jsbind::Any& string);
};

