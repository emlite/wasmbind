#include <webbind/BufferedChangeEventInit.hpp>
#include <webbind/TimeRanges.hpp>

using emlite::Val;
namespace webbind {

BufferedChangeEventInit::BufferedChangeEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
BufferedChangeEventInit BufferedChangeEventInit::take_ownership(Handle h) noexcept {
        return BufferedChangeEventInit(h);
    }
BufferedChangeEventInit::BufferedChangeEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
BufferedChangeEventInit::BufferedChangeEventInit() noexcept: EventInit(emlite::Val::object()) {}
BufferedChangeEventInit BufferedChangeEventInit::clone() const noexcept { return *this; }

TimeRanges BufferedChangeEventInit::addedRanges() const {
    return emlite::Val::get("addedRanges").as<TimeRanges>();
}

void BufferedChangeEventInit::addedRanges(const TimeRanges& value) {
    emlite::Val::set("addedRanges", value);
}

TimeRanges BufferedChangeEventInit::removedRanges() const {
    return emlite::Val::get("removedRanges").as<TimeRanges>();
}

void BufferedChangeEventInit::removedRanges(const TimeRanges& value) {
    emlite::Val::set("removedRanges", value);
}


} // namespace webbind