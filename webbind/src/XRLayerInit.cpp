#include <webbind/XRLayerInit.hpp>
#include <webbind/XRSpace.hpp>

using emlite::Val;
namespace webbind {

XRLayerInit::XRLayerInit(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
XRLayerInit XRLayerInit::take_ownership(Handle h) noexcept {
        return XRLayerInit(h);
    }
XRLayerInit::XRLayerInit(const emlite::Val &val) noexcept: emlite::Val(val) {}
XRLayerInit::XRLayerInit() noexcept: emlite::Val(emlite::Val::object()) {}
XRLayerInit XRLayerInit::clone() const noexcept { return *this; }

XRSpace XRLayerInit::space() const {
    return emlite::Val::get("space").as<XRSpace>();
}

void XRLayerInit::space(const XRSpace& value) {
    emlite::Val::set("space", value);
}

jsbind::Any XRLayerInit::colorFormat() const {
    return emlite::Val::get("colorFormat").as<jsbind::Any>();
}

void XRLayerInit::colorFormat(const jsbind::Any& value) {
    emlite::Val::set("colorFormat", value);
}

jsbind::Any XRLayerInit::depthFormat() const {
    return emlite::Val::get("depthFormat").as<jsbind::Any>();
}

void XRLayerInit::depthFormat(const jsbind::Any& value) {
    emlite::Val::set("depthFormat", value);
}

unsigned long XRLayerInit::mipLevels() const {
    return emlite::Val::get("mipLevels").as<unsigned long>();
}

void XRLayerInit::mipLevels(unsigned long value) {
    emlite::Val::set("mipLevels", value);
}

unsigned long XRLayerInit::viewPixelWidth() const {
    return emlite::Val::get("viewPixelWidth").as<unsigned long>();
}

void XRLayerInit::viewPixelWidth(unsigned long value) {
    emlite::Val::set("viewPixelWidth", value);
}

unsigned long XRLayerInit::viewPixelHeight() const {
    return emlite::Val::get("viewPixelHeight").as<unsigned long>();
}

void XRLayerInit::viewPixelHeight(unsigned long value) {
    emlite::Val::set("viewPixelHeight", value);
}

XRLayerLayout XRLayerInit::layout() const {
    return emlite::Val::get("layout").as<XRLayerLayout>();
}

void XRLayerInit::layout(const XRLayerLayout& value) {
    emlite::Val::set("layout", value);
}

bool XRLayerInit::isStatic() const {
    return emlite::Val::get("isStatic").as<bool>();
}

void XRLayerInit::isStatic(bool value) {
    emlite::Val::set("isStatic", value);
}

bool XRLayerInit::clearOnAccess() const {
    return emlite::Val::get("clearOnAccess").as<bool>();
}

void XRLayerInit::clearOnAccess(bool value) {
    emlite::Val::set("clearOnAccess", value);
}


} // namespace webbind