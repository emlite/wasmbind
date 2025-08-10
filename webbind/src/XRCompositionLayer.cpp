#include <webbind/XRCompositionLayer.hpp>

namespace webbind {

XRCompositionLayer XRCompositionLayer::take_ownership(Handle h) noexcept {
    return XRCompositionLayer(h);
}

XRCompositionLayer XRCompositionLayer::clone() const noexcept { return *this; }

emlite::Val XRCompositionLayer::instance() noexcept { return emlite::Val::global("XRCompositionLayer"); }

XRCompositionLayer::XRCompositionLayer(Handle h) noexcept : XRLayer(emlite::Val::take_ownership(h)) {}

XRCompositionLayer::XRCompositionLayer(const emlite::Val &val) noexcept: XRLayer(val) {}

XRLayerLayout XRCompositionLayer::layout() const {
    return XRLayer::get("layout").as<XRLayerLayout>();
}

bool XRCompositionLayer::blendTextureSourceAlpha() const {
    return XRLayer::get("blendTextureSourceAlpha").as<bool>();
}

void XRCompositionLayer::blendTextureSourceAlpha(bool value) {
    XRLayer::set("blendTextureSourceAlpha", value);
}

bool XRCompositionLayer::forceMonoPresentation() const {
    return XRLayer::get("forceMonoPresentation").as<bool>();
}

void XRCompositionLayer::forceMonoPresentation(bool value) {
    XRLayer::set("forceMonoPresentation", value);
}

float XRCompositionLayer::opacity() const {
    return XRLayer::get("opacity").as<float>();
}

void XRCompositionLayer::opacity(float value) {
    XRLayer::set("opacity", value);
}

unsigned long XRCompositionLayer::mipLevels() const {
    return XRLayer::get("mipLevels").as<unsigned long>();
}

XRLayerQuality XRCompositionLayer::quality() const {
    return XRLayer::get("quality").as<XRLayerQuality>();
}

void XRCompositionLayer::quality(const XRLayerQuality& value) {
    XRLayer::set("quality", value);
}

bool XRCompositionLayer::needsRedraw() const {
    return XRLayer::get("needsRedraw").as<bool>();
}

jsbind::Undefined XRCompositionLayer::destroy() {
    return XRLayer::call("destroy").as<jsbind::Undefined>();
}


} // namespace webbind