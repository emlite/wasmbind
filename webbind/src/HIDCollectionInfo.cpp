#include <webbind/HIDCollectionInfo.hpp>
#include <webbind/HIDReportInfo.hpp>

using emlite::Val;
namespace webbind {

HIDCollectionInfo::HIDCollectionInfo(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
HIDCollectionInfo HIDCollectionInfo::take_ownership(Handle h) noexcept {
        return HIDCollectionInfo(h);
    }
HIDCollectionInfo::HIDCollectionInfo(const emlite::Val &val) noexcept: emlite::Val(val) {}
HIDCollectionInfo::HIDCollectionInfo() noexcept: emlite::Val(emlite::Val::object()) {}
HIDCollectionInfo HIDCollectionInfo::clone() const noexcept { return *this; }

unsigned short HIDCollectionInfo::usagePage() const {
    return emlite::Val::get("usagePage").as<unsigned short>();
}

void HIDCollectionInfo::usagePage(unsigned short value) {
    emlite::Val::set("usagePage", value);
}

unsigned short HIDCollectionInfo::usage() const {
    return emlite::Val::get("usage").as<unsigned short>();
}

void HIDCollectionInfo::usage(unsigned short value) {
    emlite::Val::set("usage", value);
}

unsigned char HIDCollectionInfo::type() const {
    return emlite::Val::get("type").as<unsigned char>();
}

void HIDCollectionInfo::type(unsigned char value) {
    emlite::Val::set("type", value);
}

jsbind::TypedArray<HIDCollectionInfo> HIDCollectionInfo::children() const {
    return emlite::Val::get("children").as<jsbind::TypedArray<HIDCollectionInfo>>();
}

void HIDCollectionInfo::children(const jsbind::TypedArray<HIDCollectionInfo>& value) {
    emlite::Val::set("children", value);
}

jsbind::TypedArray<HIDReportInfo> HIDCollectionInfo::inputReports() const {
    return emlite::Val::get("inputReports").as<jsbind::TypedArray<HIDReportInfo>>();
}

void HIDCollectionInfo::inputReports(const jsbind::TypedArray<HIDReportInfo>& value) {
    emlite::Val::set("inputReports", value);
}

jsbind::TypedArray<HIDReportInfo> HIDCollectionInfo::outputReports() const {
    return emlite::Val::get("outputReports").as<jsbind::TypedArray<HIDReportInfo>>();
}

void HIDCollectionInfo::outputReports(const jsbind::TypedArray<HIDReportInfo>& value) {
    emlite::Val::set("outputReports", value);
}

jsbind::TypedArray<HIDReportInfo> HIDCollectionInfo::featureReports() const {
    return emlite::Val::get("featureReports").as<jsbind::TypedArray<HIDReportInfo>>();
}

void HIDCollectionInfo::featureReports(const jsbind::TypedArray<HIDReportInfo>& value) {
    emlite::Val::set("featureReports", value);
}


} // namespace webbind