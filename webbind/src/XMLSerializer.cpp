#include <webbind/XMLSerializer.hpp>
#include <webbind/Node.hpp>


XMLSerializer XMLSerializer::take_ownership(Handle h) noexcept {
        return XMLSerializer(h);
    }
XMLSerializer XMLSerializer::clone() const noexcept { return *this; }
XMLSerializer::XMLSerializer(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XMLSerializer::XMLSerializer(const emlite::Val &val) noexcept: emlite::Val(val) {}


XMLSerializer::XMLSerializer(): emlite::Val(emlite::Val::global("XMLSerializer").new_()) {}

jsbind::DOMString XMLSerializer::serializeToString(const Node& root) {
    return emlite::Val::call("serializeToString", root).as<jsbind::DOMString>();
}

