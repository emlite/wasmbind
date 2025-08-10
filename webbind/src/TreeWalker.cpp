#include <webbind/TreeWalker.hpp>
#include <webbind/Node.hpp>

namespace webbind {

TreeWalker TreeWalker::take_ownership(Handle h) noexcept {
    return TreeWalker(h);
}

TreeWalker TreeWalker::clone() const noexcept { return *this; }

emlite::Val TreeWalker::instance() noexcept { return emlite::Val::global("TreeWalker"); }

TreeWalker::TreeWalker(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

TreeWalker::TreeWalker(const emlite::Val &val) noexcept: emlite::Val(val) {}

Node TreeWalker::root() const {
    return emlite::Val::get("root").as<Node>();
}

unsigned long TreeWalker::whatToShow() const {
    return emlite::Val::get("whatToShow").as<unsigned long>();
}

jsbind::Function TreeWalker::filter() const {
    return emlite::Val::get("filter").as<jsbind::Function>();
}

Node TreeWalker::currentNode() const {
    return emlite::Val::get("currentNode").as<Node>();
}

void TreeWalker::currentNode(const Node& value) {
    emlite::Val::set("currentNode", value);
}

Node TreeWalker::parentNode() {
    return emlite::Val::call("parentNode").as<Node>();
}

Node TreeWalker::firstChild() {
    return emlite::Val::call("firstChild").as<Node>();
}

Node TreeWalker::lastChild() {
    return emlite::Val::call("lastChild").as<Node>();
}

Node TreeWalker::previousSibling() {
    return emlite::Val::call("previousSibling").as<Node>();
}

Node TreeWalker::nextSibling() {
    return emlite::Val::call("nextSibling").as<Node>();
}

Node TreeWalker::previousNode() {
    return emlite::Val::call("previousNode").as<Node>();
}

Node TreeWalker::nextNode() {
    return emlite::Val::call("nextNode").as<Node>();
}


} // namespace webbind