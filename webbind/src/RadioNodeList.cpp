#include <webbind/RadioNodeList.hpp>


RadioNodeList RadioNodeList::take_ownership(Handle h) noexcept {
        return RadioNodeList(h);
    }
RadioNodeList RadioNodeList::clone() const noexcept { return *this; }
RadioNodeList::RadioNodeList(Handle h) noexcept : NodeList(emlite::Val::take_ownership(h)) {}
RadioNodeList::RadioNodeList(const emlite::Val &val) noexcept: NodeList(val) {}


jsbind::DOMString RadioNodeList::value() const {
    return NodeList::get("value").as<jsbind::DOMString>();
}

void RadioNodeList::value(const jsbind::DOMString& value) {
    NodeList::set("value", value);
}

