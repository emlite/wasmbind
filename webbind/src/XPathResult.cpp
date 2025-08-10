#include "webbind/XPathResult.hpp"
#include "webbind/Node.hpp"

namespace webbind {

XPathResult XPathResult::take_ownership(Handle h) noexcept {
        return XPathResult(h);
    }
XPathResult XPathResult::clone() const noexcept { return *this; }
emlite::Val XPathResult::instance() noexcept { return emlite::Val::global("XPathResult"); }
XPathResult::XPathResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XPathResult::XPathResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

unsigned short XPathResult::resultType() const {
    return emlite::Val::get("resultType").as<unsigned short>();
}

double XPathResult::numberValue() const {
    return emlite::Val::get("numberValue").as<double>();
}

jsbind::String XPathResult::stringValue() const {
    return emlite::Val::get("stringValue").as<jsbind::String>();
}

bool XPathResult::booleanValue() const {
    return emlite::Val::get("booleanValue").as<bool>();
}

Node XPathResult::singleNodeValue() const {
    return emlite::Val::get("singleNodeValue").as<Node>();
}

bool XPathResult::invalidIteratorState() const {
    return emlite::Val::get("invalidIteratorState").as<bool>();
}

unsigned long XPathResult::snapshotLength() const {
    return emlite::Val::get("snapshotLength").as<unsigned long>();
}

Node XPathResult::iterateNext() {
    return emlite::Val::call("iterateNext").as<Node>();
}

Node XPathResult::snapshotItem(unsigned long index) {
    return emlite::Val::call("snapshotItem", index).as<Node>();
}


} // namespace webbind