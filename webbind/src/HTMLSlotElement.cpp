#include <webbind/HTMLSlotElement.hpp>
#include <webbind/Node.hpp>
#include <webbind/Element.hpp>


AssignedNodesOptions::AssignedNodesOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
AssignedNodesOptions AssignedNodesOptions::take_ownership(Handle h) noexcept {
        return AssignedNodesOptions(h);
    }
AssignedNodesOptions::AssignedNodesOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
AssignedNodesOptions::AssignedNodesOptions() noexcept: emlite::Val(emlite::Val::object()) {}
AssignedNodesOptions AssignedNodesOptions::clone() const noexcept { return *this; }

bool AssignedNodesOptions::flatten() const {
    return emlite::Val::get("flatten").as<bool>();
}

void AssignedNodesOptions::flatten(bool value) {
    emlite::Val::set("flatten", value);
}

HTMLSlotElement HTMLSlotElement::take_ownership(Handle h) noexcept {
        return HTMLSlotElement(h);
    }
HTMLSlotElement HTMLSlotElement::clone() const noexcept { return *this; }
HTMLSlotElement::HTMLSlotElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLSlotElement::HTMLSlotElement(const emlite::Val &val) noexcept: HTMLElement(val) {}


HTMLSlotElement::HTMLSlotElement() : HTMLElement(emlite::Val::global("HTMLSlotElement").new_()) {}

jsbind::DOMString HTMLSlotElement::name() const {
    return HTMLElement::get("name").as<jsbind::DOMString>();
}

void HTMLSlotElement::name(const jsbind::DOMString& value) {
    HTMLElement::set("name", value);
}

jsbind::Sequence<Node> HTMLSlotElement::assignedNodes() {
    return HTMLElement::call("assignedNodes").as<jsbind::Sequence<Node>>();
}

jsbind::Sequence<Node> HTMLSlotElement::assignedNodes(const AssignedNodesOptions& options) {
    return HTMLElement::call("assignedNodes", options).as<jsbind::Sequence<Node>>();
}

jsbind::Sequence<Element> HTMLSlotElement::assignedElements() {
    return HTMLElement::call("assignedElements").as<jsbind::Sequence<Element>>();
}

jsbind::Sequence<Element> HTMLSlotElement::assignedElements(const AssignedNodesOptions& options) {
    return HTMLElement::call("assignedElements", options).as<jsbind::Sequence<Element>>();
}

jsbind::Undefined HTMLSlotElement::assign(const jsbind::Any& nodes) {
    return HTMLElement::call("assign", nodes).as<jsbind::Undefined>();
}

