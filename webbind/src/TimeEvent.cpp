#include <webbind/TimeEvent.hpp>
#include <webbind/Window.hpp>


TimeEvent TimeEvent::take_ownership(Handle h) noexcept {
        return TimeEvent(h);
    }
TimeEvent TimeEvent::clone() const noexcept { return *this; }
emlite::Val TimeEvent::instance() noexcept { return emlite::Val::global("TimeEvent"); }
TimeEvent::TimeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
TimeEvent::TimeEvent(const emlite::Val &val) noexcept: Event(val) {}


jsbind::Any TimeEvent::view() const {
    return Event::get("view").as<jsbind::Any>();
}

long TimeEvent::detail() const {
    return Event::get("detail").as<long>();
}

jsbind::Undefined TimeEvent::initTimeEvent(const jsbind::String& typeArg, const Window& viewArg, long detailArg) {
    return Event::call("initTimeEvent", typeArg, viewArg, detailArg).as<jsbind::Undefined>();
}

