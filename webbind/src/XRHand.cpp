#include <webbind/XRHand.hpp>
#include <webbind/XRJointSpace.hpp>


XRHand XRHand::take_ownership(Handle h) noexcept {
        return XRHand(h);
    }
XRHand XRHand::clone() const noexcept { return *this; }
XRHand::XRHand(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRHand::XRHand(const emlite::Val &val) noexcept: emlite::Val(val) {}


unsigned long XRHand::size() const {
    return emlite::Val::get("size").as<unsigned long>();
}

XRJointSpace XRHand::get(const XRHandJoint& key) {
    return emlite::Val::call("get", key).as<XRJointSpace>();
}

