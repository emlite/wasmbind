#include <webbind/XRJointPose.hpp>


XRJointPose XRJointPose::take_ownership(Handle h) noexcept {
        return XRJointPose(h);
    }
XRJointPose XRJointPose::clone() const noexcept { return *this; }
XRJointPose::XRJointPose(Handle h) noexcept : XRPose(emlite::Val::take_ownership(h)) {}
XRJointPose::XRJointPose(const emlite::Val &val) noexcept: XRPose(val) {}


float XRJointPose::radius() const {
    return XRPose::get("radius").as<float>();
}

