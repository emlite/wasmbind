#include <webbind/NamedFlow.hpp>
#include <webbind/Element.hpp>
#include <webbind/Node.hpp>


NamedFlow NamedFlow::take_ownership(Handle h) noexcept {
        return NamedFlow(h);
    }
NamedFlow NamedFlow::clone() const noexcept { return *this; }
emlite::Val NamedFlow::instance() noexcept { return emlite::Val::global("NamedFlow"); }
NamedFlow::NamedFlow(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
NamedFlow::NamedFlow(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::String NamedFlow::name() const {
    return EventTarget::get("name").as<jsbind::String>();
}

bool NamedFlow::overset() const {
    return EventTarget::get("overset").as<bool>();
}

jsbind::TypedArray<Element> NamedFlow::getRegions() {
    return EventTarget::call("getRegions").as<jsbind::TypedArray<Element>>();
}

short NamedFlow::firstEmptyRegionIndex() const {
    return EventTarget::get("firstEmptyRegionIndex").as<short>();
}

jsbind::TypedArray<Node> NamedFlow::getContent() {
    return EventTarget::call("getContent").as<jsbind::TypedArray<Node>>();
}

jsbind::TypedArray<Element> NamedFlow::getRegionsByContent(const Node& node) {
    return EventTarget::call("getRegionsByContent", node).as<jsbind::TypedArray<Element>>();
}

