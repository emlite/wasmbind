#include <webbind/RadioNodeList.hpp>


RadioNodeList RadioNodeList::take_ownership(Handle h) noexcept {
        return RadioNodeList(h);
    }
RadioNodeList RadioNodeList::clone() const noexcept { return *this; }
emlite::Val RadioNodeList::instance() noexcept { return emlite::Val::global("RadioNodeList"); }
RadioNodeList::RadioNodeList(Handle h) noexcept : NodeList(emlite::Val::take_ownership(h)) {}
RadioNodeList::RadioNodeList(const emlite::Val &val) noexcept: NodeList(val) {}


jsbind::String RadioNodeList::value() const {
    return NodeList::get("value").as<jsbind::String>();
}

void RadioNodeList::value(const jsbind::String& value) {
    NodeList::set("value", value);
}

