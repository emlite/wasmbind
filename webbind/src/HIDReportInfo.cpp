#include "webbind/HIDReportInfo.hpp"
#include "webbind/HIDReportItem.hpp"

using emlite::Val;
namespace webbind {

HIDReportInfo::HIDReportInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDReportInfo HIDReportInfo::take_ownership(Handle h) noexcept {
        return HIDReportInfo(h);
    }
HIDReportInfo::HIDReportInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
HIDReportInfo::HIDReportInfo() noexcept: emlite::Val(emlite::Val::object()) {}
HIDReportInfo HIDReportInfo::clone() const noexcept { return *this; }

unsigned char HIDReportInfo::reportId() const {
    return emlite::Val::get("reportId").as<unsigned char>();
}

void HIDReportInfo::reportId(unsigned char value) {
    emlite::Val::set("reportId", value);
}

jsbind::TypedArray<HIDReportItem> HIDReportInfo::items() const {
    return emlite::Val::get("items").as<jsbind::TypedArray<HIDReportItem>>();
}

void HIDReportInfo::items(const jsbind::TypedArray<HIDReportItem>& value) {
    emlite::Val::set("items", value);
}


} // namespace webbind