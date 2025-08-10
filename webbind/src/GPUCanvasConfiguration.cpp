#include <webbind/GPUCanvasConfiguration.hpp>
#include <webbind/GPUDevice.hpp>
#include <webbind/GPUCanvasToneMapping.hpp>

using emlite::Val;
namespace webbind {

GPUCanvasConfiguration::GPUCanvasConfiguration(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
GPUCanvasConfiguration GPUCanvasConfiguration::take_ownership(Handle h) noexcept {
        return GPUCanvasConfiguration(h);
    }
GPUCanvasConfiguration::GPUCanvasConfiguration(const emlite::Val &val) noexcept: emlite::Val(val) {}
GPUCanvasConfiguration::GPUCanvasConfiguration() noexcept: emlite::Val(emlite::Val::object()) {}
GPUCanvasConfiguration GPUCanvasConfiguration::clone() const noexcept { return *this; }

GPUDevice GPUCanvasConfiguration::device() const {
    return emlite::Val::get("device").as<GPUDevice>();
}

void GPUCanvasConfiguration::device(const GPUDevice& value) {
    emlite::Val::set("device", value);
}

GPUTextureFormat GPUCanvasConfiguration::format() const {
    return emlite::Val::get("format").as<GPUTextureFormat>();
}

void GPUCanvasConfiguration::format(const GPUTextureFormat& value) {
    emlite::Val::set("format", value);
}

jsbind::Any GPUCanvasConfiguration::usage() const {
    return emlite::Val::get("usage").as<jsbind::Any>();
}

void GPUCanvasConfiguration::usage(const jsbind::Any& value) {
    emlite::Val::set("usage", value);
}

jsbind::TypedArray<GPUTextureFormat> GPUCanvasConfiguration::viewFormats() const {
    return emlite::Val::get("viewFormats").as<jsbind::TypedArray<GPUTextureFormat>>();
}

void GPUCanvasConfiguration::viewFormats(const jsbind::TypedArray<GPUTextureFormat>& value) {
    emlite::Val::set("viewFormats", value);
}

PredefinedColorSpace GPUCanvasConfiguration::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void GPUCanvasConfiguration::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}

GPUCanvasToneMapping GPUCanvasConfiguration::toneMapping() const {
    return emlite::Val::get("toneMapping").as<GPUCanvasToneMapping>();
}

void GPUCanvasConfiguration::toneMapping(const GPUCanvasToneMapping& value) {
    emlite::Val::set("toneMapping", value);
}

GPUCanvasAlphaMode GPUCanvasConfiguration::alphaMode() const {
    return emlite::Val::get("alphaMode").as<GPUCanvasAlphaMode>();
}

void GPUCanvasConfiguration::alphaMode(const GPUCanvasAlphaMode& value) {
    emlite::Val::set("alphaMode", value);
}


} // namespace webbind