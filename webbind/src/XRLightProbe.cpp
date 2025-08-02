#include <webbind/XRLightProbe.hpp>
#include <webbind/XRSpace.hpp>


XRLightProbe XRLightProbe::take_ownership(Handle h) noexcept {
        return XRLightProbe(h);
    }
XRLightProbe XRLightProbe::clone() const noexcept { return *this; }
emlite::Val XRLightProbe::instance() noexcept { return emlite::Val::global("XRLightProbe"); }
XRLightProbe::XRLightProbe(Handle h) noexcept : EventTarget(emlite::Val::take_ownership(h)) {}
XRLightProbe::XRLightProbe(const emlite::Val &val) noexcept: EventTarget(val) {}


XRSpace XRLightProbe::probeSpace() const {
    return EventTarget::get("probeSpace").as<XRSpace>();
}

jsbind::Any XRLightProbe::onreflectionchange() const {
    return EventTarget::get("onreflectionchange").as<jsbind::Any>();
}

void XRLightProbe::onreflectionchange(const jsbind::Any& value) {
    EventTarget::set("onreflectionchange", value);
}

