#include "webbind/XRMediaLayerInit.hpp"
#include "webbind/XRSpace.hpp"

using emlite::Val;
namespace webbind {

XRMediaLayerInit::XRMediaLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRMediaLayerInit XRMediaLayerInit::take_ownership(Handle h) noexcept {
        return XRMediaLayerInit(h);
    }
XRMediaLayerInit::XRMediaLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRMediaLayerInit::XRMediaLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRMediaLayerInit XRMediaLayerInit::clone() const noexcept { return *this; }

XRSpace XRMediaLayerInit::space() const {
    return emlite::Val::get("space").as<XRSpace>();
}

void XRMediaLayerInit::space(const XRSpace& value) {
    emlite::Val::set("space", value);
}

XRLayerLayout XRMediaLayerInit::layout() const {
    return emlite::Val::get("layout").as<XRLayerLayout>();
}

void XRMediaLayerInit::layout(const XRLayerLayout& value) {
    emlite::Val::set("layout", value);
}

bool XRMediaLayerInit::invertStereo() const {
    return emlite::Val::get("invertStereo").as<bool>();
}

void XRMediaLayerInit::invertStereo(bool value) {
    emlite::Val::set("invertStereo", value);
}


} // namespace webbind