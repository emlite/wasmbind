#include <webbind/XRHitTestOptionsInit.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/XRRay.hpp>

namespace webbind {

XRHitTestOptionsInit::XRHitTestOptionsInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRHitTestOptionsInit XRHitTestOptionsInit::take_ownership(Handle h) noexcept {
    return XRHitTestOptionsInit(h);
}

XRHitTestOptionsInit::XRHitTestOptionsInit(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRHitTestOptionsInit::XRHitTestOptionsInit() noexcept: emlite::Val(emlite::Val::object()) {}

XRHitTestOptionsInit XRHitTestOptionsInit::clone() const noexcept { return *this; }

XRSpace XRHitTestOptionsInit::space() const {
    return emlite::Val::get("space").as<XRSpace>();
}

void XRHitTestOptionsInit::space(const XRSpace& value) {
    emlite::Val::set("space", value);
}

jsbind::TypedArray<XRHitTestTrackableType> XRHitTestOptionsInit::entityTypes() const {
    return emlite::Val::get("entityTypes").as<jsbind::TypedArray<XRHitTestTrackableType>>();
}

void XRHitTestOptionsInit::entityTypes(const jsbind::TypedArray<XRHitTestTrackableType>& value) {
    emlite::Val::set("entityTypes", value);
}

XRRay XRHitTestOptionsInit::offsetRay() const {
    return emlite::Val::get("offsetRay").as<XRRay>();
}

void XRHitTestOptionsInit::offsetRay(const XRRay& value) {
    emlite::Val::set("offsetRay", value);
}


} // namespace webbind