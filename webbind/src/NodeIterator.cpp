#include <webbind/NodeIterator.hpp>
#include <webbind/Node.hpp>

namespace webbind {

NodeIterator NodeIterator::take_ownership(Handle h) noexcept {
    return NodeIterator(h);
}

NodeIterator NodeIterator::clone() const noexcept { return *this; }

emlite::Val NodeIterator::instance() noexcept { return emlite::Val::global("NodeIterator"); }

NodeIterator::NodeIterator(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

NodeIterator::NodeIterator(const emlite::Val &val) noexcept: emlite::Val(val) {}

Node NodeIterator::root() const {
    return emlite::Val::get("root").as<Node>();
}

Node NodeIterator::referenceNode() const {
    return emlite::Val::get("referenceNode").as<Node>();
}

bool NodeIterator::pointerBeforeReferenceNode() const {
    return emlite::Val::get("pointerBeforeReferenceNode").as<bool>();
}

unsigned long NodeIterator::whatToShow() const {
    return emlite::Val::get("whatToShow").as<unsigned long>();
}

jsbind::Function NodeIterator::filter() const {
    return emlite::Val::get("filter").as<jsbind::Function>();
}

Node NodeIterator::nextNode() {
    return emlite::Val::call("nextNode").as<Node>();
}

Node NodeIterator::previousNode() {
    return emlite::Val::call("previousNode").as<Node>();
}

jsbind::Undefined NodeIterator::detach() {
    return emlite::Val::call("detach").as<jsbind::Undefined>();
}


} // namespace webbind