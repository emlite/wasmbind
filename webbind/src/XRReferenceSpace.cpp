#include <webbind/XRReferenceSpace.hpp>
#include <webbind/XRRigidTransform.hpp>


XRReferenceSpace XRReferenceSpace::take_ownership(Handle h) noexcept {
        return XRReferenceSpace(h);
    }
XRReferenceSpace XRReferenceSpace::clone() const noexcept { return *this; }
XRReferenceSpace::XRReferenceSpace(Handle h) noexcept : XRSpace(emlite::Val::take_ownership(h)) {}
XRReferenceSpace::XRReferenceSpace(const emlite::Val &val) noexcept: XRSpace(val) {}


XRReferenceSpace XRReferenceSpace::getOffsetReferenceSpace(const XRRigidTransform& originOffset) {
    return XRSpace::call("getOffsetReferenceSpace", originOffset).as<XRReferenceSpace>();
}

jsbind::Any XRReferenceSpace::onreset() const {
    return XRSpace::get("onreset").as<jsbind::Any>();
}

void XRReferenceSpace::onreset(const jsbind::Any& value) {
    XRSpace::set("onreset", value);
}

