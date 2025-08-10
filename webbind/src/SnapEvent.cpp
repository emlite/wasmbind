#include "webbind/SnapEvent.hpp"
#include "webbind/SnapEventInit.hpp"
#include "webbind/Node.hpp"

namespace webbind {

SnapEvent SnapEvent::take_ownership(Handle h) noexcept {
        return SnapEvent(h);
    }
SnapEvent SnapEvent::clone() const noexcept { return *this; }
emlite::Val SnapEvent::instance() noexcept { return emlite::Val::global("SnapEvent"); }
SnapEvent::SnapEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
SnapEvent::SnapEvent(const emlite::Val &val) noexcept: Event(val) {}

SnapEvent::SnapEvent(const jsbind::String& type) : Event(emlite::Val::global("SnapEvent").new_(type)) {}

SnapEvent::SnapEvent(const jsbind::String& type, const SnapEventInit& eventInitDict) : Event(emlite::Val::global("SnapEvent").new_(type, eventInitDict)) {}

Node SnapEvent::snapTargetBlock() const {
    return Event::get("snapTargetBlock").as<Node>();
}

Node SnapEvent::snapTargetInline() const {
    return Event::get("snapTargetInline").as<Node>();
}


} // namespace webbind