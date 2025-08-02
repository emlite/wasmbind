#include <webbind/XRTransientInputHitTestSource.hpp>


XRTransientInputHitTestSource XRTransientInputHitTestSource::take_ownership(Handle h) noexcept {
        return XRTransientInputHitTestSource(h);
    }
XRTransientInputHitTestSource XRTransientInputHitTestSource::clone() const noexcept { return *this; }
emlite::Val XRTransientInputHitTestSource::instance() noexcept { return emlite::Val::global("XRTransientInputHitTestSource"); }
XRTransientInputHitTestSource::XRTransientInputHitTestSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRTransientInputHitTestSource::XRTransientInputHitTestSource(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined XRTransientInputHitTestSource::cancel() {
    return emlite::Val::call("cancel").as<jsbind::Undefined>();
}

