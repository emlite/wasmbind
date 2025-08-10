#include "webbind/XRLightProbeInit.hpp"

using emlite::Val;
namespace webbind {

XRLightProbeInit::XRLightProbeInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRLightProbeInit XRLightProbeInit::take_ownership(Handle h) noexcept {
        return XRLightProbeInit(h);
    }
XRLightProbeInit::XRLightProbeInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRLightProbeInit::XRLightProbeInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRLightProbeInit XRLightProbeInit::clone() const noexcept { return *this; }

XRReflectionFormat XRLightProbeInit::reflectionFormat() const {
    return emlite::Val::get("reflectionFormat").as<XRReflectionFormat>();
}

void XRLightProbeInit::reflectionFormat(const XRReflectionFormat& value) {
    emlite::Val::set("reflectionFormat", value);
}


} // namespace webbind