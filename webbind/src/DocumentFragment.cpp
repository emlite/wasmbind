#include <webbind/DocumentFragment.hpp>
#include <webbind/Element.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/NodeList.hpp>

namespace webbind {

DocumentFragment DocumentFragment::take_ownership(Handle h) noexcept {
    return DocumentFragment(h);
}

DocumentFragment DocumentFragment::clone() const noexcept { return *this; }

emlite::Val DocumentFragment::instance() noexcept { return emlite::Val::global("DocumentFragment"); }

DocumentFragment::DocumentFragment(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}

DocumentFragment::DocumentFragment(const emlite::Val &val) noexcept: Node(val) {}

DocumentFragment::DocumentFragment() : Node(emlite::Val::global("DocumentFragment").new_()) {}

Element DocumentFragment::getElementById(const jsbind::String& elementId) {
    return Node::call("getElementById", elementId).as<Element>();
}

HTMLCollection DocumentFragment::children() const {
    return Node::get("children").as<HTMLCollection>();
}

Element DocumentFragment::firstElementChild() const {
    return Node::get("firstElementChild").as<Element>();
}

Element DocumentFragment::lastElementChild() const {
    return Node::get("lastElementChild").as<Element>();
}

unsigned long DocumentFragment::childElementCount() const {
    return Node::get("childElementCount").as<unsigned long>();
}

jsbind::Undefined DocumentFragment::prepend(const jsbind::Any& nodes) {
    return Node::call("prepend", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined DocumentFragment::append(const jsbind::Any& nodes) {
    return Node::call("append", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined DocumentFragment::replaceChildren(const jsbind::Any& nodes) {
    return Node::call("replaceChildren", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined DocumentFragment::moveBefore(const Node& node, const Node& child) {
    return Node::call("moveBefore", node, child).as<jsbind::Undefined>();
}

Element DocumentFragment::querySelector(const jsbind::String& selectors) {
    return Node::call("querySelector", selectors).as<Element>();
}

NodeList DocumentFragment::querySelectorAll(const jsbind::String& selectors) {
    return Node::call("querySelectorAll", selectors).as<NodeList>();
}


} // namespace webbind