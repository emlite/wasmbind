#include <webbind/GPUCopyExternalImageDestInfo.hpp>

namespace webbind {

GPUCopyExternalImageDestInfo::GPUCopyExternalImageDestInfo(Handle h) noexcept : GPUTexelCopyTextureInfo(emlite::Val::take_ownership(h)) {}
GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo::take_ownership(Handle h) noexcept {
    return GPUCopyExternalImageDestInfo(h);
}

GPUCopyExternalImageDestInfo::GPUCopyExternalImageDestInfo(const emlite::Val &val) noexcept: GPUTexelCopyTextureInfo(val) {}

GPUCopyExternalImageDestInfo::GPUCopyExternalImageDestInfo() noexcept: GPUTexelCopyTextureInfo(emlite::Val::object()) {}

GPUCopyExternalImageDestInfo GPUCopyExternalImageDestInfo::clone() const noexcept { return *this; }

PredefinedColorSpace GPUCopyExternalImageDestInfo::colorSpace() const {
    return emlite::Val::get("colorSpace").as<PredefinedColorSpace>();
}

void GPUCopyExternalImageDestInfo::colorSpace(const PredefinedColorSpace& value) {
    emlite::Val::set("colorSpace", value);
}

bool GPUCopyExternalImageDestInfo::premultipliedAlpha() const {
    return emlite::Val::get("premultipliedAlpha").as<bool>();
}

void GPUCopyExternalImageDestInfo::premultipliedAlpha(bool value) {
    emlite::Val::set("premultipliedAlpha", value);
}


} // namespace webbind