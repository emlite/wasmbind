#include <webbind/XRSubImage.hpp>
#include <webbind/XRViewport.hpp>


XRSubImage XRSubImage::take_ownership(Handle h) noexcept {
        return XRSubImage(h);
    }
XRSubImage XRSubImage::clone() const noexcept { return *this; }
XRSubImage::XRSubImage(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRSubImage::XRSubImage(const emlite::Val &val) noexcept: emlite::Val(val) {}


XRViewport XRSubImage::viewport() const {
    return emlite::Val::get("viewport").as<XRViewport>();
}

