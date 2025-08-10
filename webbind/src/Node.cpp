#include <webbind/Node.hpp>
#include <webbind/Document.hpp>
#include <webbind/Node.hpp>
#include <webbind/GetRootNodeOptions.hpp>
#include <webbind/Element.hpp>
#include <webbind/NodeList.hpp>

namespace webbind {

Node Node::take_ownership(Handle h) noexcept {
        return Node(h);
    }
Node Node::clone() const noexcept { return *this; }
emlite::Val Node::instance() noexcept { return emlite::Val::global("Node"); }
Node::Node(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
Node::Node(const emlite::Val &val) noexcept: EventTarget(val) {}

unsigned short Node::nodeType() const {
    return EventTarget::get("nodeType").as<unsigned short>();
}

jsbind::String Node::nodeName() const {
    return EventTarget::get("nodeName").as<jsbind::String>();
}

jsbind::String Node::baseURI() const {
    return EventTarget::get("baseURI").as<jsbind::String>();
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

jsbind::String Node::nodeValue() const {
    return EventTarget::get("nodeValue").as<jsbind::String>();
}

void Node::nodeValue(const jsbind::String& value) {
    EventTarget::set("nodeValue", value);
}

jsbind::String Node::textContent() const {
    return EventTarget::get("textContent").as<jsbind::String>();
}

void Node::textContent(const jsbind::String& value) {
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

jsbind::String Node::lookupPrefix(const jsbind::String& namespace_) {
    return EventTarget::call("lookupPrefix", namespace_).as<jsbind::String>();
}

jsbind::String Node::lookupNamespaceURI(const jsbind::String& prefix) {
    return EventTarget::call("lookupNamespaceURI", prefix).as<jsbind::String>();
}

bool Node::isDefaultNamespace(const jsbind::String& namespace_) {
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


} // namespace webbind