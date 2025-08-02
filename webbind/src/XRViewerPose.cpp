#include <webbind/XRViewerPose.hpp>
#include <webbind/XRView.hpp>


XRViewerPose XRViewerPose::take_ownership(Handle h) noexcept {
        return XRViewerPose(h);
    }
XRViewerPose XRViewerPose::clone() const noexcept { return *this; }
emlite::Val XRViewerPose::instance() noexcept { return emlite::Val::global("XRViewerPose"); }
XRViewerPose::XRViewerPose(Handle h) noexcept : XRPose(emlite::Val::take_ownership(h)) {}
XRViewerPose::XRViewerPose(const emlite::Val &val) noexcept: XRPose(val) {}


jsbind::TypedArray<XRView> XRViewerPose::views() const {
    return XRPose::get("views").as<jsbind::TypedArray<XRView>>();
}

