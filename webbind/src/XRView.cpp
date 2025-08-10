#include <webbind/XRView.hpp>
#include <webbind/XRCamera.hpp>
#include <webbind/XRRigidTransform.hpp>

namespace webbind {

XRView XRView::take_ownership(Handle h) noexcept {
        return XRView(h);
    }
XRView XRView::clone() const noexcept { return *this; }
emlite::Val XRView::instance() noexcept { return emlite::Val::global("XRView"); }
XRView::XRView(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRView::XRView(const emlite::Val &val) noexcept: emlite::Val(val) {}

XREye XRView::eye() const {
    return emlite::Val::get("eye").as<XREye>();
}

double XRView::recommendedViewportScale() const {
    return emlite::Val::get("recommendedViewportScale").as<double>();
}

jsbind::Undefined XRView::requestViewportScale(double scale) {
    return emlite::Val::call("requestViewportScale", scale).as<jsbind::Undefined>();
}

XRCamera XRView::camera() const {
    return emlite::Val::get("camera").as<XRCamera>();
}

bool XRView::isFirstPersonObserver() const {
    return emlite::Val::get("isFirstPersonObserver").as<bool>();
}

jsbind::Float32Array XRView::projectionMatrix() const {
    return emlite::Val::get("projectionMatrix").as<jsbind::Float32Array>();
}

XRRigidTransform XRView::transform() const {
    return emlite::Val::get("transform").as<XRRigidTransform>();
}


} // namespace webbind