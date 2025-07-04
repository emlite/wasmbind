#include <webbind/XRHitTestSource.hpp>


XRHitTestSource XRHitTestSource::take_ownership(Handle h) noexcept {
        return XRHitTestSource(h);
    }
XRHitTestSource XRHitTestSource::clone() const noexcept { return *this; }
XRHitTestSource::XRHitTestSource(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRHitTestSource::XRHitTestSource(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Undefined XRHitTestSource::cancel() {
    return emlite::Val::call("cancel").as<jsbind::Undefined>();
}

