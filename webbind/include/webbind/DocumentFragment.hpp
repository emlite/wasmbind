#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "Node.hpp"
#include "enums.hpp"

class Element;
class HTMLCollection;
class NodeList;


class DocumentFragment : public Node {
    explicit DocumentFragment(Handle h) noexcept;

public:
    explicit DocumentFragment(const emlite::Val &val) noexcept;
    static DocumentFragment take_ownership(Handle h) noexcept;

    DocumentFragment clone() const noexcept;
    DocumentFragment();
    Element getElementById(const jsbind::DOMString& elementId);
    HTMLCollection children() const;
    Element firstElementChild() const;
    Element lastElementChild() const;
    unsigned long childElementCount() const;
    jsbind::Undefined prepend(const jsbind::Any& nodes);
    jsbind::Undefined append(const jsbind::Any& nodes);
    jsbind::Undefined replaceChildren(const jsbind::Any& nodes);
    jsbind::Undefined moveBefore(const Node& node, const Node& child);
    Element querySelector(const jsbind::DOMString& selectors);
    NodeList querySelectorAll(const jsbind::DOMString& selectors);
};

