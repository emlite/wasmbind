#include <webbind/Attr.hpp>
#include <webbind/Element.hpp>


Attr Attr::take_ownership(Handle h) noexcept {
        return Attr(h);
    }
Attr Attr::clone() const noexcept { return *this; }
Attr::Attr(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
Attr::Attr(const emlite::Val &val) noexcept: Node(val) {}


jsbind::DOMString Attr::namespaceURI() const {
    return Node::get("namespaceURI").as<jsbind::DOMString>();
}

jsbind::DOMString Attr::prefix() const {
    return Node::get("prefix").as<jsbind::DOMString>();
}

jsbind::DOMString Attr::localName() const {
    return Node::get("localName").as<jsbind::DOMString>();
}

jsbind::DOMString Attr::name() const {
    return Node::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString Attr::value() const {
    return Node::get("value").as<jsbind::DOMString>();
}

void Attr::value(const jsbind::DOMString& value) {
    Node::set("value", value);
}

Element Attr::ownerElement() const {
    return Node::get("ownerElement").as<Element>();
}

bool Attr::specified() const {
    return Node::get("specified").as<bool>();
}

