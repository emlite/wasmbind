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
    jsbind::String nodeName() const;
    jsbind::String baseURI() const;
    bool isConnected() const;
    Document ownerDocument() const;
    Node getRootNode();
    Node getRootNode(const GetRootNodeOptions& options);
    Node parentNode() const;
    Element parentElement() const;
    bool hasChildNodes();
    NodeList childNodes() const;
    Node firstChild() const;
    Node lastChild() const;
    Node previousSibling() const;
    Node nextSibling() const;
    jsbind::String nodeValue() const;
    void nodeValue(const jsbind::String& value);
    jsbind::String textContent() const;
    void textContent(const jsbind::String& value);
    jsbind::Undefined normalize();
    Node cloneNode();
    Node cloneNode(bool subtree);
    bool isEqualNode(const Node& otherNode);
    bool isSameNode(const Node& otherNode);
    unsigned short compareDocumentPosition(const Node& other);
    bool contains(const Node& other);
    jsbind::String lookupPrefix(const jsbind::String& namespace_);
    jsbind::String lookupNamespaceURI(const jsbind::String& prefix);
    bool isDefaultNamespace(const jsbind::String& namespace_);
    Node insertBefore(const Node& node, const Node& child);
    Node appendChild(const Node& node);
    Node replaceChild(const Node& node, const Node& child);
    Node removeChild(const Node& child);
};

