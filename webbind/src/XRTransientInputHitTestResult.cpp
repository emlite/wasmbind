#include <webbind/XRTransientInputHitTestResult.hpp>
#include <webbind/XRInputSource.hpp>
#include <webbind/XRHitTestResult.hpp>


XRTransientInputHitTestResult XRTransientInputHitTestResult::take_ownership(Handle h) noexcept {
        return XRTransientInputHitTestResult(h);
    }
XRTransientInputHitTestResult XRTransientInputHitTestResult::clone() const noexcept { return *this; }
XRTransientInputHitTestResult::XRTransientInputHitTestResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRTransientInputHitTestResult::XRTransientInputHitTestResult(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRInputSource XRTransientInputHitTestResult::inputSource() const {
    return emlite::Val::get("inputSource").as<XRInputSource>();
}

jsbind::FrozenArray<XRHitTestResult> XRTransientInputHitTestResult::results() const {
    return emlite::Val::get("results").as<jsbind::FrozenArray<XRHitTestResult>>();
}

