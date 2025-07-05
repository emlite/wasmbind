#include <webbind/Node.hpp>
#include <webbind/Document.hpp>
#include <webbind/Element.hpp>
#include <webbind/NodeList.hpp>


GetRootNodeOptions::GetRootNodeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GetRootNodeOptions GetRootNodeOptions::take_ownership(Handle h) noexcept {
        return GetRootNodeOptions(h);
    }
GetRootNodeOptions::GetRootNodeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
GetRootNodeOptions::GetRootNodeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
GetRootNodeOptions GetRootNodeOptions::clone() const noexcept { return *this; }

bool GetRootNodeOptions::composed() const {
    return emlite::Val::get("composed").as<bool>();
}

void GetRootNodeOptions::composed(bool value) {
    emlite::Val::set("composed", value);
}

Node Node::take_ownership(Handle h) noexcept {
        return Node(h);
    }
Node Node::clone() const noexcept { return *this; }
Node::Node(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Node::Node(const emlite::Val &val) noexcept: EventTarget(val) {}


unsigned short Node::nodeType() const {
    return EventTarget::get("nodeType").as<unsigned short>();
}

jsbind::DOMString Node::nodeName() const {
    return EventTarget::get("nodeName").as<jsbind::DOMString>();
}

jsbind::USVString Node::baseURI() const {
    return EventTarget::get("baseURI").as<jsbind::USVString>();
}

bool Node::isConnected() const {
    return EventTarget::get("isConnected").as<bool>();
}

Document Node::ownerDocument() const {
    return EventTarget::get("ownerDocument").as<Document>();
}

Node Node::getRootNode() {
    return EventTarget::call("getRootNode").as<Node>();
}

Node Node::getRootNode(const GetRootNodeOptions& options) {
    return EventTarget::call("getRootNode", options).as<Node>();
}

Node Node::parentNode() const {
    return EventTarget::get("parentNode").as<Node>();
}

Element Node::parentElement() const {
    return EventTarget::get("parentElement").as<Element>();
}

bool Node::hasChildNodes() {
    return EventTarget::call("hasChildNodes").as<bool>();
}

NodeList Node::childNodes() const {
    return EventTarget::get("childNodes").as<NodeList>();
}

Node Node::firstChild() const {
    return EventTarget::get("firstChild").as<Node>();
}

Node Node::lastChild() const {
    return EventTarget::get("lastChild").as<Node>();
}

Node Node::previousSibling() const {
    return EventTarget::get("previousSibling").as<Node>();
}

Node Node::nextSibling() const {
    return EventTarget::get("nextSibling").as<Node>();
}

jsbind::DOMString Node::nodeValue() const {
    return EventTarget::get("nodeValue").as<jsbind::DOMString>();
}

void Node::nodeValue(const jsbind::DOMString& value) {
    EventTarget::set("nodeValue", value);
}

jsbind::DOMString Node::textContent() const {
    return EventTarget::get("textContent").as<jsbind::DOMString>();
}

void Node::textContent(const jsbind::DOMString& value) {
    EventTarget::set("textContent", value);
}

jsbind::Undefined Node::normalize() {
    return EventTarget::call("normalize").as<jsbind::Undefined>();
}

Node Node::cloneNode() {
    return EventTarget::call("cloneNode").as<Node>();
}

Node Node::cloneNode(bool subtree) {
    return EventTarget::call("cloneNode", subtree).as<Node>();
}

bool Node::isEqualNode(const Node& otherNode) {
    return EventTarget::call("isEqualNode", otherNode).as<bool>();
}

bool Node::isSameNode(const Node& otherNode) {
    return EventTarget::call("isSameNode", otherNode).as<bool>();
}

unsigned short Node::compareDocumentPosition(const Node& other) {
    return EventTarget::call("compareDocumentPosition", other).as<unsigned short>();
}

bool Node::contains(const Node& other) {
    return EventTarget::call("contains", other).as<bool>();
}

jsbind::DOMString Node::lookupPrefix(const jsbind::DOMString& namespace_) {
    return EventTarget::call("lookupPrefix", namespace_).as<jsbind::DOMString>();
}

jsbind::DOMString Node::lookupNamespaceURI(const jsbind::DOMString& prefix) {
    return EventTarget::call("lookupNamespaceURI", prefix).as<jsbind::DOMString>();
}

bool Node::isDefaultNamespace(const jsbind::DOMString& namespace_) {
    return EventTarget::call("isDefaultNamespace", namespace_).as<bool>();
}

Node Node::insertBefore(const Node& node, const Node& child) {
    return EventTarget::call("insertBefore", node, child).as<Node>();
}

Node Node::appendChild(const Node& node) {
    return EventTarget::call("appendChild", node).as<Node>();
}

Node Node::replaceChild(const Node& node, const Node& child) {
    return EventTarget::call("replaceChild", node, child).as<Node>();
}

Node Node::removeChild(const Node& child) {
    return EventTarget::call("removeChild", child).as<Node>();
}

