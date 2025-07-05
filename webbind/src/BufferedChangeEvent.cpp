#include <webbind/BufferedChangeEvent.hpp>
#include <webbind/TimeRanges.hpp>


BufferedChangeEvent BufferedChangeEvent::take_ownership(Handle h) noexcept {
        return BufferedChangeEvent(h);
    }
BufferedChangeEvent BufferedChangeEvent::clone() const noexcept { return *this; }
BufferedChangeEvent::BufferedChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
BufferedChangeEvent::BufferedChangeEvent(const emlite::Val &val) noexcept: Event(val) {}


BufferedChangeEvent::BufferedChangeEvent(const jsbind::DOMString& type) : Event(emlite::Val::global("BufferedChangeEvent").new_(type)) {}

BufferedChangeEvent::BufferedChangeEvent(const jsbind::DOMString& type, const jsbind::Any& eventInitDict) : Event(emlite::Val::global("BufferedChangeEvent").new_(type, eventInitDict)) {}

TimeRanges BufferedChangeEvent::addedRanges() const {
    return Event::get("addedRanges").as<TimeRanges>();
}

TimeRanges BufferedChangeEvent::removedRanges() const {
    return Event::get("removedRanges").as<TimeRanges>();
}

