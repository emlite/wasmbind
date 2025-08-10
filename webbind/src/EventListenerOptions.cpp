#include "webbind/EventListenerOptions.hpp"

using emlite::Val;
namespace webbind {

EventListenerOptions::EventListenerOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EventListenerOptions EventListenerOptions::take_ownership(Handle h) noexcept {
        return EventListenerOptions(h);
    }
EventListenerOptions::EventListenerOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
EventListenerOptions::EventListenerOptions() noexcept: emlite::Val(emlite::Val::object()) {}
EventListenerOptions EventListenerOptions::clone() const noexcept { return *this; }

bool EventListenerOptions::capture() const {
    return emlite::Val::get("capture").as<bool>();
}

void EventListenerOptions::capture(bool value) {
    emlite::Val::set("capture", value);
}


} // namespace webbind