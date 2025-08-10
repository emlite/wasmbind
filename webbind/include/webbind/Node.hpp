#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventTarget.hpp"

namespace webbind {

class Document;
class Node;
class GetRootNodeOptions;
class Element;
class NodeList;

/// Interface Node
/// [`Node`](https://developer.mozilla.org/en-US/docs/Web/API/Node)
class Node : public EventTarget {
    explicit Node(Handle h) noexcept;
public:
    explicit Node(const emlite::Val &val) noexcept;
    static Node take_ownership(Handle h) noexcept;
    [[nodiscard]] Node clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// [`Node.nodeType`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeType)
    /// [`Node.nodeType`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeType)
    [[nodiscard]] unsigned short nodeType() const;
    /// [`Node.nodeName`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeName)
    /// [`Node.nodeName`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeName)
    [[nodiscard]] jsbind::String nodeName() const;
    /// [`Node.baseURI`](https://developer.mozilla.org/en-US/docs/Web/API/Node/baseURI)
    /// [`Node.baseURI`](https://developer.mozilla.org/en-US/docs/Web/API/Node/baseURI)
    [[nodiscard]] jsbind::String baseURI() const;
    /// [`Node.isConnected`](https://developer.mozilla.org/en-US/docs/Web/API/Node/isConnected)
    /// [`Node.isConnected`](https://developer.mozilla.org/en-US/docs/Web/API/Node/isConnected)
    [[nodiscard]] bool isConnected() const;
    /// [`Node.ownerDocument`](https://developer.mozilla.org/en-US/docs/Web/API/Node/ownerDocument)
    /// [`Node.ownerDocument`](https://developer.mozilla.org/en-US/docs/Web/API/Node/ownerDocument)
    [[nodiscard]] Document ownerDocument() const;
    /// The getRootNode method.
    /// [`Node.getRootNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/getRootNode)
    Node getRootNode();
    /// The getRootNode method.
    /// [`Node.getRootNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/getRootNode)
    Node getRootNode(const GetRootNodeOptions& options);
    /// [`Node.parentNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/parentNode)
    /// [`Node.parentNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/parentNode)
    [[nodiscard]] Node parentNode() const;
    /// [`Node.parentElement`](https://developer.mozilla.org/en-US/docs/Web/API/Node/parentElement)
    /// [`Node.parentElement`](https://developer.mozilla.org/en-US/docs/Web/API/Node/parentElement)
    [[nodiscard]] Element parentElement() const;
    /// The hasChildNodes method.
    /// [`Node.hasChildNodes`](https://developer.mozilla.org/en-US/docs/Web/API/Node/hasChildNodes)
    bool hasChildNodes();
    /// [`Node.childNodes`](https://developer.mozilla.org/en-US/docs/Web/API/Node/childNodes)
    /// [`Node.childNodes`](https://developer.mozilla.org/en-US/docs/Web/API/Node/childNodes)
    [[nodiscard]] NodeList childNodes() const;
    /// [`Node.firstChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/firstChild)
    /// [`Node.firstChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/firstChild)
    [[nodiscard]] Node firstChild() const;
    /// [`Node.lastChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/lastChild)
    /// [`Node.lastChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/lastChild)
    [[nodiscard]] Node lastChild() const;
    /// [`Node.previousSibling`](https://developer.mozilla.org/en-US/docs/Web/API/Node/previousSibling)
    /// [`Node.previousSibling`](https://developer.mozilla.org/en-US/docs/Web/API/Node/previousSibling)
    [[nodiscard]] Node previousSibling() const;
    /// [`Node.nextSibling`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nextSibling)
    /// [`Node.nextSibling`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nextSibling)
    [[nodiscard]] Node nextSibling() const;
    /// [`Node.nodeValue`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeValue)
    /// [`Node.nodeValue`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeValue)
    [[nodiscard]] jsbind::String nodeValue() const;
    /// Setter of the `nodeValue` attribute.
    /// [`Node.nodeValue`](https://developer.mozilla.org/en-US/docs/Web/API/Node/nodeValue)
    void nodeValue(const jsbind::String& value);
    /// [`Node.textContent`](https://developer.mozilla.org/en-US/docs/Web/API/Node/textContent)
    /// [`Node.textContent`](https://developer.mozilla.org/en-US/docs/Web/API/Node/textContent)
    [[nodiscard]] jsbind::String textContent() const;
    /// Setter of the `textContent` attribute.
    /// [`Node.textContent`](https://developer.mozilla.org/en-US/docs/Web/API/Node/textContent)
    void textContent(const jsbind::String& value);
    /// The normalize method.
    /// [`Node.normalize`](https://developer.mozilla.org/en-US/docs/Web/API/Node/normalize)
    jsbind::Undefined normalize();
    /// The cloneNode method.
    /// [`Node.cloneNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/cloneNode)
    Node cloneNode();
    /// The cloneNode method.
    /// [`Node.cloneNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/cloneNode)
    Node cloneNode(bool subtree);
    /// The isEqualNode method.
    /// [`Node.isEqualNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/isEqualNode)
    bool isEqualNode(const Node& otherNode);
    /// The isSameNode method.
    /// [`Node.isSameNode`](https://developer.mozilla.org/en-US/docs/Web/API/Node/isSameNode)
    bool isSameNode(const Node& otherNode);
    /// The compareDocumentPosition method.
    /// [`Node.compareDocumentPosition`](https://developer.mozilla.org/en-US/docs/Web/API/Node/compareDocumentPosition)
    unsigned short compareDocumentPosition(const Node& other);
    /// The contains method.
    /// [`Node.contains`](https://developer.mozilla.org/en-US/docs/Web/API/Node/contains)
    bool contains(const Node& other);
    /// The lookupPrefix method.
    /// [`Node.lookupPrefix`](https://developer.mozilla.org/en-US/docs/Web/API/Node/lookupPrefix)
    jsbind::String lookupPrefix(const jsbind::String& namespace_);
    /// The lookupNamespaceURI method.
    /// [`Node.lookupNamespaceURI`](https://developer.mozilla.org/en-US/docs/Web/API/Node/lookupNamespaceURI)
    jsbind::String lookupNamespaceURI(const jsbind::String& prefix);
    /// The isDefaultNamespace method.
    /// [`Node.isDefaultNamespace`](https://developer.mozilla.org/en-US/docs/Web/API/Node/isDefaultNamespace)
    bool isDefaultNamespace(const jsbind::String& namespace_);
    /// The insertBefore method.
    /// [`Node.insertBefore`](https://developer.mozilla.org/en-US/docs/Web/API/Node/insertBefore)
    Node insertBefore(const Node& node, const Node& child);
    /// The appendChild method.
    /// [`Node.appendChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/appendChild)
    Node appendChild(const Node& node);
    /// The replaceChild method.
    /// [`Node.replaceChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/replaceChild)
    Node replaceChild(const Node& node, const Node& child);
    /// The removeChild method.
    /// [`Node.removeChild`](https://developer.mozilla.org/en-US/docs/Web/API/Node/removeChild)
    Node removeChild(const Node& child);
};

} // namespace webbind