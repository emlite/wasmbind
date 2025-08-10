#include <webbind/EventSourceInit.hpp>

namespace webbind {

EventSourceInit::EventSourceInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EventSourceInit EventSourceInit::take_ownership(Handle h) noexcept {
    return EventSourceInit(h);
}

EventSourceInit::EventSourceInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

EventSourceInit::EventSourceInit() noexcept: emlite::Val(emlite::Val::object()) {}

EventSourceInit EventSourceInit::clone() const noexcept { return *this; }

bool EventSourceInit::withCredentials() const {
    return emlite::Val::get("withCredentials").as<bool>();
}

void EventSourceInit::withCredentials(bool value) {
    emlite::Val::set("withCredentials", value);
}


} // namespace webbind