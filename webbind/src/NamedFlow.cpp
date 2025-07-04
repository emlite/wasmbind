#include <webbind/NamedFlow.hpp>
#include <webbind/Element.hpp>
#include <webbind/Node.hpp>


NamedFlow NamedFlow::take_ownership(Handle h) noexcept {
        return NamedFlow(h);
    }
NamedFlow NamedFlow::clone() const noexcept { return *this; }
NamedFlow::NamedFlow(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
NamedFlow::NamedFlow(const emlite::Val &val) noexcept: EventTarget(val) {}


jsbind::CSSOMString NamedFlow::name() const {
    return EventTarget::get("name").as<jsbind::CSSOMString>();
}

bool NamedFlow::overset() const {
    return EventTarget::get("overset").as<bool>();
}

jsbind::Sequence<Element> NamedFlow::getRegions() {
    return EventTarget::call("getRegions").as<jsbind::Sequence<Element>>();
}

short NamedFlow::firstEmptyRegionIndex() const {
    return EventTarget::get("firstEmptyRegionIndex").as<short>();
}

jsbind::Sequence<Node> NamedFlow::getContent() {
    return EventTarget::call("getContent").as<jsbind::Sequence<Node>>();
}

jsbind::Sequence<Element> NamedFlow::getRegionsByContent(const Node& node) {
    return EventTarget::call("getRegionsByContent", node).as<jsbind::Sequence<Element>>();
}

