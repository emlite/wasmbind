#include <webbind/Range.hpp>
#include <webbind/Node.hpp>
#include <webbind/DocumentFragment.hpp>
#include <webbind/DOMRectList.hpp>
#include <webbind/DOMRect.hpp>


Range Range::take_ownership(Handle h) noexcept {
        return Range(h);
    }
Range Range::clone() const noexcept { return *this; }
emlite::Val Range::instance() noexcept { return emlite::Val::global("Range"); }
Range::Range(Handle h) noexcept : AbstractRange(emlite::Val::take_ownership(h)) {}
Range::Range(const emlite::Val &val) noexcept: AbstractRange(val) {}


Range::Range() : AbstractRange(emlite::Val::global("Range").new_()) {}

Node Range::commonAncestorContainer() const {
    return AbstractRange::get("commonAncestorContainer").as<Node>();
}

jsbind::Undefined Range::setStart(const Node& node, unsigned long offset) {
    return AbstractRange::call("setStart", node, offset).as<jsbind::Undefined>();
}

jsbind::Undefined Range::setEnd(const Node& node, unsigned long offset) {
    return AbstractRange::call("setEnd", node, offset).as<jsbind::Undefined>();
}

jsbind::Undefined Range::setStartBefore(const Node& node) {
    return AbstractRange::call("setStartBefore", node).as<jsbind::Undefined>();
}

jsbind::Undefined Range::setStartAfter(const Node& node) {
    return AbstractRange::call("setStartAfter", node).as<jsbind::Undefined>();
}

jsbind::Undefined Range::setEndBefore(const Node& node) {
    return AbstractRange::call("setEndBefore", node).as<jsbind::Undefined>();
}

jsbind::Undefined Range::setEndAfter(const Node& node) {
    return AbstractRange::call("setEndAfter", node).as<jsbind::Undefined>();
}

jsbind::Undefined Range::collapse() {
    return AbstractRange::call("collapse").as<jsbind::Undefined>();
}

jsbind::Undefined Range::collapse(bool toStart) {
    return AbstractRange::call("collapse", toStart).as<jsbind::Undefined>();
}

jsbind::Undefined Range::selectNode(const Node& node) {
    return AbstractRange::call("selectNode", node).as<jsbind::Undefined>();
}

jsbind::Undefined Range::selectNodeContents(const Node& node) {
    return AbstractRange::call("selectNodeContents", node).as<jsbind::Undefined>();
}

short Range::compareBoundaryPoints(unsigned short how, const Range& sourceRange) {
    return AbstractRange::call("compareBoundaryPoints", how, sourceRange).as<short>();
}

jsbind::Undefined Range::deleteContents() {
    return AbstractRange::call("deleteContents").as<jsbind::Undefined>();
}

DocumentFragment Range::extractContents() {
    return AbstractRange::call("extractContents").as<DocumentFragment>();
}

DocumentFragment Range::cloneContents() {
    return AbstractRange::call("cloneContents").as<DocumentFragment>();
}

jsbind::Undefined Range::insertNode(const Node& node) {
    return AbstractRange::call("insertNode", node).as<jsbind::Undefined>();
}

jsbind::Undefined Range::surroundContents(const Node& newParent) {
    return AbstractRange::call("surroundContents", newParent).as<jsbind::Undefined>();
}

Range Range::cloneRange() {
    return AbstractRange::call("cloneRange").as<Range>();
}

jsbind::Undefined Range::detach() {
    return AbstractRange::call("detach").as<jsbind::Undefined>();
}

bool Range::isPointInRange(const Node& node, unsigned long offset) {
    return AbstractRange::call("isPointInRange", node, offset).as<bool>();
}

short Range::comparePoint(const Node& node, unsigned long offset) {
    return AbstractRange::call("comparePoint", node, offset).as<short>();
}

bool Range::intersectsNode(const Node& node) {
    return AbstractRange::call("intersectsNode", node).as<bool>();
}

DOMRectList Range::getClientRects() {
    return AbstractRange::call("getClientRects").as<DOMRectList>();
}

DOMRect Range::getBoundingClientRect() {
    return AbstractRange::call("getBoundingClientRect").as<DOMRect>();
}

DocumentFragment Range::createContextualFragment(const jsbind::Any& string) {
    return AbstractRange::call("createContextualFragment", string).as<DocumentFragment>();
}

