#include <webbind/DocumentType.hpp>


DocumentType DocumentType::take_ownership(Handle h) noexcept {
        return DocumentType(h);
    }
DocumentType DocumentType::clone() const noexcept { return *this; }
DocumentType::DocumentType(Handle h) noexcept : Node(emlite::Val::take_ownership(h)) {}
DocumentType::DocumentType(const emlite::Val &val) noexcept: Node(val) {}


jsbind::DOMString DocumentType::name() const {
    return Node::get("name").as<jsbind::DOMString>();
}

jsbind::DOMString DocumentType::publicId() const {
    return Node::get("publicId").as<jsbind::DOMString>();
}

jsbind::DOMString DocumentType::systemId() const {
    return Node::get("systemId").as<jsbind::DOMString>();
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

