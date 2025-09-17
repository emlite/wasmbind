#include <webbind/EventListener.hpp>
#include <webbind/Event.hpp>

namespace webbind {

EventListener EventListener::take_ownership(Handle h) noexcept {
    return EventListener(h);
}

EventListener EventListener::clone() const noexcept { return *this; }

EventListener::EventListener(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

EventListener::EventListener(const emlite::Val &val) noexcept: emlite::Val(val) {}

EventListener::EventListener(const jsbind::Function &fn) noexcept : emlite::Val(fn) {}

EventListener::EventListener(const jsbind::Function::Fn<jsbind::Undefined(Event)> &fn) noexcept : emlite::Val(static_cast<jsbind::Function>(fn)) {}

jsbind::Undefined EventListener::handleEvent(const Event& event) const {
    if (is_function()) {
        return jsbind::Function(*this)(event).as<jsbind::Undefined>();
    }
    return emlite::Val::call("handleEvent", event).as<jsbind::Undefined>();
}


} // namespace webbind