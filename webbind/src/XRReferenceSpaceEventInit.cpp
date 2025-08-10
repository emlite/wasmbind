#include "webbind/XRReferenceSpaceEventInit.hpp"
#include "webbind/XRReferenceSpace.hpp"
#include "webbind/XRRigidTransform.hpp"

using emlite::Val;
namespace webbind {

XRReferenceSpaceEventInit::XRReferenceSpaceEventInit(Handle h) noexcept : EventInit(emlite::Val::take_ownership(h)) {}
XRReferenceSpaceEventInit XRReferenceSpaceEventInit::take_ownership(Handle h) noexcept {
        return XRReferenceSpaceEventInit(h);
    }
XRReferenceSpaceEventInit::XRReferenceSpaceEventInit(const emlite::Val &val) noexcept: EventInit(val) {}
XRReferenceSpaceEventInit::XRReferenceSpaceEventInit() noexcept: EventInit(emlite::Val::object()) {}
XRReferenceSpaceEventInit XRReferenceSpaceEventInit::clone() const noexcept { return *this; }

XRReferenceSpace XRReferenceSpaceEventInit::referenceSpace() const {
    return emlite::Val::get("referenceSpace").as<XRReferenceSpace>();
}

void XRReferenceSpaceEventInit::referenceSpace(const XRReferenceSpace& value) {
    emlite::Val::set("referenceSpace", value);
}

XRRigidTransform XRReferenceSpaceEventInit::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}

void XRReferenceSpaceEventInit::transform(const XRRigidTransform& value) {
    emlite::Val::set("transform", value);
}


} // namespace webbind