#include <webbind/HIDInputReportEvent.hpp>
#include <webbind/HIDInputReportEventInit.hpp>
#include <webbind/HIDDevice.hpp>

namespace webbind {

HIDInputReportEvent HIDInputReportEvent::take_ownership(Handle h) noexcept {
        return HIDInputReportEvent(h);
    }
HIDInputReportEvent HIDInputReportEvent::clone() const noexcept { return *this; }
emlite::Val HIDInputReportEvent::instance() noexcept { return emlite::Val::global("HIDInputReportEvent"); }
HIDInputReportEvent::HIDInputReportEvent(Handle h) noexcept : Event(emlite::Val::take_ownership(h)) {}
HIDInputReportEvent::HIDInputReportEvent(const emlite::Val &val) noexcept: Event(val) {}

HIDInputReportEvent::HIDInputReportEvent(const jsbind::String& type, const HIDInputReportEventInit& eventInitDict) : Event(emlite::Val::global("HIDInputReportEvent").new_(type, eventInitDict)) {}

HIDDevice HIDInputReportEvent::device() const {
    return Event::get("device").as<HIDDevice>();
}

unsigned char HIDInputReportEvent::reportId() const {
    return Event::get("reportId").as<unsigned char>();
}

jsbind::DataView HIDInputReportEvent::data() const {
    return Event::get("data").as<jsbind::DataView>();
}


} // namespace webbind