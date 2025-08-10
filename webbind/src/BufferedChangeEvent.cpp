#include <webbind/BufferedChangeEvent.hpp>
#include <webbind/BufferedChangeEventInit.hpp>
#include <webbind/TimeRanges.hpp>

namespace webbind {

BufferedChangeEvent BufferedChangeEvent::take_ownership(Handle h) noexcept {
        return BufferedChangeEvent(h);
    }
BufferedChangeEvent BufferedChangeEvent::clone() const noexcept { return *this; }
emlite::Val BufferedChangeEvent::instance() noexcept { return emlite::Val::global("BufferedChangeEvent"); }
BufferedChangeEvent::BufferedChangeEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
BufferedChangeEvent::BufferedChangeEvent(const emlite::Val &val) noexcept: Event(val) {}

BufferedChangeEvent::BufferedChangeEvent(const jsbind::String& type) : Event(emlite::Val::global("BufferedChangeEvent").new_(type)) {}

BufferedChangeEvent::BufferedChangeEvent(const jsbind::String& type, const BufferedChangeEventInit& eventInitDict) : Event(emlite::Val::global("BufferedChangeEvent").new_(type, eventInitDict)) {}

TimeRanges BufferedChangeEvent::addedRanges() const {
    return Event::get("addedRanges").as<TimeRanges>();
}

TimeRanges BufferedChangeEvent::removedRanges() const {
    return Event::get("removedRanges").as<TimeRanges>();
}


} // namespace webbind