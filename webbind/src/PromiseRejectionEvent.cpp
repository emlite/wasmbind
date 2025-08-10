#include "webbind/PromiseRejectionEvent.hpp"
#include "webbind/PromiseRejectionEventInit.hpp"

namespace webbind {

PromiseRejectionEvent PromiseRejectionEvent::take_ownership(Handle h) noexcept {
        return PromiseRejectionEvent(h);
    }
PromiseRejectionEvent PromiseRejectionEvent::clone() const noexcept { return *this; }
emlite::Val PromiseRejectionEvent::instance() noexcept { return emlite::Val::global("PromiseRejectionEvent"); }
PromiseRejectionEvent::PromiseRejectionEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
PromiseRejectionEvent::PromiseRejectionEvent(const emlite::Val &val) noexcept: Event(val) {}

PromiseRejectionEvent::PromiseRejectionEvent(const jsbind::String& type, const PromiseRejectionEventInit& eventInitDict) : Event(emlite::Val::global("PromiseRejectionEvent").new_(type, eventInitDict)) {}

jsbind::Object PromiseRejectionEvent::promise() const {
    return Event::get("promise").as<jsbind::Object>();
}

jsbind::Any PromiseRejectionEvent::reason() const {
    return Event::get("reason").as<jsbind::Any>();
}


} // namespace webbind