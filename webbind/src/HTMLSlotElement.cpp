#include <webbind/HTMLSlotElement.hpp>
#include <webbind/Node.hpp>
#include <webbind/AssignedNodesOptions.hpp>
#include <webbind/Element.hpp>

namespace webbind {

HTMLSlotElement HTMLSlotElement::take_ownership(Handle h) noexcept {
        return HTMLSlotElement(h);
    }
HTMLSlotElement HTMLSlotElement::clone() const noexcept { return *this; }
emlite::Val HTMLSlotElement::instance() noexcept { return emlite::Val::global("HTMLSlotElement"); }
HTMLSlotElement::HTMLSlotElement(Handle h) noexcept : HTMLElement(emlite::Val::take_ownership(h)) {}
HTMLSlotElement::HTMLSlotElement(const emlite::Val &val) noexcept: HTMLElement(val) {}

HTMLSlotElement::HTMLSlotElement() : HTMLElement(emlite::Val::global("HTMLSlotElement").new_()) {}

jsbind::String HTMLSlotElement::name() const {
    return HTMLElement::get("name").as<jsbind::String>();
}

void HTMLSlotElement::name(const jsbind::String& value) {
    HTMLElement::set("name", value);
}

jsbind::TypedArray<Node> HTMLSlotElement::assignedNodes() {
    return HTMLElement::call("assignedNodes").as<jsbind::TypedArray<Node>>();
}

jsbind::TypedArray<Node> HTMLSlotElement::assignedNodes(const AssignedNodesOptions& options) {
    return HTMLElement::call("assignedNodes", options).as<jsbind::TypedArray<Node>>();
}

jsbind::TypedArray<Element> HTMLSlotElement::assignedElements() {
    return HTMLElement::call("assignedElements").as<jsbind::TypedArray<Element>>();
}

jsbind::TypedArray<Element> HTMLSlotElement::assignedElements(const AssignedNodesOptions& options) {
    return HTMLElement::call("assignedElements", options).as<jsbind::TypedArray<Element>>();
}

jsbind::Undefined HTMLSlotElement::assign(const jsbind::Any& nodes) {
    return HTMLElement::call("assign", nodes).as<jsbind::Undefined>();
}


} // namespace webbind