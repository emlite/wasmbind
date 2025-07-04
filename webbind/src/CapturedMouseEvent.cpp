#include <webbind/CapturedMouseEvent.hpp>


CapturedMouseEvent CapturedMouseEvent::take_ownership(Handle h) noexcept {
        return CapturedMouseEvent(h);
    }
CapturedMouseEvent CapturedMouseEvent::clone() const noexcept { return *this; }
CapturedMouseEvent::CapturedMouseEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
CapturedMouseEvent::CapturedMouseEvent(const emlite::Val &val) noexcept: Event(val) {}


CapturedMouseEvent::CapturedMouseEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict): Event(emlite::Val::global("CapturedMouseEvent").new_(type, eventInitDict)) {}

long CapturedMouseEvent::surfaceX() const {
    return Event::get("surfaceX").as<long>();
}

long CapturedMouseEvent::surfaceY() const {
    return Event::get("surfaceY").as<long>();
}

