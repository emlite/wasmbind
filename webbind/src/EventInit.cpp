#include "webbind/EventInit.hpp"

using emlite::Val;
namespace webbind {

EventInit::EventInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
EventInit EventInit::take_ownership(Handle h) noexcept {
        return EventInit(h);
    }
EventInit::EventInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
EventInit::EventInit() noexcept: emlite::Val(emlite::Val::object()) {}
EventInit EventInit::clone() const noexcept { return *this; }

bool EventInit::bubbles() const {
    return emlite::Val::get("bubbles").as<bool>();
}

void EventInit::bubbles(bool value) {
    emlite::Val::set("bubbles", value);
}

bool EventInit::cancelable() const {
    return emlite::Val::get("cancelable").as<bool>();
}

void EventInit::cancelable(bool value) {
    emlite::Val::set("cancelable", value);
}

bool EventInit::composed() const {
    return emlite::Val::get("composed").as<bool>();
}

void EventInit::composed(bool value) {
    emlite::Val::set("composed", value);
}


} // namespace webbind