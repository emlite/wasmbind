#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"

class Document;
class GetRootNodeOptions;
class Element;
class NodeList;


class GetRootNodeOptions : public emlite::Val {
  explicit GetRootNodeOptions(Handle h) noexcept;
public:
    static GetRootNodeOptions take_ownership(Handle h) noexcept;
    explicit GetRootNodeOptions(const emlite::Val &val) noexcept;
    GetRootNodeOptions() noexcept;
    GetRootNodeOptions clone() const noexcept;
    bool composed() const;
    void composed(bool value);
};

class Node : public EventTarget {
    explicit Node(Handle h) noexcept;

public:
    explicit Node(const emlite::Val &val) noexcept;
    static Node take_ownership(Handle h) noexcept;

    Node clone() const noexcept;
    unsigned short nodeType() const;
    jsbind::DOMString nodeName() const;
    jsbind::USVString baseURI() const;
    bool isConnected() const;
    Document ownerDocument() const;
    Node getRootNode(const GetRootNodeOptions& options);
    Node parentNode() const;
    Element parentElement() const;
    bool hasChildNodes();
    NodeList childNodes() const;
    Node firstChild() const;
    Node lastChild() const;
    Node previousSibling() const;
    Node nextSibling() const;
    jsbind::DOMString nodeValue() const;
    void nodeValue(const jsbind::DOMString& value);
    jsbind::DOMString textContent() const;
    void textContent(const jsbind::DOMString& value);
    jsbind::Undefined normalize();
    Node cloneNode(bool subtree);
    bool isEqualNode(const Node& otherNode);
    bool isSameNode(const Node& otherNode);
    unsigned short compareDocumentPosition(const Node& other);
    bool contains(const Node& other);
    jsbind::DOMString lookupPrefix(const jsbind::DOMString& namespace_);
    jsbind::DOMString lookupNamespaceURI(const jsbind::DOMString& prefix);
    bool isDefaultNamespace(const jsbind::DOMString& namespace_);
    Node insertBefore(const Node& node, const Node& child);
    Node appendChild(const Node& node);
    Node replaceChild(const Node& node, const Node& child);
    Node removeChild(const Node& child);
};

