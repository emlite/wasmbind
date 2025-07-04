#include <webbind/MutationRecord.hpp>
#include <webbind/Node.hpp>
#include <webbind/NodeList.hpp>


MutationRecord MutationRecord::take_ownership(Handle h) noexcept {
        return MutationRecord(h);
    }
MutationRecord MutationRecord::clone() const noexcept { return *this; }
MutationRecord::MutationRecord(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
MutationRecord::MutationRecord(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::DOMString MutationRecord::type() const {
    return emlite::Val::get("type").as<jsbind::DOMString>();
}

Node MutationRecord::target() const {
    return emlite::Val::get("target").as<Node>();
}

NodeList MutationRecord::addedNodes() const {
    return emlite::Val::get("addedNodes").as<NodeList>();
}

NodeList MutationRecord::removedNodes() const {
    return emlite::Val::get("removedNodes").as<NodeList>();
}

Node MutationRecord::previousSibling() const {
    return emlite::Val::get("previousSibling").as<Node>();
}

Node MutationRecord::nextSibling() const {
    return emlite::Val::get("nextSibling").as<Node>();
}

jsbind::DOMString MutationRecord::attributeName() const {
    return emlite::Val::get("attributeName").as<jsbind::DOMString>();
}

jsbind::DOMString MutationRecord::attributeNamespace() const {
    return emlite::Val::get("attributeNamespace").as<jsbind::DOMString>();
}

jsbind::DOMString MutationRecord::oldValue() const {
    return emlite::Val::get("oldValue").as<jsbind::DOMString>();
}

