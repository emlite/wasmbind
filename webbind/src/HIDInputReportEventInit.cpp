#include "webbind/HIDInputReportEventInit.hpp"
#include "webbind/HIDDevice.hpp"

using emlite::Val;
namespace webbind {

HIDInputReportEventInit::HIDInputReportEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
HIDInputReportEventInit HIDInputReportEventInit::take_ownership(Handle h) noexcept {
        return HIDInputReportEventInit(h);
    }
HIDInputReportEventInit::HIDInputReportEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
HIDInputReportEventInit::HIDInputReportEventInit() noexcept: EventInit(emlite::Val::object()) {}
HIDInputReportEventInit HIDInputReportEventInit::clone() const noexcept { return *this; }

HIDDevice HIDInputReportEventInit::device() const {
    return emlite::Val::get("device").as<HIDDevice>();
}

void HIDInputReportEventInit::device(const HIDDevice& value) {
    emlite::Val::set("device", value);
}

unsigned char HIDInputReportEventInit::reportId() const {
    return emlite::Val::get("reportId").as<unsigned char>();
}

void HIDInputReportEventInit::reportId(unsigned char value) {
    emlite::Val::set("reportId", value);
}

jsbind::DataView HIDInputReportEventInit::data() const {
    return emlite::Val::get("data").as<jsbind::DataView>();
}

void HIDInputReportEventInit::data(const jsbind::DataView& value) {
    emlite::Val::set("data", value);
}


} // namespace webbind