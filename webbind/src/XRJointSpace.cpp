#include <webbind/XRJointSpace.hpp>


XRJointSpace XRJointSpace::take_ownership(Handle h) noexcept {
        return XRJointSpace(h);
    }
XRJointSpace XRJointSpace::clone() const noexcept { return *this; }
XRJointSpace::XRJointSpace(Handle h) noexcept : XRSpace(emlite::Val::take_ownership(h)) {}
XRJointSpace::XRJointSpace(const emlite::Val &val) noexcept: XRSpace(val) {}


XRHandJoint XRJointSpace::jointName() const {
    return XRSpace::get("jointName").as<XRHandJoint>();
}

