#include "webbind/XRTransientInputHitTestResult.hpp"
#include "webbind/XRInputSource.hpp"
#include "webbind/XRHitTestResult.hpp"

namespace webbind {

XRTransientInputHitTestResult XRTransientInputHitTestResult::take_ownership(Handle h) noexcept {
        return XRTransientInputHitTestResult(h);
    }
XRTransientInputHitTestResult XRTransientInputHitTestResult::clone() const noexcept { return *this; }
emlite::Val XRTransientInputHitTestResult::instance() noexcept { return emlite::Val::global("XRTransientInputHitTestResult"); }
XRTransientInputHitTestResult::XRTransientInputHitTestResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRTransientInputHitTestResult::XRTransientInputHitTestResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

XRInputSource XRTransientInputHitTestResult::inputSource() const {
    return emlite::Val::get("inputSource").as<XRInputSource>();
}

jsbind::TypedArray<XRHitTestResult> XRTransientInputHitTestResult::results() const {
    return emlite::Val::get("results").as<jsbind::TypedArray<XRHitTestResult>>();
}


} // namespace webbind