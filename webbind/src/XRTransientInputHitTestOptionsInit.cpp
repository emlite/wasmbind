#include "webbind/XRTransientInputHitTestOptionsInit.hpp"
#include "webbind/XRRay.hpp"

using emlite::Val;
namespace webbind {

XRTransientInputHitTestOptionsInit::XRTransientInputHitTestOptionsInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit::take_ownership(Handle h) noexcept {
        return XRTransientInputHitTestOptionsInit(h);
    }
XRTransientInputHitTestOptionsInit::XRTransientInputHitTestOptionsInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRTransientInputHitTestOptionsInit::XRTransientInputHitTestOptionsInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit::clone() const noexcept { return *this; }

jsbind::String XRTransientInputHitTestOptionsInit::profile() const {
    return emlite::Val::get("profile").as<jsbind::String>();
}

void XRTransientInputHitTestOptionsInit::profile(const jsbind::String& value) {
    emlite::Val::set("profile", value);
}

jsbind::TypedArray<XRHitTestTrackableType> XRTransientInputHitTestOptionsInit::entityTypes() const {
    return emlite::Val::get("entityTypes").as<jsbind::TypedArray<XRHitTestTrackableType>>();
}

void XRTransientInputHitTestOptionsInit::entityTypes(const jsbind::TypedArray<XRHitTestTrackableType>& value) {
    emlite::Val::set("entityTypes", value);
}

XRRay XRTransientInputHitTestOptionsInit::offsetRay() const {
    return emlite::Val::get("offsetRay").as<XRRay>();
}

void XRTransientInputHitTestOptionsInit::offsetRay(const XRRay& value) {
    emlite::Val::set("offsetRay", value);
}


} // namespace webbind