#include "webbind/Selection.hpp"
#include "webbind/Node.hpp"
#include "webbind/Range.hpp"
#include "webbind/StaticRange.hpp"
#include "webbind/GetComposedRangesOptions.hpp"

namespace webbind {

Selection Selection::take_ownership(Handle h) noexcept {
        return Selection(h);
    }
Selection Selection::clone() const noexcept { return *this; }
emlite::Val Selection::instance() noexcept { return emlite::Val::global("Selection"); }
Selection::Selection(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
Selection::Selection(const emlite::Val &val) noexcept: emlite::Val(val) {}

Node Selection::anchorNode() const {
    return emlite::Val::get("anchorNode").as<Node>();
}

unsigned long Selection::anchorOffset() const {
    return emlite::Val::get("anchorOffset").as<unsigned long>();
}

Node Selection::focusNode() const {
    return emlite::Val::get("focusNode").as<Node>();
}

unsigned long Selection::focusOffset() const {
    return emlite::Val::get("focusOffset").as<unsigned long>();
}

bool Selection::isCollapsed() const {
    return emlite::Val::get("isCollapsed").as<bool>();
}

unsigned long Selection::rangeCount() const {
    return emlite::Val::get("rangeCount").as<unsigned long>();
}

jsbind::String Selection::type() const {
    return emlite::Val::get("type").as<jsbind::String>();
}

jsbind::String Selection::direction() const {
    return emlite::Val::get("direction").as<jsbind::String>();
}

Range Selection::getRangeAt(unsigned long index) {
    return emlite::Val::call("getRangeAt", index).as<Range>();
}

jsbind::Undefined Selection::addRange(const Range& range) {
    return emlite::Val::call("addRange", range).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::removeRange(const Range& range) {
    return emlite::Val::call("removeRange", range).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::removeAllRanges() {
    return emlite::Val::call("removeAllRanges").as<jsbind::Undefined>();
}

jsbind::Undefined Selection::empty() {
    return emlite::Val::call("empty").as<jsbind::Undefined>();
}

jsbind::TypedArray<StaticRange> Selection::getComposedRanges() {
    return emlite::Val::call("getComposedRanges").as<jsbind::TypedArray<StaticRange>>();
}

jsbind::TypedArray<StaticRange> Selection::getComposedRanges(const GetComposedRangesOptions& options) {
    return emlite::Val::call("getComposedRanges", options).as<jsbind::TypedArray<StaticRange>>();
}

jsbind::Undefined Selection::collapse(const Node& node) {
    return emlite::Val::call("collapse", node).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::collapse(const Node& node, unsigned long offset) {
    return emlite::Val::call("collapse", node, offset).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::setPosition(const Node& node) {
    return emlite::Val::call("setPosition", node).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::setPosition(const Node& node, unsigned long offset) {
    return emlite::Val::call("setPosition", node, offset).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::collapseToStart() {
    return emlite::Val::call("collapseToStart").as<jsbind::Undefined>();
}

jsbind::Undefined Selection::collapseToEnd() {
    return emlite::Val::call("collapseToEnd").as<jsbind::Undefined>();
}

jsbind::Undefined Selection::extend(const Node& node) {
    return emlite::Val::call("extend", node).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::extend(const Node& node, unsigned long offset) {
    return emlite::Val::call("extend", node, offset).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::setBaseAndExtent(const Node& anchorNode, unsigned long anchorOffset, const Node& focusNode, unsigned long focusOffset) {
    return emlite::Val::call("setBaseAndExtent", anchorNode, anchorOffset, focusNode, focusOffset).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::selectAllChildren(const Node& node) {
    return emlite::Val::call("selectAllChildren", node).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::modify() {
    return emlite::Val::call("modify").as<jsbind::Undefined>();
}

jsbind::Undefined Selection::modify(const jsbind::String& alter) {
    return emlite::Val::call("modify", alter).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::modify(const jsbind::String& alter, const jsbind::String& direction) {
    return emlite::Val::call("modify", alter, direction).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::modify(const jsbind::String& alter, const jsbind::String& direction, const jsbind::String& granularity) {
    return emlite::Val::call("modify", alter, direction, granularity).as<jsbind::Undefined>();
}

jsbind::Undefined Selection::deleteFromDocument() {
    return emlite::Val::call("deleteFromDocument").as<jsbind::Undefined>();
}

bool Selection::containsNode(const Node& node) {
    return emlite::Val::call("containsNode", node).as<bool>();
}

bool Selection::containsNode(const Node& node, bool allowPartialContainment) {
    return emlite::Val::call("containsNode", node, allowPartialContainment).as<bool>();
}


} // namespace webbind