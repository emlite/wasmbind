#include "webbind/XRDepthStateInit.hpp"

using emlite::Val;
namespace webbind {

XRDepthStateInit::XRDepthStateInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRDepthStateInit XRDepthStateInit::take_ownership(Handle h) noexcept {
        return XRDepthStateInit(h);
    }
XRDepthStateInit::XRDepthStateInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRDepthStateInit::XRDepthStateInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRDepthStateInit XRDepthStateInit::clone() const noexcept { return *this; }

jsbind::TypedArray<XRDepthUsage> XRDepthStateInit::usagePreference() const {
    return emlite::Val::get("usagePreference").as<jsbind::TypedArray<XRDepthUsage>>();
}

void XRDepthStateInit::usagePreference(const jsbind::TypedArray<XRDepthUsage>& value) {
    emlite::Val::set("usagePreference", value);
}

jsbind::TypedArray<XRDepthDataFormat> XRDepthStateInit::dataFormatPreference() const {
    return emlite::Val::get("dataFormatPreference").as<jsbind::TypedArray<XRDepthDataFormat>>();
}

void XRDepthStateInit::dataFormatPreference(const jsbind::TypedArray<XRDepthDataFormat>& value) {
    emlite::Val::set("dataFormatPreference", value);
}

jsbind::TypedArray<XRDepthType> XRDepthStateInit::depthTypeRequest() const {
    return emlite::Val::get("depthTypeRequest").as<jsbind::TypedArray<XRDepthType>>();
}

void XRDepthStateInit::depthTypeRequest(const jsbind::TypedArray<XRDepthType>& value) {
    emlite::Val::set("depthTypeRequest", value);
}

bool XRDepthStateInit::matchDepthView() const {
    return emlite::Val::get("matchDepthView").as<bool>();
}

void XRDepthStateInit::matchDepthView(bool value) {
    emlite::Val::set("matchDepthView", value);
}


} // namespace webbind