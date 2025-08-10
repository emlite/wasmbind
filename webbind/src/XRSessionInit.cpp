#include "webbind/XRSessionInit.hpp"

using emlite::Val;
namespace webbind {

XRSessionInit::XRSessionInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRSessionInit XRSessionInit::take_ownership(Handle h) noexcept {
        return XRSessionInit(h);
    }
XRSessionInit::XRSessionInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRSessionInit::XRSessionInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRSessionInit XRSessionInit::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> XRSessionInit::requiredFeatures() const {
    return emlite::Val::get("requiredFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

void XRSessionInit::requiredFeatures(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("requiredFeatures", value);
}

jsbind::TypedArray<jsbind::String> XRSessionInit::optionalFeatures() const {
    return emlite::Val::get("optionalFeatures").as<jsbind::TypedArray<jsbind::String>>();
}

void XRSessionInit::optionalFeatures(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("optionalFeatures", value);
}


} // namespace webbind