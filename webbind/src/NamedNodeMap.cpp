#include "webbind/NamedNodeMap.hpp"
#include "webbind/Attr.hpp"

namespace webbind {

NamedNodeMap NamedNodeMap::take_ownership(Handle h) noexcept {
        return NamedNodeMap(h);
    }
NamedNodeMap NamedNodeMap::clone() const noexcept { return *this; }
emlite::Val NamedNodeMap::instance() noexcept { return emlite::Val::global("NamedNodeMap"); }
NamedNodeMap::NamedNodeMap(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NamedNodeMap::NamedNodeMap(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned long NamedNodeMap::length() const {
    return emlite::Val::get("length").as<unsigned long>();
}

Attr NamedNodeMap::item(unsigned long index) {
    return emlite::Val::call("item", index).as<Attr>();
}

Attr NamedNodeMap::getNamedItem(const jsbind::String& qualifiedName) {
    return emlite::Val::call("getNamedItem", qualifiedName).as<Attr>();
}

Attr NamedNodeMap::getNamedItemNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return emlite::Val::call("getNamedItemNS", namespace_, localName).as<Attr>();
}

Attr NamedNodeMap::setNamedItem(const Attr& attr) {
    return emlite::Val::call("setNamedItem", attr).as<Attr>();
}

Attr NamedNodeMap::setNamedItemNS(const Attr& attr) {
    return emlite::Val::call("setNamedItemNS", attr).as<Attr>();
}

Attr NamedNodeMap::removeNamedItem(const jsbind::String& qualifiedName) {
    return emlite::Val::call("removeNamedItem", qualifiedName).as<Attr>();
}

Attr NamedNodeMap::removeNamedItemNS(const jsbind::String& namespace_, const jsbind::String& localName) {
    return emlite::Val::call("removeNamedItemNS", namespace_, localName).as<Attr>();
}


} // namespace webbind