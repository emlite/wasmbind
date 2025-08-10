#include "webbind/DocumentType.hpp"

namespace webbind {

DocumentType DocumentType::take_ownership(Handle h) noexcept {
        return DocumentType(h);
    }
DocumentType DocumentType::clone() const noexcept { return *this; }
emlite::Val DocumentType::instance() noexcept { return emlite::Val::global("DocumentType"); }
DocumentType::DocumentType(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
DocumentType::DocumentType(const emlite::Val &val) noexcept: Node(val) {}

jsbind::String DocumentType::name() const {
    return Node::get("name").as<jsbind::String>();
}

jsbind::String DocumentType::publicId() const {
    return Node::get("publicId").as<jsbind::String>();
}

jsbind::String DocumentType::systemId() const {
    return Node::get("systemId").as<jsbind::String>();
}

jsbind::Undefined DocumentType::before(const jsbind::Any& nodes) {
    return Node::call("before", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined DocumentType::after(const jsbind::Any& nodes) {
    return Node::call("after", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined DocumentType::replaceWith(const jsbind::Any& nodes) {
    return Node::call("replaceWith", nodes).as<jsbind::Undefined>();
}

jsbind::Undefined DocumentType::remove() {
    return Node::call("remove").as<jsbind::Undefined>();
}


} // namespace webbind