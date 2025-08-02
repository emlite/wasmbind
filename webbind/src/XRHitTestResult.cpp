#include <webbind/XRHitTestResult.hpp>
#include <webbind/XRPose.hpp>
#include <webbind/XRSpace.hpp>
#include <webbind/XRAnchor.hpp>


XRHitTestResult XRHitTestResult::take_ownership(Handle h) noexcept {
        return XRHitTestResult(h);
    }
XRHitTestResult XRHitTestResult::clone() const noexcept { return *this; }
emlite::Val XRHitTestResult::instance() noexcept { return emlite::Val::global("XRHitTestResult"); }
XRHitTestResult::XRHitTestResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRHitTestResult::XRHitTestResult(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRPose XRHitTestResult::getPose(const XRSpace& baseSpace) {
    return emlite::Val::call("getPose", baseSpace).as<XRPose>();
}

jsbind::Promise<XRAnchor> XRHitTestResult::createAnchor() {
    return emlite::Val::call("createAnchor").as<jsbind::Promise<XRAnchor>>();
}

