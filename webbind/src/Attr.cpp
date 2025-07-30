#include <webbind/Attr.hpp>
#include <webbind/Element.hpp>


Attr Attr::take_ownership(Handle h) noexcept {
        return Attr(h);
    }
Attr Attr::clone() const noexcept { return *this; }
Attr::Attr(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
Attr::Attr(const emlite::Val &val) noexcept: Node(val) {}


jsbind::String Attr::namespaceURI() const {
    return Node::get("namespaceURI").as<jsbind::String>();
}

jsbind::String Attr::prefix() const {
    return Node::get("prefix").as<jsbind::String>();
}

jsbind::String Attr::localName() const {
    return Node::get("localName").as<jsbind::String>();
}

jsbind::String Attr::name() const {
    return Node::get("name").as<jsbind::String>();
}

jsbind::String Attr::value() const {
    return Node::get("value").as<jsbind::String>();
}

void Attr::value(const jsbind::String& value) {
    Node::set("value", value);
}

Element Attr::ownerElement() const {
    return Node::get("ownerElement").as<Element>();
}

bool Attr::specified() const {
    return Node::get("specified").as<bool>();
}

